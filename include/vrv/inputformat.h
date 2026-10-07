/////////////////////////////////////////////////////////////////////////////
// Name:        inputformat.h
// Created:     2026
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#ifndef __VRV_INPUTFORMAT_H__
#define __VRV_INPUTFORMAT_H__

#include <functional>
#include <optional>
#include <string>
#include <vector>

//----------------------------------------------------------------------------

#include "toolkitdef.h"

namespace vrv {

class Doc;
class Input;

//----------------------------------------------------------------------------
// InputFormatRegistry
//----------------------------------------------------------------------------

/**
 * Registry of the input formats the Toolkit can load.
 * Each importer registers itself from its own .cpp (see InputFormatRegistrar), so adding a format does not
 * require editing the Toolkit, the Options or a central enum-switch.
 * A format carries its option names, a factory and, optionally, a detector used by the "auto" mode.
 */
class InputFormatRegistry {
public:
    struct Format {
        FileFormat id;
        /** Name used in messages, e.g. "Plaine & Easie" */
        std::string label;
        /** Names accepted by the `--input-from` option */
        std::vector<std::string> names;
        /** False when the importer is compiled out (NO_*_SUPPORT) */
        bool available = true;
        /** Creates the importer. Empty when the Toolkit drives the conversion itself (Humdrum-based converters) */
        std::function<Input *(Doc *)> create;
    };

    /**
     * A detector looks at the data and returns the format, or nothing when it does not recognise it.
     * Returning UNKNOWN stops the search and rejects the data.
     * @param data The whole data
     * @param head The first 600 characters of data
     */
    using Detector = std::function<std::optional<FileFormat>(const std::string &data, const std::string &head)>;

    static InputFormatRegistry &GetInstance();

    void Register(const Format &format);
    /**
     * Detectors are tried by increasing priority. Priorities must be unique: the order matters
     * (e.g. MuseData before PAE, XML formats before Humdrum).
     */
    void RegisterDetector(int priority, const Detector &detector);

    const Format *Find(FileFormat id) const;
    const Format *FindByName(const std::string &name) const;
    /** Returns the first format recognised by a detector, UNKNOWN if rejected, MEI if nobody matches */
    FileFormat Detect(const std::string &data) const;

private:
    InputFormatRegistry() = default;

private:
    std::vector<Format> m_formats;
    std::vector<std::pair<int, Detector>> m_detectors;
};

//----------------------------------------------------------------------------
// InputFormatRegistrar
//----------------------------------------------------------------------------

/**
 * Registers a format (and optionally its detector) at static-initialisation time. Declare a static instance
 * at the end of the importer's .cpp:
 *
 *   static const InputFormatRegistrar s_registrar({ GABC, "GABC", { "gabc" }, true, [](Doc *doc) -> Input * { return
 * new GABCInput(doc); } });
 */
class InputFormatRegistrar {
public:
    InputFormatRegistrar(const InputFormatRegistry::Format &format);
    InputFormatRegistrar(int priority, const InputFormatRegistry::Detector &detector);
};

} // namespace vrv

#endif
