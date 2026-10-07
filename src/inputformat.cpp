/////////////////////////////////////////////////////////////////////////////
// Name:        inputformat.cpp
// Created:     2026
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#include "inputformat.h"

//----------------------------------------------------------------------------

#include <algorithm>
#include <cassert>

//----------------------------------------------------------------------------

namespace vrv {

//----------------------------------------------------------------------------
// InputFormatRegistry
//----------------------------------------------------------------------------

InputFormatRegistry &InputFormatRegistry::GetInstance()
{
    // Constructed on first use: registrars run during static initialisation in an unspecified order
    static InputFormatRegistry s_instance;
    return s_instance;
}

FileFormat InputFormatRegistry::NewFormatId()
{
    return static_cast<FileFormat>(static_cast<int>(SERIALIZATION) + 1 + m_customFormats++);
}

void InputFormatRegistry::Register(const Format &format)
{
    m_formats.push_back(format);
}

void InputFormatRegistry::RegisterDetector(int priority, const Detector &detector)
{
    assert(std::none_of(
        m_detectors.begin(), m_detectors.end(), [priority](const auto &d) { return d.first == priority; }));
    auto it = std::upper_bound(m_detectors.begin(), m_detectors.end(), priority,
        [](int value, const std::pair<int, Detector> &d) { return value < d.first; });
    m_detectors.insert(it, { priority, detector });
}

const InputFormatRegistry::Format *InputFormatRegistry::Find(FileFormat id) const
{
    auto it = std::find_if(m_formats.begin(), m_formats.end(), [id](const Format &f) { return f.id == id; });
    return (it == m_formats.end()) ? NULL : &(*it);
}

const InputFormatRegistry::Format *InputFormatRegistry::FindByName(const std::string &name) const
{
    for (const Format &format : m_formats) {
        if (std::find(format.names.begin(), format.names.end(), name) != format.names.end()) return &format;
    }
    return NULL;
}

FileFormat InputFormatRegistry::Detect(const std::string &data) const
{
    const std::string head = data.substr(0, 600);
    for (const auto &detector : m_detectors) {
        const std::optional<FileFormat> format = detector.second(data, head);
        if (format) return *format;
    }
    // Assume that the input is MEI if other input types were not detected.
    return MEI;
}

//----------------------------------------------------------------------------
// InputFormatRegistrar
//----------------------------------------------------------------------------

InputFormatRegistrar::InputFormatRegistrar(const InputFormatRegistry::Format &format)
{
    InputFormatRegistry::GetInstance().Register(format);
}

InputFormatRegistrar::InputFormatRegistrar(int priority, const InputFormatRegistry::Detector &detector)
{
    InputFormatRegistry::GetInstance().RegisterDetector(priority, detector);
}

} // namespace vrv
