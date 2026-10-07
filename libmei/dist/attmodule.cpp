/////////////////////////////////////////////////////////////////////////////
// Authors:     Laurent Pugin and Rodolfo Zitellini
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// NOTE: this file was generated with the Verovio libmei version and
// should not be edited because changes will be lost.
/////////////////////////////////////////////////////////////////////////////

#include "attmodule.h"

//----------------------------------------------------------------------------

#include <cassert>

//----------------------------------------------------------------------------

#include "object.h"

#include "atts_mei.h"

namespace vrv {

//----------------------------------------------------------------------------
// Mei
//----------------------------------------------------------------------------

bool AttModule::SetMei(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_NOTATIONTYPE)) {
        AttNotationType *att = element->GetAtt<AttNotationType>(ATT_NOTATIONTYPE);
        assert(att);
        if (attrType == "notationtype") {
            att->SetNotationtype(att->StrToNotationtype(attrValue));
            return true;
        }
        if (attrType == "notationsubtype") {
            att->SetNotationsubtype(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetMei(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_NOTATIONTYPE)) {
        const AttNotationType *att = element->GetAtt<AttNotationType>(ATT_NOTATIONTYPE);
        assert(att);
        if (att->HasNotationtype()) {
            attributes->push_back({ "notationtype", att->NotationtypeToStr(att->GetNotationtype()) });
        }
        if (att->HasNotationsubtype()) {
            attributes->push_back({ "notationsubtype", att->StrToStr(att->GetNotationsubtype()) });
        }
    }
}

void AttModule::CopyMei(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_NOTATIONTYPE)) {
        const AttNotationType *att = element->GetAtt<AttNotationType>(ATT_NOTATIONTYPE);
        assert(att);
        AttNotationType *attTarget = target->GetAtt<AttNotationType>(ATT_NOTATIONTYPE);
        assert(attTarget);
        attTarget->SetNotationtype(att->GetNotationtype());
        attTarget->SetNotationsubtype(att->GetNotationsubtype());
    }
}

} // namespace vrv

#include "atts_analytical.h"

namespace vrv {

//----------------------------------------------------------------------------
// Analytical
//----------------------------------------------------------------------------

bool AttModule::SetAnalytical(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_HARMANL)) {
        AttHarmAnl *att = element->GetAtt<AttHarmAnl>(ATT_HARMANL);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToHarmAnlForm(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_HARMONICFUNCTION)) {
        AttHarmonicFunction *att = element->GetAtt<AttHarmonicFunction>(ATT_HARMONICFUNCTION);
        assert(att);
        if (attrType == "deg") {
            att->SetDeg(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_INTERVALHARMONIC)) {
        AttIntervalHarmonic *att = element->GetAtt<AttIntervalHarmonic>(ATT_INTERVALHARMONIC);
        assert(att);
        if (attrType == "inth") {
            att->SetInth(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_INTERVALMELODIC)) {
        AttIntervalMelodic *att = element->GetAtt<AttIntervalMelodic>(ATT_INTERVALMELODIC);
        assert(att);
        if (attrType == "intm") {
            att->SetIntm(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_KEYSIGANL)) {
        AttKeySigAnl *att = element->GetAtt<AttKeySigAnl>(ATT_KEYSIGANL);
        assert(att);
        if (attrType == "accid") {
            att->SetAccid(att->StrToAccidentalGesturalBasic(attrValue));
            return true;
        }
        if (attrType == "mode") {
            att->SetMode(att->StrToMode(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_KEYSIGDEFAULTANL)) {
        AttKeySigDefaultAnl *att = element->GetAtt<AttKeySigDefaultAnl>(ATT_KEYSIGDEFAULTANL);
        assert(att);
        if (attrType == "key.accid") {
            att->SetKeyAccid(att->StrToAccidentalGesturalBasic(attrValue));
            return true;
        }
        if (attrType == "key.mode") {
            att->SetKeyMode(att->StrToMode(attrValue));
            return true;
        }
        if (attrType == "key.pname") {
            att->SetKeyPname(att->StrToPitchname(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MELODICFUNCTION)) {
        AttMelodicFunction *att = element->GetAtt<AttMelodicFunction>(ATT_MELODICFUNCTION);
        assert(att);
        if (attrType == "mfunc") {
            att->SetMfunc(att->StrToMelodicfunction(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PITCHCLASS)) {
        AttPitchClass *att = element->GetAtt<AttPitchClass>(ATT_PITCHCLASS);
        assert(att);
        if (attrType == "pclass") {
            att->SetPclass(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SOLFA)) {
        AttSolfa *att = element->GetAtt<AttSolfa>(ATT_SOLFA);
        assert(att);
        if (attrType == "psolfa") {
            att->SetPsolfa(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetAnalytical(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_HARMANL)) {
        const AttHarmAnl *att = element->GetAtt<AttHarmAnl>(ATT_HARMANL);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->HarmAnlFormToStr(att->GetForm()) });
        }
    }
    if (element->HasAttClass(ATT_HARMONICFUNCTION)) {
        const AttHarmonicFunction *att = element->GetAtt<AttHarmonicFunction>(ATT_HARMONICFUNCTION);
        assert(att);
        if (att->HasDeg()) {
            attributes->push_back({ "deg", att->StrToStr(att->GetDeg()) });
        }
    }
    if (element->HasAttClass(ATT_INTERVALHARMONIC)) {
        const AttIntervalHarmonic *att = element->GetAtt<AttIntervalHarmonic>(ATT_INTERVALHARMONIC);
        assert(att);
        if (att->HasInth()) {
            attributes->push_back({ "inth", att->StrToStr(att->GetInth()) });
        }
    }
    if (element->HasAttClass(ATT_INTERVALMELODIC)) {
        const AttIntervalMelodic *att = element->GetAtt<AttIntervalMelodic>(ATT_INTERVALMELODIC);
        assert(att);
        if (att->HasIntm()) {
            attributes->push_back({ "intm", att->StrToStr(att->GetIntm()) });
        }
    }
    if (element->HasAttClass(ATT_KEYSIGANL)) {
        const AttKeySigAnl *att = element->GetAtt<AttKeySigAnl>(ATT_KEYSIGANL);
        assert(att);
        if (att->HasAccid()) {
            attributes->push_back({ "accid", att->AccidentalGesturalBasicToStr(att->GetAccid()) });
        }
        if (att->HasMode()) {
            attributes->push_back({ "mode", att->ModeToStr(att->GetMode()) });
        }
    }
    if (element->HasAttClass(ATT_KEYSIGDEFAULTANL)) {
        const AttKeySigDefaultAnl *att = element->GetAtt<AttKeySigDefaultAnl>(ATT_KEYSIGDEFAULTANL);
        assert(att);
        if (att->HasKeyAccid()) {
            attributes->push_back({ "key.accid", att->AccidentalGesturalBasicToStr(att->GetKeyAccid()) });
        }
        if (att->HasKeyMode()) {
            attributes->push_back({ "key.mode", att->ModeToStr(att->GetKeyMode()) });
        }
        if (att->HasKeyPname()) {
            attributes->push_back({ "key.pname", att->PitchnameToStr(att->GetKeyPname()) });
        }
    }
    if (element->HasAttClass(ATT_MELODICFUNCTION)) {
        const AttMelodicFunction *att = element->GetAtt<AttMelodicFunction>(ATT_MELODICFUNCTION);
        assert(att);
        if (att->HasMfunc()) {
            attributes->push_back({ "mfunc", att->MelodicfunctionToStr(att->GetMfunc()) });
        }
    }
    if (element->HasAttClass(ATT_PITCHCLASS)) {
        const AttPitchClass *att = element->GetAtt<AttPitchClass>(ATT_PITCHCLASS);
        assert(att);
        if (att->HasPclass()) {
            attributes->push_back({ "pclass", att->IntToStr(att->GetPclass()) });
        }
    }
    if (element->HasAttClass(ATT_SOLFA)) {
        const AttSolfa *att = element->GetAtt<AttSolfa>(ATT_SOLFA);
        assert(att);
        if (att->HasPsolfa()) {
            attributes->push_back({ "psolfa", att->StrToStr(att->GetPsolfa()) });
        }
    }
}

void AttModule::CopyAnalytical(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_HARMANL)) {
        const AttHarmAnl *att = element->GetAtt<AttHarmAnl>(ATT_HARMANL);
        assert(att);
        AttHarmAnl *attTarget = target->GetAtt<AttHarmAnl>(ATT_HARMANL);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
    if (element->HasAttClass(ATT_HARMONICFUNCTION)) {
        const AttHarmonicFunction *att = element->GetAtt<AttHarmonicFunction>(ATT_HARMONICFUNCTION);
        assert(att);
        AttHarmonicFunction *attTarget = target->GetAtt<AttHarmonicFunction>(ATT_HARMONICFUNCTION);
        assert(attTarget);
        attTarget->SetDeg(att->GetDeg());
    }
    if (element->HasAttClass(ATT_INTERVALHARMONIC)) {
        const AttIntervalHarmonic *att = element->GetAtt<AttIntervalHarmonic>(ATT_INTERVALHARMONIC);
        assert(att);
        AttIntervalHarmonic *attTarget = target->GetAtt<AttIntervalHarmonic>(ATT_INTERVALHARMONIC);
        assert(attTarget);
        attTarget->SetInth(att->GetInth());
    }
    if (element->HasAttClass(ATT_INTERVALMELODIC)) {
        const AttIntervalMelodic *att = element->GetAtt<AttIntervalMelodic>(ATT_INTERVALMELODIC);
        assert(att);
        AttIntervalMelodic *attTarget = target->GetAtt<AttIntervalMelodic>(ATT_INTERVALMELODIC);
        assert(attTarget);
        attTarget->SetIntm(att->GetIntm());
    }
    if (element->HasAttClass(ATT_KEYSIGANL)) {
        const AttKeySigAnl *att = element->GetAtt<AttKeySigAnl>(ATT_KEYSIGANL);
        assert(att);
        AttKeySigAnl *attTarget = target->GetAtt<AttKeySigAnl>(ATT_KEYSIGANL);
        assert(attTarget);
        attTarget->SetAccid(att->GetAccid());
        attTarget->SetMode(att->GetMode());
    }
    if (element->HasAttClass(ATT_KEYSIGDEFAULTANL)) {
        const AttKeySigDefaultAnl *att = element->GetAtt<AttKeySigDefaultAnl>(ATT_KEYSIGDEFAULTANL);
        assert(att);
        AttKeySigDefaultAnl *attTarget = target->GetAtt<AttKeySigDefaultAnl>(ATT_KEYSIGDEFAULTANL);
        assert(attTarget);
        attTarget->SetKeyAccid(att->GetKeyAccid());
        attTarget->SetKeyMode(att->GetKeyMode());
        attTarget->SetKeyPname(att->GetKeyPname());
    }
    if (element->HasAttClass(ATT_MELODICFUNCTION)) {
        const AttMelodicFunction *att = element->GetAtt<AttMelodicFunction>(ATT_MELODICFUNCTION);
        assert(att);
        AttMelodicFunction *attTarget = target->GetAtt<AttMelodicFunction>(ATT_MELODICFUNCTION);
        assert(attTarget);
        attTarget->SetMfunc(att->GetMfunc());
    }
    if (element->HasAttClass(ATT_PITCHCLASS)) {
        const AttPitchClass *att = element->GetAtt<AttPitchClass>(ATT_PITCHCLASS);
        assert(att);
        AttPitchClass *attTarget = target->GetAtt<AttPitchClass>(ATT_PITCHCLASS);
        assert(attTarget);
        attTarget->SetPclass(att->GetPclass());
    }
    if (element->HasAttClass(ATT_SOLFA)) {
        const AttSolfa *att = element->GetAtt<AttSolfa>(ATT_SOLFA);
        assert(att);
        AttSolfa *attTarget = target->GetAtt<AttSolfa>(ATT_SOLFA);
        assert(attTarget);
        attTarget->SetPsolfa(att->GetPsolfa());
    }
}

} // namespace vrv

#include "atts_cmn.h"

namespace vrv {

//----------------------------------------------------------------------------
// Cmn
//----------------------------------------------------------------------------

bool AttModule::SetCmn(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_ARPEGLOG)) {
        AttArpegLog *att = element->GetAtt<AttArpegLog>(ATT_ARPEGLOG);
        assert(att);
        if (attrType == "order") {
            att->SetOrder(att->StrToArpegLogOrder(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BEAMPRESENT)) {
        AttBeamPresent *att = element->GetAtt<AttBeamPresent>(ATT_BEAMPRESENT);
        assert(att);
        if (attrType == "beam") {
            att->SetBeam(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BEAMREND)) {
        AttBeamRend *att = element->GetAtt<AttBeamRend>(ATT_BEAMREND);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToBeamRendForm(attrValue));
            return true;
        }
        if (attrType == "place") {
            att->SetPlace(att->StrToBeamplace(attrValue));
            return true;
        }
        if (attrType == "slash") {
            att->SetSlash(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "slope") {
            att->SetSlope(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BEAMSECONDARY)) {
        AttBeamSecondary *att = element->GetAtt<AttBeamSecondary>(ATT_BEAMSECONDARY);
        assert(att);
        if (attrType == "breaksec") {
            att->SetBreaksec(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BEAMEDWITH)) {
        AttBeamedWith *att = element->GetAtt<AttBeamedWith>(ATT_BEAMEDWITH);
        assert(att);
        if (attrType == "beam.with") {
            att->SetBeamWith(att->StrToNeighboringlayer(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BEAMINGLOG)) {
        AttBeamingLog *att = element->GetAtt<AttBeamingLog>(ATT_BEAMINGLOG);
        assert(att);
        if (attrType == "beam.group") {
            att->SetBeamGroup(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "beam.rests") {
            att->SetBeamRests(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BEATRPTLOG)) {
        AttBeatRptLog *att = element->GetAtt<AttBeatRptLog>(ATT_BEATRPTLOG);
        assert(att);
        if (attrType == "beatdef") {
            att->SetBeatdef(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BRACKETSPANLOG)) {
        AttBracketSpanLog *att = element->GetAtt<AttBracketSpanLog>(ATT_BRACKETSPANLOG);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToBracketSpanLogFunc(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CUTOUT)) {
        AttCutout *att = element->GetAtt<AttCutout>(ATT_CUTOUT);
        assert(att);
        if (attrType == "cutout") {
            att->SetCutout(att->StrToCutoutCutout(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_EXPANDABLE)) {
        AttExpandable *att = element->GetAtt<AttExpandable>(ATT_EXPANDABLE);
        assert(att);
        if (attrType == "expand") {
            att->SetExpand(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_GLISSPRESENT)) {
        AttGlissPresent *att = element->GetAtt<AttGlissPresent>(ATT_GLISSPRESENT);
        assert(att);
        if (attrType == "gliss") {
            att->SetGliss(att->StrToGlissando(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_GRACEGRPLOG)) {
        AttGraceGrpLog *att = element->GetAtt<AttGraceGrpLog>(ATT_GRACEGRPLOG);
        assert(att);
        if (attrType == "attach") {
            att->SetAttach(att->StrToGraceGrpLogAttach(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_GRACED)) {
        AttGraced *att = element->GetAtt<AttGraced>(ATT_GRACED);
        assert(att);
        if (attrType == "grace") {
            att->SetGrace(att->StrToGrace(attrValue));
            return true;
        }
        if (attrType == "grace.time") {
            att->SetGraceTime(att->StrToPercent(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_HAIRPINLOG)) {
        AttHairpinLog *att = element->GetAtt<AttHairpinLog>(ATT_HAIRPINLOG);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToHairpinLogForm(attrValue));
            return true;
        }
        if (attrType == "niente") {
            att->SetNiente(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_HARPPEDALLOG)) {
        AttHarpPedalLog *att = element->GetAtt<AttHarpPedalLog>(ATT_HARPPEDALLOG);
        assert(att);
        if (attrType == "c") {
            att->SetC(att->StrToHarppedalposition(attrValue));
            return true;
        }
        if (attrType == "d") {
            att->SetD(att->StrToHarppedalposition(attrValue));
            return true;
        }
        if (attrType == "e") {
            att->SetE(att->StrToHarppedalposition(attrValue));
            return true;
        }
        if (attrType == "f") {
            att->SetF(att->StrToHarppedalposition(attrValue));
            return true;
        }
        if (attrType == "g") {
            att->SetG(att->StrToHarppedalposition(attrValue));
            return true;
        }
        if (attrType == "a") {
            att->SetA(att->StrToHarppedalposition(attrValue));
            return true;
        }
        if (attrType == "b") {
            att->SetB(att->StrToHarppedalposition(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LVPRESENT)) {
        AttLvPresent *att = element->GetAtt<AttLvPresent>(ATT_LVPRESENT);
        assert(att);
        if (attrType == "lv") {
            att->SetLv(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MEASURELOG)) {
        AttMeasureLog *att = element->GetAtt<AttMeasureLog>(ATT_MEASURELOG);
        assert(att);
        if (attrType == "left") {
            att->SetLeft(att->StrToBarrendition(attrValue));
            return true;
        }
        if (attrType == "right") {
            att->SetRight(att->StrToBarrendition(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_METERSIGGRPLOG)) {
        AttMeterSigGrpLog *att = element->GetAtt<AttMeterSigGrpLog>(ATT_METERSIGGRPLOG);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToMeterSigGrpLogFunc(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NUMBERPLACEMENT)) {
        AttNumberPlacement *att = element->GetAtt<AttNumberPlacement>(ATT_NUMBERPLACEMENT);
        assert(att);
        if (attrType == "num.place") {
            att->SetNumPlace(att->StrToStaffrelBasic(attrValue));
            return true;
        }
        if (attrType == "num.visible") {
            att->SetNumVisible(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NUMBERED)) {
        AttNumbered *att = element->GetAtt<AttNumbered>(ATT_NUMBERED);
        assert(att);
        if (attrType == "num") {
            att->SetNum(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_OCTAVELOG)) {
        AttOctaveLog *att = element->GetAtt<AttOctaveLog>(ATT_OCTAVELOG);
        assert(att);
        if (attrType == "coll") {
            att->SetColl(att->StrToOctaveLogColl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PEDALLOG)) {
        AttPedalLog *att = element->GetAtt<AttPedalLog>(ATT_PEDALLOG);
        assert(att);
        if (attrType == "dir") {
            att->SetDir(att->StrToPedalLogDir(attrValue));
            return true;
        }
        if (attrType == "func") {
            att->SetFunc(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PIANOPEDALS)) {
        AttPianoPedals *att = element->GetAtt<AttPianoPedals>(ATT_PIANOPEDALS);
        assert(att);
        if (attrType == "pedal.style") {
            att->SetPedalStyle(att->StrToPedalstyle(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_REHEARSAL)) {
        AttRehearsal *att = element->GetAtt<AttRehearsal>(ATT_REHEARSAL);
        assert(att);
        if (attrType == "reh.enclose") {
            att->SetRehEnclose(att->StrToRehearsalRehenclose(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SLURREND)) {
        AttSlurRend *att = element->GetAtt<AttSlurRend>(ATT_SLURREND);
        assert(att);
        if (attrType == "slur.lform") {
            att->SetSlurLform(att->StrToLineform(attrValue));
            return true;
        }
        if (attrType == "slur.lwidth") {
            att->SetSlurLwidth(att->StrToLinewidth(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STEMSCMN)) {
        AttStemsCmn *att = element->GetAtt<AttStemsCmn>(ATT_STEMSCMN);
        assert(att);
        if (attrType == "stem.with") {
            att->SetStemWith(att->StrToNeighboringlayer(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TIEREND)) {
        AttTieRend *att = element->GetAtt<AttTieRend>(ATT_TIEREND);
        assert(att);
        if (attrType == "tie.lform") {
            att->SetTieLform(att->StrToLineform(attrValue));
            return true;
        }
        if (attrType == "tie.lwidth") {
            att->SetTieLwidth(att->StrToLinewidth(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TREMFORM)) {
        AttTremForm *att = element->GetAtt<AttTremForm>(ATT_TREMFORM);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToTremFormForm(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TREMMEASURED)) {
        AttTremMeasured *att = element->GetAtt<AttTremMeasured>(ATT_TREMMEASURED);
        assert(att);
        if (attrType == "unitdur") {
            att->SetUnitdur(att->StrToDuration(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetCmn(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_ARPEGLOG)) {
        const AttArpegLog *att = element->GetAtt<AttArpegLog>(ATT_ARPEGLOG);
        assert(att);
        if (att->HasOrder()) {
            attributes->push_back({ "order", att->ArpegLogOrderToStr(att->GetOrder()) });
        }
    }
    if (element->HasAttClass(ATT_BEAMPRESENT)) {
        const AttBeamPresent *att = element->GetAtt<AttBeamPresent>(ATT_BEAMPRESENT);
        assert(att);
        if (att->HasBeam()) {
            attributes->push_back({ "beam", att->StrToStr(att->GetBeam()) });
        }
    }
    if (element->HasAttClass(ATT_BEAMREND)) {
        const AttBeamRend *att = element->GetAtt<AttBeamRend>(ATT_BEAMREND);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->BeamRendFormToStr(att->GetForm()) });
        }
        if (att->HasPlace()) {
            attributes->push_back({ "place", att->BeamplaceToStr(att->GetPlace()) });
        }
        if (att->HasSlash()) {
            attributes->push_back({ "slash", att->BooleanToStr(att->GetSlash()) });
        }
        if (att->HasSlope()) {
            attributes->push_back({ "slope", att->DblToStr(att->GetSlope()) });
        }
    }
    if (element->HasAttClass(ATT_BEAMSECONDARY)) {
        const AttBeamSecondary *att = element->GetAtt<AttBeamSecondary>(ATT_BEAMSECONDARY);
        assert(att);
        if (att->HasBreaksec()) {
            attributes->push_back({ "breaksec", att->IntToStr(att->GetBreaksec()) });
        }
    }
    if (element->HasAttClass(ATT_BEAMEDWITH)) {
        const AttBeamedWith *att = element->GetAtt<AttBeamedWith>(ATT_BEAMEDWITH);
        assert(att);
        if (att->HasBeamWith()) {
            attributes->push_back({ "beam.with", att->NeighboringlayerToStr(att->GetBeamWith()) });
        }
    }
    if (element->HasAttClass(ATT_BEAMINGLOG)) {
        const AttBeamingLog *att = element->GetAtt<AttBeamingLog>(ATT_BEAMINGLOG);
        assert(att);
        if (att->HasBeamGroup()) {
            attributes->push_back({ "beam.group", att->StrToStr(att->GetBeamGroup()) });
        }
        if (att->HasBeamRests()) {
            attributes->push_back({ "beam.rests", att->BooleanToStr(att->GetBeamRests()) });
        }
    }
    if (element->HasAttClass(ATT_BEATRPTLOG)) {
        const AttBeatRptLog *att = element->GetAtt<AttBeatRptLog>(ATT_BEATRPTLOG);
        assert(att);
        if (att->HasBeatdef()) {
            attributes->push_back({ "beatdef", att->DblToStr(att->GetBeatdef()) });
        }
    }
    if (element->HasAttClass(ATT_BRACKETSPANLOG)) {
        const AttBracketSpanLog *att = element->GetAtt<AttBracketSpanLog>(ATT_BRACKETSPANLOG);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->BracketSpanLogFuncToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_CUTOUT)) {
        const AttCutout *att = element->GetAtt<AttCutout>(ATT_CUTOUT);
        assert(att);
        if (att->HasCutout()) {
            attributes->push_back({ "cutout", att->CutoutCutoutToStr(att->GetCutout()) });
        }
    }
    if (element->HasAttClass(ATT_EXPANDABLE)) {
        const AttExpandable *att = element->GetAtt<AttExpandable>(ATT_EXPANDABLE);
        assert(att);
        if (att->HasExpand()) {
            attributes->push_back({ "expand", att->BooleanToStr(att->GetExpand()) });
        }
    }
    if (element->HasAttClass(ATT_GLISSPRESENT)) {
        const AttGlissPresent *att = element->GetAtt<AttGlissPresent>(ATT_GLISSPRESENT);
        assert(att);
        if (att->HasGliss()) {
            attributes->push_back({ "gliss", att->GlissandoToStr(att->GetGliss()) });
        }
    }
    if (element->HasAttClass(ATT_GRACEGRPLOG)) {
        const AttGraceGrpLog *att = element->GetAtt<AttGraceGrpLog>(ATT_GRACEGRPLOG);
        assert(att);
        if (att->HasAttach()) {
            attributes->push_back({ "attach", att->GraceGrpLogAttachToStr(att->GetAttach()) });
        }
    }
    if (element->HasAttClass(ATT_GRACED)) {
        const AttGraced *att = element->GetAtt<AttGraced>(ATT_GRACED);
        assert(att);
        if (att->HasGrace()) {
            attributes->push_back({ "grace", att->GraceToStr(att->GetGrace()) });
        }
        if (att->HasGraceTime()) {
            attributes->push_back({ "grace.time", att->PercentToStr(att->GetGraceTime()) });
        }
    }
    if (element->HasAttClass(ATT_HAIRPINLOG)) {
        const AttHairpinLog *att = element->GetAtt<AttHairpinLog>(ATT_HAIRPINLOG);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->HairpinLogFormToStr(att->GetForm()) });
        }
        if (att->HasNiente()) {
            attributes->push_back({ "niente", att->BooleanToStr(att->GetNiente()) });
        }
    }
    if (element->HasAttClass(ATT_HARPPEDALLOG)) {
        const AttHarpPedalLog *att = element->GetAtt<AttHarpPedalLog>(ATT_HARPPEDALLOG);
        assert(att);
        if (att->HasC()) {
            attributes->push_back({ "c", att->HarppedalpositionToStr(att->GetC()) });
        }
        if (att->HasD()) {
            attributes->push_back({ "d", att->HarppedalpositionToStr(att->GetD()) });
        }
        if (att->HasE()) {
            attributes->push_back({ "e", att->HarppedalpositionToStr(att->GetE()) });
        }
        if (att->HasF()) {
            attributes->push_back({ "f", att->HarppedalpositionToStr(att->GetF()) });
        }
        if (att->HasG()) {
            attributes->push_back({ "g", att->HarppedalpositionToStr(att->GetG()) });
        }
        if (att->HasA()) {
            attributes->push_back({ "a", att->HarppedalpositionToStr(att->GetA()) });
        }
        if (att->HasB()) {
            attributes->push_back({ "b", att->HarppedalpositionToStr(att->GetB()) });
        }
    }
    if (element->HasAttClass(ATT_LVPRESENT)) {
        const AttLvPresent *att = element->GetAtt<AttLvPresent>(ATT_LVPRESENT);
        assert(att);
        if (att->HasLv()) {
            attributes->push_back({ "lv", att->BooleanToStr(att->GetLv()) });
        }
    }
    if (element->HasAttClass(ATT_MEASURELOG)) {
        const AttMeasureLog *att = element->GetAtt<AttMeasureLog>(ATT_MEASURELOG);
        assert(att);
        if (att->HasLeft()) {
            attributes->push_back({ "left", att->BarrenditionToStr(att->GetLeft()) });
        }
        if (att->HasRight()) {
            attributes->push_back({ "right", att->BarrenditionToStr(att->GetRight()) });
        }
    }
    if (element->HasAttClass(ATT_METERSIGGRPLOG)) {
        const AttMeterSigGrpLog *att = element->GetAtt<AttMeterSigGrpLog>(ATT_METERSIGGRPLOG);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->MeterSigGrpLogFuncToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_NUMBERPLACEMENT)) {
        const AttNumberPlacement *att = element->GetAtt<AttNumberPlacement>(ATT_NUMBERPLACEMENT);
        assert(att);
        if (att->HasNumPlace()) {
            attributes->push_back({ "num.place", att->StaffrelBasicToStr(att->GetNumPlace()) });
        }
        if (att->HasNumVisible()) {
            attributes->push_back({ "num.visible", att->BooleanToStr(att->GetNumVisible()) });
        }
    }
    if (element->HasAttClass(ATT_NUMBERED)) {
        const AttNumbered *att = element->GetAtt<AttNumbered>(ATT_NUMBERED);
        assert(att);
        if (att->HasNum()) {
            attributes->push_back({ "num", att->IntToStr(att->GetNum()) });
        }
    }
    if (element->HasAttClass(ATT_OCTAVELOG)) {
        const AttOctaveLog *att = element->GetAtt<AttOctaveLog>(ATT_OCTAVELOG);
        assert(att);
        if (att->HasColl()) {
            attributes->push_back({ "coll", att->OctaveLogCollToStr(att->GetColl()) });
        }
    }
    if (element->HasAttClass(ATT_PEDALLOG)) {
        const AttPedalLog *att = element->GetAtt<AttPedalLog>(ATT_PEDALLOG);
        assert(att);
        if (att->HasDir()) {
            attributes->push_back({ "dir", att->PedalLogDirToStr(att->GetDir()) });
        }
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->StrToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_PIANOPEDALS)) {
        const AttPianoPedals *att = element->GetAtt<AttPianoPedals>(ATT_PIANOPEDALS);
        assert(att);
        if (att->HasPedalStyle()) {
            attributes->push_back({ "pedal.style", att->PedalstyleToStr(att->GetPedalStyle()) });
        }
    }
    if (element->HasAttClass(ATT_REHEARSAL)) {
        const AttRehearsal *att = element->GetAtt<AttRehearsal>(ATT_REHEARSAL);
        assert(att);
        if (att->HasRehEnclose()) {
            attributes->push_back({ "reh.enclose", att->RehearsalRehencloseToStr(att->GetRehEnclose()) });
        }
    }
    if (element->HasAttClass(ATT_SLURREND)) {
        const AttSlurRend *att = element->GetAtt<AttSlurRend>(ATT_SLURREND);
        assert(att);
        if (att->HasSlurLform()) {
            attributes->push_back({ "slur.lform", att->LineformToStr(att->GetSlurLform()) });
        }
        if (att->HasSlurLwidth()) {
            attributes->push_back({ "slur.lwidth", att->LinewidthToStr(att->GetSlurLwidth()) });
        }
    }
    if (element->HasAttClass(ATT_STEMSCMN)) {
        const AttStemsCmn *att = element->GetAtt<AttStemsCmn>(ATT_STEMSCMN);
        assert(att);
        if (att->HasStemWith()) {
            attributes->push_back({ "stem.with", att->NeighboringlayerToStr(att->GetStemWith()) });
        }
    }
    if (element->HasAttClass(ATT_TIEREND)) {
        const AttTieRend *att = element->GetAtt<AttTieRend>(ATT_TIEREND);
        assert(att);
        if (att->HasTieLform()) {
            attributes->push_back({ "tie.lform", att->LineformToStr(att->GetTieLform()) });
        }
        if (att->HasTieLwidth()) {
            attributes->push_back({ "tie.lwidth", att->LinewidthToStr(att->GetTieLwidth()) });
        }
    }
    if (element->HasAttClass(ATT_TREMFORM)) {
        const AttTremForm *att = element->GetAtt<AttTremForm>(ATT_TREMFORM);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->TremFormFormToStr(att->GetForm()) });
        }
    }
    if (element->HasAttClass(ATT_TREMMEASURED)) {
        const AttTremMeasured *att = element->GetAtt<AttTremMeasured>(ATT_TREMMEASURED);
        assert(att);
        if (att->HasUnitdur()) {
            attributes->push_back({ "unitdur", att->DurationToStr(att->GetUnitdur()) });
        }
    }
}

void AttModule::CopyCmn(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_ARPEGLOG)) {
        const AttArpegLog *att = element->GetAtt<AttArpegLog>(ATT_ARPEGLOG);
        assert(att);
        AttArpegLog *attTarget = target->GetAtt<AttArpegLog>(ATT_ARPEGLOG);
        assert(attTarget);
        attTarget->SetOrder(att->GetOrder());
    }
    if (element->HasAttClass(ATT_BEAMPRESENT)) {
        const AttBeamPresent *att = element->GetAtt<AttBeamPresent>(ATT_BEAMPRESENT);
        assert(att);
        AttBeamPresent *attTarget = target->GetAtt<AttBeamPresent>(ATT_BEAMPRESENT);
        assert(attTarget);
        attTarget->SetBeam(att->GetBeam());
    }
    if (element->HasAttClass(ATT_BEAMREND)) {
        const AttBeamRend *att = element->GetAtt<AttBeamRend>(ATT_BEAMREND);
        assert(att);
        AttBeamRend *attTarget = target->GetAtt<AttBeamRend>(ATT_BEAMREND);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
        attTarget->SetPlace(att->GetPlace());
        attTarget->SetSlash(att->GetSlash());
        attTarget->SetSlope(att->GetSlope());
    }
    if (element->HasAttClass(ATT_BEAMSECONDARY)) {
        const AttBeamSecondary *att = element->GetAtt<AttBeamSecondary>(ATT_BEAMSECONDARY);
        assert(att);
        AttBeamSecondary *attTarget = target->GetAtt<AttBeamSecondary>(ATT_BEAMSECONDARY);
        assert(attTarget);
        attTarget->SetBreaksec(att->GetBreaksec());
    }
    if (element->HasAttClass(ATT_BEAMEDWITH)) {
        const AttBeamedWith *att = element->GetAtt<AttBeamedWith>(ATT_BEAMEDWITH);
        assert(att);
        AttBeamedWith *attTarget = target->GetAtt<AttBeamedWith>(ATT_BEAMEDWITH);
        assert(attTarget);
        attTarget->SetBeamWith(att->GetBeamWith());
    }
    if (element->HasAttClass(ATT_BEAMINGLOG)) {
        const AttBeamingLog *att = element->GetAtt<AttBeamingLog>(ATT_BEAMINGLOG);
        assert(att);
        AttBeamingLog *attTarget = target->GetAtt<AttBeamingLog>(ATT_BEAMINGLOG);
        assert(attTarget);
        attTarget->SetBeamGroup(att->GetBeamGroup());
        attTarget->SetBeamRests(att->GetBeamRests());
    }
    if (element->HasAttClass(ATT_BEATRPTLOG)) {
        const AttBeatRptLog *att = element->GetAtt<AttBeatRptLog>(ATT_BEATRPTLOG);
        assert(att);
        AttBeatRptLog *attTarget = target->GetAtt<AttBeatRptLog>(ATT_BEATRPTLOG);
        assert(attTarget);
        attTarget->SetBeatdef(att->GetBeatdef());
    }
    if (element->HasAttClass(ATT_BRACKETSPANLOG)) {
        const AttBracketSpanLog *att = element->GetAtt<AttBracketSpanLog>(ATT_BRACKETSPANLOG);
        assert(att);
        AttBracketSpanLog *attTarget = target->GetAtt<AttBracketSpanLog>(ATT_BRACKETSPANLOG);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_CUTOUT)) {
        const AttCutout *att = element->GetAtt<AttCutout>(ATT_CUTOUT);
        assert(att);
        AttCutout *attTarget = target->GetAtt<AttCutout>(ATT_CUTOUT);
        assert(attTarget);
        attTarget->SetCutout(att->GetCutout());
    }
    if (element->HasAttClass(ATT_EXPANDABLE)) {
        const AttExpandable *att = element->GetAtt<AttExpandable>(ATT_EXPANDABLE);
        assert(att);
        AttExpandable *attTarget = target->GetAtt<AttExpandable>(ATT_EXPANDABLE);
        assert(attTarget);
        attTarget->SetExpand(att->GetExpand());
    }
    if (element->HasAttClass(ATT_GLISSPRESENT)) {
        const AttGlissPresent *att = element->GetAtt<AttGlissPresent>(ATT_GLISSPRESENT);
        assert(att);
        AttGlissPresent *attTarget = target->GetAtt<AttGlissPresent>(ATT_GLISSPRESENT);
        assert(attTarget);
        attTarget->SetGliss(att->GetGliss());
    }
    if (element->HasAttClass(ATT_GRACEGRPLOG)) {
        const AttGraceGrpLog *att = element->GetAtt<AttGraceGrpLog>(ATT_GRACEGRPLOG);
        assert(att);
        AttGraceGrpLog *attTarget = target->GetAtt<AttGraceGrpLog>(ATT_GRACEGRPLOG);
        assert(attTarget);
        attTarget->SetAttach(att->GetAttach());
    }
    if (element->HasAttClass(ATT_GRACED)) {
        const AttGraced *att = element->GetAtt<AttGraced>(ATT_GRACED);
        assert(att);
        AttGraced *attTarget = target->GetAtt<AttGraced>(ATT_GRACED);
        assert(attTarget);
        attTarget->SetGrace(att->GetGrace());
        attTarget->SetGraceTime(att->GetGraceTime());
    }
    if (element->HasAttClass(ATT_HAIRPINLOG)) {
        const AttHairpinLog *att = element->GetAtt<AttHairpinLog>(ATT_HAIRPINLOG);
        assert(att);
        AttHairpinLog *attTarget = target->GetAtt<AttHairpinLog>(ATT_HAIRPINLOG);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
        attTarget->SetNiente(att->GetNiente());
    }
    if (element->HasAttClass(ATT_HARPPEDALLOG)) {
        const AttHarpPedalLog *att = element->GetAtt<AttHarpPedalLog>(ATT_HARPPEDALLOG);
        assert(att);
        AttHarpPedalLog *attTarget = target->GetAtt<AttHarpPedalLog>(ATT_HARPPEDALLOG);
        assert(attTarget);
        attTarget->SetC(att->GetC());
        attTarget->SetD(att->GetD());
        attTarget->SetE(att->GetE());
        attTarget->SetF(att->GetF());
        attTarget->SetG(att->GetG());
        attTarget->SetA(att->GetA());
        attTarget->SetB(att->GetB());
    }
    if (element->HasAttClass(ATT_LVPRESENT)) {
        const AttLvPresent *att = element->GetAtt<AttLvPresent>(ATT_LVPRESENT);
        assert(att);
        AttLvPresent *attTarget = target->GetAtt<AttLvPresent>(ATT_LVPRESENT);
        assert(attTarget);
        attTarget->SetLv(att->GetLv());
    }
    if (element->HasAttClass(ATT_MEASURELOG)) {
        const AttMeasureLog *att = element->GetAtt<AttMeasureLog>(ATT_MEASURELOG);
        assert(att);
        AttMeasureLog *attTarget = target->GetAtt<AttMeasureLog>(ATT_MEASURELOG);
        assert(attTarget);
        attTarget->SetLeft(att->GetLeft());
        attTarget->SetRight(att->GetRight());
    }
    if (element->HasAttClass(ATT_METERSIGGRPLOG)) {
        const AttMeterSigGrpLog *att = element->GetAtt<AttMeterSigGrpLog>(ATT_METERSIGGRPLOG);
        assert(att);
        AttMeterSigGrpLog *attTarget = target->GetAtt<AttMeterSigGrpLog>(ATT_METERSIGGRPLOG);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_NUMBERPLACEMENT)) {
        const AttNumberPlacement *att = element->GetAtt<AttNumberPlacement>(ATT_NUMBERPLACEMENT);
        assert(att);
        AttNumberPlacement *attTarget = target->GetAtt<AttNumberPlacement>(ATT_NUMBERPLACEMENT);
        assert(attTarget);
        attTarget->SetNumPlace(att->GetNumPlace());
        attTarget->SetNumVisible(att->GetNumVisible());
    }
    if (element->HasAttClass(ATT_NUMBERED)) {
        const AttNumbered *att = element->GetAtt<AttNumbered>(ATT_NUMBERED);
        assert(att);
        AttNumbered *attTarget = target->GetAtt<AttNumbered>(ATT_NUMBERED);
        assert(attTarget);
        attTarget->SetNum(att->GetNum());
    }
    if (element->HasAttClass(ATT_OCTAVELOG)) {
        const AttOctaveLog *att = element->GetAtt<AttOctaveLog>(ATT_OCTAVELOG);
        assert(att);
        AttOctaveLog *attTarget = target->GetAtt<AttOctaveLog>(ATT_OCTAVELOG);
        assert(attTarget);
        attTarget->SetColl(att->GetColl());
    }
    if (element->HasAttClass(ATT_PEDALLOG)) {
        const AttPedalLog *att = element->GetAtt<AttPedalLog>(ATT_PEDALLOG);
        assert(att);
        AttPedalLog *attTarget = target->GetAtt<AttPedalLog>(ATT_PEDALLOG);
        assert(attTarget);
        attTarget->SetDir(att->GetDir());
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_PIANOPEDALS)) {
        const AttPianoPedals *att = element->GetAtt<AttPianoPedals>(ATT_PIANOPEDALS);
        assert(att);
        AttPianoPedals *attTarget = target->GetAtt<AttPianoPedals>(ATT_PIANOPEDALS);
        assert(attTarget);
        attTarget->SetPedalStyle(att->GetPedalStyle());
    }
    if (element->HasAttClass(ATT_REHEARSAL)) {
        const AttRehearsal *att = element->GetAtt<AttRehearsal>(ATT_REHEARSAL);
        assert(att);
        AttRehearsal *attTarget = target->GetAtt<AttRehearsal>(ATT_REHEARSAL);
        assert(attTarget);
        attTarget->SetRehEnclose(att->GetRehEnclose());
    }
    if (element->HasAttClass(ATT_SLURREND)) {
        const AttSlurRend *att = element->GetAtt<AttSlurRend>(ATT_SLURREND);
        assert(att);
        AttSlurRend *attTarget = target->GetAtt<AttSlurRend>(ATT_SLURREND);
        assert(attTarget);
        attTarget->SetSlurLform(att->GetSlurLform());
        attTarget->SetSlurLwidth(att->GetSlurLwidth());
    }
    if (element->HasAttClass(ATT_STEMSCMN)) {
        const AttStemsCmn *att = element->GetAtt<AttStemsCmn>(ATT_STEMSCMN);
        assert(att);
        AttStemsCmn *attTarget = target->GetAtt<AttStemsCmn>(ATT_STEMSCMN);
        assert(attTarget);
        attTarget->SetStemWith(att->GetStemWith());
    }
    if (element->HasAttClass(ATT_TIEREND)) {
        const AttTieRend *att = element->GetAtt<AttTieRend>(ATT_TIEREND);
        assert(att);
        AttTieRend *attTarget = target->GetAtt<AttTieRend>(ATT_TIEREND);
        assert(attTarget);
        attTarget->SetTieLform(att->GetTieLform());
        attTarget->SetTieLwidth(att->GetTieLwidth());
    }
    if (element->HasAttClass(ATT_TREMFORM)) {
        const AttTremForm *att = element->GetAtt<AttTremForm>(ATT_TREMFORM);
        assert(att);
        AttTremForm *attTarget = target->GetAtt<AttTremForm>(ATT_TREMFORM);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
    if (element->HasAttClass(ATT_TREMMEASURED)) {
        const AttTremMeasured *att = element->GetAtt<AttTremMeasured>(ATT_TREMMEASURED);
        assert(att);
        AttTremMeasured *attTarget = target->GetAtt<AttTremMeasured>(ATT_TREMMEASURED);
        assert(attTarget);
        attTarget->SetUnitdur(att->GetUnitdur());
    }
}

} // namespace vrv

#include "atts_cmnornaments.h"

namespace vrv {

//----------------------------------------------------------------------------
// Cmnornaments
//----------------------------------------------------------------------------

bool AttModule::SetCmnornaments(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_MORDENTLOG)) {
        AttMordentLog *att = element->GetAtt<AttMordentLog>(ATT_MORDENTLOG);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToMordentLogForm(attrValue));
            return true;
        }
        if (attrType == "long") {
            att->SetLong(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ORNAMPRESENT)) {
        AttOrnamPresent *att = element->GetAtt<AttOrnamPresent>(ATT_ORNAMPRESENT);
        assert(att);
        if (attrType == "ornam") {
            att->SetOrnam(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ORNAMENTACCID)) {
        AttOrnamentAccid *att = element->GetAtt<AttOrnamentAccid>(ATT_ORNAMENTACCID);
        assert(att);
        if (attrType == "accidupper") {
            att->SetAccidupper(att->StrToAccidentalWritten(attrValue));
            return true;
        }
        if (attrType == "accidlower") {
            att->SetAccidlower(att->StrToAccidentalWritten(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TURNLOG)) {
        AttTurnLog *att = element->GetAtt<AttTurnLog>(ATT_TURNLOG);
        assert(att);
        if (attrType == "delayed") {
            att->SetDelayed(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "form") {
            att->SetForm(att->StrToTurnLogForm(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetCmnornaments(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_MORDENTLOG)) {
        const AttMordentLog *att = element->GetAtt<AttMordentLog>(ATT_MORDENTLOG);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->MordentLogFormToStr(att->GetForm()) });
        }
        if (att->HasLong()) {
            attributes->push_back({ "long", att->BooleanToStr(att->GetLong()) });
        }
    }
    if (element->HasAttClass(ATT_ORNAMPRESENT)) {
        const AttOrnamPresent *att = element->GetAtt<AttOrnamPresent>(ATT_ORNAMPRESENT);
        assert(att);
        if (att->HasOrnam()) {
            attributes->push_back({ "ornam", att->StrToStr(att->GetOrnam()) });
        }
    }
    if (element->HasAttClass(ATT_ORNAMENTACCID)) {
        const AttOrnamentAccid *att = element->GetAtt<AttOrnamentAccid>(ATT_ORNAMENTACCID);
        assert(att);
        if (att->HasAccidupper()) {
            attributes->push_back({ "accidupper", att->AccidentalWrittenToStr(att->GetAccidupper()) });
        }
        if (att->HasAccidlower()) {
            attributes->push_back({ "accidlower", att->AccidentalWrittenToStr(att->GetAccidlower()) });
        }
    }
    if (element->HasAttClass(ATT_TURNLOG)) {
        const AttTurnLog *att = element->GetAtt<AttTurnLog>(ATT_TURNLOG);
        assert(att);
        if (att->HasDelayed()) {
            attributes->push_back({ "delayed", att->BooleanToStr(att->GetDelayed()) });
        }
        if (att->HasForm()) {
            attributes->push_back({ "form", att->TurnLogFormToStr(att->GetForm()) });
        }
    }
}

void AttModule::CopyCmnornaments(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_MORDENTLOG)) {
        const AttMordentLog *att = element->GetAtt<AttMordentLog>(ATT_MORDENTLOG);
        assert(att);
        AttMordentLog *attTarget = target->GetAtt<AttMordentLog>(ATT_MORDENTLOG);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
        attTarget->SetLong(att->GetLong());
    }
    if (element->HasAttClass(ATT_ORNAMPRESENT)) {
        const AttOrnamPresent *att = element->GetAtt<AttOrnamPresent>(ATT_ORNAMPRESENT);
        assert(att);
        AttOrnamPresent *attTarget = target->GetAtt<AttOrnamPresent>(ATT_ORNAMPRESENT);
        assert(attTarget);
        attTarget->SetOrnam(att->GetOrnam());
    }
    if (element->HasAttClass(ATT_ORNAMENTACCID)) {
        const AttOrnamentAccid *att = element->GetAtt<AttOrnamentAccid>(ATT_ORNAMENTACCID);
        assert(att);
        AttOrnamentAccid *attTarget = target->GetAtt<AttOrnamentAccid>(ATT_ORNAMENTACCID);
        assert(attTarget);
        attTarget->SetAccidupper(att->GetAccidupper());
        attTarget->SetAccidlower(att->GetAccidlower());
    }
    if (element->HasAttClass(ATT_TURNLOG)) {
        const AttTurnLog *att = element->GetAtt<AttTurnLog>(ATT_TURNLOG);
        assert(att);
        AttTurnLog *attTarget = target->GetAtt<AttTurnLog>(ATT_TURNLOG);
        assert(attTarget);
        attTarget->SetDelayed(att->GetDelayed());
        attTarget->SetForm(att->GetForm());
    }
}

} // namespace vrv

#include "atts_critapp.h"

namespace vrv {

//----------------------------------------------------------------------------
// Critapp
//----------------------------------------------------------------------------

bool AttModule::SetCritapp(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_CRIT)) {
        AttCrit *att = element->GetAtt<AttCrit>(ATT_CRIT);
        assert(att);
        if (attrType == "cause") {
            att->SetCause(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetCritapp(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_CRIT)) {
        const AttCrit *att = element->GetAtt<AttCrit>(ATT_CRIT);
        assert(att);
        if (att->HasCause()) {
            attributes->push_back({ "cause", att->StrToStr(att->GetCause()) });
        }
    }
}

void AttModule::CopyCritapp(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_CRIT)) {
        const AttCrit *att = element->GetAtt<AttCrit>(ATT_CRIT);
        assert(att);
        AttCrit *attTarget = target->GetAtt<AttCrit>(ATT_CRIT);
        assert(attTarget);
        attTarget->SetCause(att->GetCause());
    }
}

} // namespace vrv

#include "atts_edittrans.h"

namespace vrv {

//----------------------------------------------------------------------------
// Edittrans
//----------------------------------------------------------------------------

bool AttModule::SetEdittrans(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_AGENTIDENT)) {
        AttAgentIdent *att = element->GetAtt<AttAgentIdent>(ATT_AGENTIDENT);
        assert(att);
        if (attrType == "agent") {
            att->SetAgent(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_REASONIDENT)) {
        AttReasonIdent *att = element->GetAtt<AttReasonIdent>(ATT_REASONIDENT);
        assert(att);
        if (attrType == "reason") {
            att->SetReason(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetEdittrans(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_AGENTIDENT)) {
        const AttAgentIdent *att = element->GetAtt<AttAgentIdent>(ATT_AGENTIDENT);
        assert(att);
        if (att->HasAgent()) {
            attributes->push_back({ "agent", att->StrToStr(att->GetAgent()) });
        }
    }
    if (element->HasAttClass(ATT_REASONIDENT)) {
        const AttReasonIdent *att = element->GetAtt<AttReasonIdent>(ATT_REASONIDENT);
        assert(att);
        if (att->HasReason()) {
            attributes->push_back({ "reason", att->StrToStr(att->GetReason()) });
        }
    }
}

void AttModule::CopyEdittrans(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_AGENTIDENT)) {
        const AttAgentIdent *att = element->GetAtt<AttAgentIdent>(ATT_AGENTIDENT);
        assert(att);
        AttAgentIdent *attTarget = target->GetAtt<AttAgentIdent>(ATT_AGENTIDENT);
        assert(attTarget);
        attTarget->SetAgent(att->GetAgent());
    }
    if (element->HasAttClass(ATT_REASONIDENT)) {
        const AttReasonIdent *att = element->GetAtt<AttReasonIdent>(ATT_REASONIDENT);
        assert(att);
        AttReasonIdent *attTarget = target->GetAtt<AttReasonIdent>(ATT_REASONIDENT);
        assert(attTarget);
        attTarget->SetReason(att->GetReason());
    }
}

} // namespace vrv

#include "atts_externalsymbols.h"

namespace vrv {

//----------------------------------------------------------------------------
// Externalsymbols
//----------------------------------------------------------------------------

bool AttModule::SetExternalsymbols(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_EXTSYMAUTH)) {
        AttExtSymAuth *att = element->GetAtt<AttExtSymAuth>(ATT_EXTSYMAUTH);
        assert(att);
        if (attrType == "glyph.auth") {
            att->SetGlyphAuth(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "glyph.uri") {
            att->SetGlyphUri(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_EXTSYMNAMES)) {
        AttExtSymNames *att = element->GetAtt<AttExtSymNames>(ATT_EXTSYMNAMES);
        assert(att);
        if (attrType == "glyph.name") {
            att->SetGlyphName(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "glyph.num") {
            att->SetGlyphNum(att->StrToHexnum(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetExternalsymbols(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_EXTSYMAUTH)) {
        const AttExtSymAuth *att = element->GetAtt<AttExtSymAuth>(ATT_EXTSYMAUTH);
        assert(att);
        if (att->HasGlyphAuth()) {
            attributes->push_back({ "glyph.auth", att->StrToStr(att->GetGlyphAuth()) });
        }
        if (att->HasGlyphUri()) {
            attributes->push_back({ "glyph.uri", att->StrToStr(att->GetGlyphUri()) });
        }
    }
    if (element->HasAttClass(ATT_EXTSYMNAMES)) {
        const AttExtSymNames *att = element->GetAtt<AttExtSymNames>(ATT_EXTSYMNAMES);
        assert(att);
        if (att->HasGlyphName()) {
            attributes->push_back({ "glyph.name", att->StrToStr(att->GetGlyphName()) });
        }
        if (att->HasGlyphNum()) {
            attributes->push_back({ "glyph.num", att->HexnumToStr(att->GetGlyphNum()) });
        }
    }
}

void AttModule::CopyExternalsymbols(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_EXTSYMAUTH)) {
        const AttExtSymAuth *att = element->GetAtt<AttExtSymAuth>(ATT_EXTSYMAUTH);
        assert(att);
        AttExtSymAuth *attTarget = target->GetAtt<AttExtSymAuth>(ATT_EXTSYMAUTH);
        assert(attTarget);
        attTarget->SetGlyphAuth(att->GetGlyphAuth());
        attTarget->SetGlyphUri(att->GetGlyphUri());
    }
    if (element->HasAttClass(ATT_EXTSYMNAMES)) {
        const AttExtSymNames *att = element->GetAtt<AttExtSymNames>(ATT_EXTSYMNAMES);
        assert(att);
        AttExtSymNames *attTarget = target->GetAtt<AttExtSymNames>(ATT_EXTSYMNAMES);
        assert(attTarget);
        attTarget->SetGlyphName(att->GetGlyphName());
        attTarget->SetGlyphNum(att->GetGlyphNum());
    }
}

} // namespace vrv

#include "atts_facsimile.h"

namespace vrv {

//----------------------------------------------------------------------------
// Facsimile
//----------------------------------------------------------------------------

bool AttModule::SetFacsimile(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_FACSIMILE)) {
        AttFacsimile *att = element->GetAtt<AttFacsimile>(ATT_FACSIMILE);
        assert(att);
        if (attrType == "facs") {
            att->SetFacs(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetFacsimile(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_FACSIMILE)) {
        const AttFacsimile *att = element->GetAtt<AttFacsimile>(ATT_FACSIMILE);
        assert(att);
        if (att->HasFacs()) {
            attributes->push_back({ "facs", att->StrToStr(att->GetFacs()) });
        }
    }
}

void AttModule::CopyFacsimile(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_FACSIMILE)) {
        const AttFacsimile *att = element->GetAtt<AttFacsimile>(ATT_FACSIMILE);
        assert(att);
        AttFacsimile *attTarget = target->GetAtt<AttFacsimile>(ATT_FACSIMILE);
        assert(attTarget);
        attTarget->SetFacs(att->GetFacs());
    }
}

} // namespace vrv

#include "atts_figtable.h"

namespace vrv {

//----------------------------------------------------------------------------
// Figtable
//----------------------------------------------------------------------------

bool AttModule::SetFigtable(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_TABULAR)) {
        AttTabular *att = element->GetAtt<AttTabular>(ATT_TABULAR);
        assert(att);
        if (attrType == "colspan") {
            att->SetColspan(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "rowspan") {
            att->SetRowspan(att->StrToInt(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetFigtable(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_TABULAR)) {
        const AttTabular *att = element->GetAtt<AttTabular>(ATT_TABULAR);
        assert(att);
        if (att->HasColspan()) {
            attributes->push_back({ "colspan", att->IntToStr(att->GetColspan()) });
        }
        if (att->HasRowspan()) {
            attributes->push_back({ "rowspan", att->IntToStr(att->GetRowspan()) });
        }
    }
}

void AttModule::CopyFigtable(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_TABULAR)) {
        const AttTabular *att = element->GetAtt<AttTabular>(ATT_TABULAR);
        assert(att);
        AttTabular *attTarget = target->GetAtt<AttTabular>(ATT_TABULAR);
        assert(attTarget);
        attTarget->SetColspan(att->GetColspan());
        attTarget->SetRowspan(att->GetRowspan());
    }
}

} // namespace vrv

#include "atts_fingering.h"

namespace vrv {

//----------------------------------------------------------------------------
// Fingering
//----------------------------------------------------------------------------

bool AttModule::SetFingering(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_FINGGRPLOG)) {
        AttFingGrpLog *att = element->GetAtt<AttFingGrpLog>(ATT_FINGGRPLOG);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToFingGrpLogForm(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetFingering(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_FINGGRPLOG)) {
        const AttFingGrpLog *att = element->GetAtt<AttFingGrpLog>(ATT_FINGGRPLOG);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->FingGrpLogFormToStr(att->GetForm()) });
        }
    }
}

void AttModule::CopyFingering(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_FINGGRPLOG)) {
        const AttFingGrpLog *att = element->GetAtt<AttFingGrpLog>(ATT_FINGGRPLOG);
        assert(att);
        AttFingGrpLog *attTarget = target->GetAtt<AttFingGrpLog>(ATT_FINGGRPLOG);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
}

} // namespace vrv

#include "atts_gestural.h"

namespace vrv {

//----------------------------------------------------------------------------
// Gestural
//----------------------------------------------------------------------------

bool AttModule::SetGestural(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_ACCIDENTALGES)) {
        AttAccidentalGes *att = element->GetAtt<AttAccidentalGes>(ATT_ACCIDENTALGES);
        assert(att);
        if (attrType == "accid.ges") {
            att->SetAccidGes(att->StrToAccidentalGestural(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ARTICULATIONGES)) {
        AttArticulationGes *att = element->GetAtt<AttArticulationGes>(ATT_ARTICULATIONGES);
        assert(att);
        if (attrType == "artic.ges") {
            att->SetArticGes(att->StrToArticulationList(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ATTACKING)) {
        AttAttacking *att = element->GetAtt<AttAttacking>(ATT_ATTACKING);
        assert(att);
        if (attrType == "attacca") {
            att->SetAttacca(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BENDGES)) {
        AttBendGes *att = element->GetAtt<AttBendGes>(ATT_BENDGES);
        assert(att);
        if (attrType == "amount") {
            att->SetAmount(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DURATIONGES)) {
        AttDurationGes *att = element->GetAtt<AttDurationGes>(ATT_DURATIONGES);
        assert(att);
        if (attrType == "dur.ges") {
            att->SetDurGes(att->StrToDuration(attrValue));
            return true;
        }
        if (attrType == "dots.ges") {
            att->SetDotsGes(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "dur.metrical") {
            att->SetDurMetrical(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "dur.ppq") {
            att->SetDurPpq(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "dur.real") {
            att->SetDurReal(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "dur.recip") {
            att->SetDurRecip(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NOTEGES)) {
        AttNoteGes *att = element->GetAtt<AttNoteGes>(ATT_NOTEGES);
        assert(att);
        if (attrType == "extremis") {
            att->SetExtremis(att->StrToNoteGesExtremis(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ORNAMENTACCIDGES)) {
        AttOrnamentAccidGes *att = element->GetAtt<AttOrnamentAccidGes>(ATT_ORNAMENTACCIDGES);
        assert(att);
        if (attrType == "accidupper.ges") {
            att->SetAccidupperGes(att->StrToAccidentalGestural(attrValue));
            return true;
        }
        if (attrType == "accidlower.ges") {
            att->SetAccidlowerGes(att->StrToAccidentalGestural(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PITCHGES)) {
        AttPitchGes *att = element->GetAtt<AttPitchGes>(ATT_PITCHGES);
        assert(att);
        if (attrType == "oct.ges") {
            att->SetOctGes(att->StrToOctave(attrValue));
            return true;
        }
        if (attrType == "pname.ges") {
            att->SetPnameGes(att->StrToPitchname(attrValue));
            return true;
        }
        if (attrType == "pnum") {
            att->SetPnum(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SOUNDLOCATION)) {
        AttSoundLocation *att = element->GetAtt<AttSoundLocation>(ATT_SOUNDLOCATION);
        assert(att);
        if (attrType == "azimuth") {
            att->SetAzimuth(att->StrToDegrees(attrValue));
            return true;
        }
        if (attrType == "elevation") {
            att->SetElevation(att->StrToDegrees(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TIMESTAMPGES)) {
        AttTimestampGes *att = element->GetAtt<AttTimestampGes>(ATT_TIMESTAMPGES);
        assert(att);
        if (attrType == "tstamp.ges") {
            att->SetTstampGes(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "tstamp.real") {
            att->SetTstampReal(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TIMESTAMP2GES)) {
        AttTimestamp2Ges *att = element->GetAtt<AttTimestamp2Ges>(ATT_TIMESTAMP2GES);
        assert(att);
        if (attrType == "tstamp2.ges") {
            att->SetTstamp2Ges(att->StrToMeasurebeat(attrValue));
            return true;
        }
        if (attrType == "tstamp2.real") {
            att->SetTstamp2Real(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetGestural(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_ACCIDENTALGES)) {
        const AttAccidentalGes *att = element->GetAtt<AttAccidentalGes>(ATT_ACCIDENTALGES);
        assert(att);
        if (att->HasAccidGes()) {
            attributes->push_back({ "accid.ges", att->AccidentalGesturalToStr(att->GetAccidGes()) });
        }
    }
    if (element->HasAttClass(ATT_ARTICULATIONGES)) {
        const AttArticulationGes *att = element->GetAtt<AttArticulationGes>(ATT_ARTICULATIONGES);
        assert(att);
        if (att->HasArticGes()) {
            attributes->push_back({ "artic.ges", att->ArticulationListToStr(att->GetArticGes()) });
        }
    }
    if (element->HasAttClass(ATT_ATTACKING)) {
        const AttAttacking *att = element->GetAtt<AttAttacking>(ATT_ATTACKING);
        assert(att);
        if (att->HasAttacca()) {
            attributes->push_back({ "attacca", att->BooleanToStr(att->GetAttacca()) });
        }
    }
    if (element->HasAttClass(ATT_BENDGES)) {
        const AttBendGes *att = element->GetAtt<AttBendGes>(ATT_BENDGES);
        assert(att);
        if (att->HasAmount()) {
            attributes->push_back({ "amount", att->DblToStr(att->GetAmount()) });
        }
    }
    if (element->HasAttClass(ATT_DURATIONGES)) {
        const AttDurationGes *att = element->GetAtt<AttDurationGes>(ATT_DURATIONGES);
        assert(att);
        if (att->HasDurGes()) {
            attributes->push_back({ "dur.ges", att->DurationToStr(att->GetDurGes()) });
        }
        if (att->HasDotsGes()) {
            attributes->push_back({ "dots.ges", att->IntToStr(att->GetDotsGes()) });
        }
        if (att->HasDurMetrical()) {
            attributes->push_back({ "dur.metrical", att->DblToStr(att->GetDurMetrical()) });
        }
        if (att->HasDurPpq()) {
            attributes->push_back({ "dur.ppq", att->IntToStr(att->GetDurPpq()) });
        }
        if (att->HasDurReal()) {
            attributes->push_back({ "dur.real", att->DblToStr(att->GetDurReal()) });
        }
        if (att->HasDurRecip()) {
            attributes->push_back({ "dur.recip", att->StrToStr(att->GetDurRecip()) });
        }
    }
    if (element->HasAttClass(ATT_NOTEGES)) {
        const AttNoteGes *att = element->GetAtt<AttNoteGes>(ATT_NOTEGES);
        assert(att);
        if (att->HasExtremis()) {
            attributes->push_back({ "extremis", att->NoteGesExtremisToStr(att->GetExtremis()) });
        }
    }
    if (element->HasAttClass(ATT_ORNAMENTACCIDGES)) {
        const AttOrnamentAccidGes *att = element->GetAtt<AttOrnamentAccidGes>(ATT_ORNAMENTACCIDGES);
        assert(att);
        if (att->HasAccidupperGes()) {
            attributes->push_back({ "accidupper.ges", att->AccidentalGesturalToStr(att->GetAccidupperGes()) });
        }
        if (att->HasAccidlowerGes()) {
            attributes->push_back({ "accidlower.ges", att->AccidentalGesturalToStr(att->GetAccidlowerGes()) });
        }
    }
    if (element->HasAttClass(ATT_PITCHGES)) {
        const AttPitchGes *att = element->GetAtt<AttPitchGes>(ATT_PITCHGES);
        assert(att);
        if (att->HasOctGes()) {
            attributes->push_back({ "oct.ges", att->OctaveToStr(att->GetOctGes()) });
        }
        if (att->HasPnameGes()) {
            attributes->push_back({ "pname.ges", att->PitchnameToStr(att->GetPnameGes()) });
        }
        if (att->HasPnum()) {
            attributes->push_back({ "pnum", att->IntToStr(att->GetPnum()) });
        }
    }
    if (element->HasAttClass(ATT_SOUNDLOCATION)) {
        const AttSoundLocation *att = element->GetAtt<AttSoundLocation>(ATT_SOUNDLOCATION);
        assert(att);
        if (att->HasAzimuth()) {
            attributes->push_back({ "azimuth", att->DegreesToStr(att->GetAzimuth()) });
        }
        if (att->HasElevation()) {
            attributes->push_back({ "elevation", att->DegreesToStr(att->GetElevation()) });
        }
    }
    if (element->HasAttClass(ATT_TIMESTAMPGES)) {
        const AttTimestampGes *att = element->GetAtt<AttTimestampGes>(ATT_TIMESTAMPGES);
        assert(att);
        if (att->HasTstampGes()) {
            attributes->push_back({ "tstamp.ges", att->DblToStr(att->GetTstampGes()) });
        }
        if (att->HasTstampReal()) {
            attributes->push_back({ "tstamp.real", att->StrToStr(att->GetTstampReal()) });
        }
    }
    if (element->HasAttClass(ATT_TIMESTAMP2GES)) {
        const AttTimestamp2Ges *att = element->GetAtt<AttTimestamp2Ges>(ATT_TIMESTAMP2GES);
        assert(att);
        if (att->HasTstamp2Ges()) {
            attributes->push_back({ "tstamp2.ges", att->MeasurebeatToStr(att->GetTstamp2Ges()) });
        }
        if (att->HasTstamp2Real()) {
            attributes->push_back({ "tstamp2.real", att->StrToStr(att->GetTstamp2Real()) });
        }
    }
}

void AttModule::CopyGestural(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_ACCIDENTALGES)) {
        const AttAccidentalGes *att = element->GetAtt<AttAccidentalGes>(ATT_ACCIDENTALGES);
        assert(att);
        AttAccidentalGes *attTarget = target->GetAtt<AttAccidentalGes>(ATT_ACCIDENTALGES);
        assert(attTarget);
        attTarget->SetAccidGes(att->GetAccidGes());
    }
    if (element->HasAttClass(ATT_ARTICULATIONGES)) {
        const AttArticulationGes *att = element->GetAtt<AttArticulationGes>(ATT_ARTICULATIONGES);
        assert(att);
        AttArticulationGes *attTarget = target->GetAtt<AttArticulationGes>(ATT_ARTICULATIONGES);
        assert(attTarget);
        attTarget->SetArticGes(att->GetArticGes());
    }
    if (element->HasAttClass(ATT_ATTACKING)) {
        const AttAttacking *att = element->GetAtt<AttAttacking>(ATT_ATTACKING);
        assert(att);
        AttAttacking *attTarget = target->GetAtt<AttAttacking>(ATT_ATTACKING);
        assert(attTarget);
        attTarget->SetAttacca(att->GetAttacca());
    }
    if (element->HasAttClass(ATT_BENDGES)) {
        const AttBendGes *att = element->GetAtt<AttBendGes>(ATT_BENDGES);
        assert(att);
        AttBendGes *attTarget = target->GetAtt<AttBendGes>(ATT_BENDGES);
        assert(attTarget);
        attTarget->SetAmount(att->GetAmount());
    }
    if (element->HasAttClass(ATT_DURATIONGES)) {
        const AttDurationGes *att = element->GetAtt<AttDurationGes>(ATT_DURATIONGES);
        assert(att);
        AttDurationGes *attTarget = target->GetAtt<AttDurationGes>(ATT_DURATIONGES);
        assert(attTarget);
        attTarget->SetDurGes(att->GetDurGes());
        attTarget->SetDotsGes(att->GetDotsGes());
        attTarget->SetDurMetrical(att->GetDurMetrical());
        attTarget->SetDurPpq(att->GetDurPpq());
        attTarget->SetDurReal(att->GetDurReal());
        attTarget->SetDurRecip(att->GetDurRecip());
    }
    if (element->HasAttClass(ATT_NOTEGES)) {
        const AttNoteGes *att = element->GetAtt<AttNoteGes>(ATT_NOTEGES);
        assert(att);
        AttNoteGes *attTarget = target->GetAtt<AttNoteGes>(ATT_NOTEGES);
        assert(attTarget);
        attTarget->SetExtremis(att->GetExtremis());
    }
    if (element->HasAttClass(ATT_ORNAMENTACCIDGES)) {
        const AttOrnamentAccidGes *att = element->GetAtt<AttOrnamentAccidGes>(ATT_ORNAMENTACCIDGES);
        assert(att);
        AttOrnamentAccidGes *attTarget = target->GetAtt<AttOrnamentAccidGes>(ATT_ORNAMENTACCIDGES);
        assert(attTarget);
        attTarget->SetAccidupperGes(att->GetAccidupperGes());
        attTarget->SetAccidlowerGes(att->GetAccidlowerGes());
    }
    if (element->HasAttClass(ATT_PITCHGES)) {
        const AttPitchGes *att = element->GetAtt<AttPitchGes>(ATT_PITCHGES);
        assert(att);
        AttPitchGes *attTarget = target->GetAtt<AttPitchGes>(ATT_PITCHGES);
        assert(attTarget);
        attTarget->SetOctGes(att->GetOctGes());
        attTarget->SetPnameGes(att->GetPnameGes());
        attTarget->SetPnum(att->GetPnum());
    }
    if (element->HasAttClass(ATT_SOUNDLOCATION)) {
        const AttSoundLocation *att = element->GetAtt<AttSoundLocation>(ATT_SOUNDLOCATION);
        assert(att);
        AttSoundLocation *attTarget = target->GetAtt<AttSoundLocation>(ATT_SOUNDLOCATION);
        assert(attTarget);
        attTarget->SetAzimuth(att->GetAzimuth());
        attTarget->SetElevation(att->GetElevation());
    }
    if (element->HasAttClass(ATT_TIMESTAMPGES)) {
        const AttTimestampGes *att = element->GetAtt<AttTimestampGes>(ATT_TIMESTAMPGES);
        assert(att);
        AttTimestampGes *attTarget = target->GetAtt<AttTimestampGes>(ATT_TIMESTAMPGES);
        assert(attTarget);
        attTarget->SetTstampGes(att->GetTstampGes());
        attTarget->SetTstampReal(att->GetTstampReal());
    }
    if (element->HasAttClass(ATT_TIMESTAMP2GES)) {
        const AttTimestamp2Ges *att = element->GetAtt<AttTimestamp2Ges>(ATT_TIMESTAMP2GES);
        assert(att);
        AttTimestamp2Ges *attTarget = target->GetAtt<AttTimestamp2Ges>(ATT_TIMESTAMP2GES);
        assert(attTarget);
        attTarget->SetTstamp2Ges(att->GetTstamp2Ges());
        attTarget->SetTstamp2Real(att->GetTstamp2Real());
    }
}

} // namespace vrv

#include "atts_harmony.h"

namespace vrv {

//----------------------------------------------------------------------------
// Harmony
//----------------------------------------------------------------------------

bool AttModule::SetHarmony(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_HARMLOG)) {
        AttHarmLog *att = element->GetAtt<AttHarmLog>(ATT_HARMLOG);
        assert(att);
        if (attrType == "chordref") {
            att->SetChordref(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetHarmony(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_HARMLOG)) {
        const AttHarmLog *att = element->GetAtt<AttHarmLog>(ATT_HARMLOG);
        assert(att);
        if (att->HasChordref()) {
            attributes->push_back({ "chordref", att->StrToStr(att->GetChordref()) });
        }
    }
}

void AttModule::CopyHarmony(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_HARMLOG)) {
        const AttHarmLog *att = element->GetAtt<AttHarmLog>(ATT_HARMLOG);
        assert(att);
        AttHarmLog *attTarget = target->GetAtt<AttHarmLog>(ATT_HARMLOG);
        assert(attTarget);
        attTarget->SetChordref(att->GetChordref());
    }
}

} // namespace vrv

#include "atts_header.h"

namespace vrv {

//----------------------------------------------------------------------------
// Header
//----------------------------------------------------------------------------

bool AttModule::SetHeader(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_ADLIBITUM)) {
        AttAdlibitum *att = element->GetAtt<AttAdlibitum>(ATT_ADLIBITUM);
        assert(att);
        if (attrType == "adlib") {
            att->SetAdlib(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BIFOLIUMSURFACES)) {
        AttBifoliumSurfaces *att = element->GetAtt<AttBifoliumSurfaces>(ATT_BIFOLIUMSURFACES);
        assert(att);
        if (attrType == "outer.recto") {
            att->SetOuterRecto(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "inner.verso") {
            att->SetInnerVerso(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "inner.recto") {
            att->SetInnerRecto(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "outer.verso") {
            att->SetOuterVerso(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_FOLIUMSURFACES)) {
        AttFoliumSurfaces *att = element->GetAtt<AttFoliumSurfaces>(ATT_FOLIUMSURFACES);
        assert(att);
        if (attrType == "recto") {
            att->SetRecto(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "verso") {
            att->SetVerso(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PERFRES)) {
        AttPerfRes *att = element->GetAtt<AttPerfRes>(ATT_PERFRES);
        assert(att);
        if (attrType == "solo") {
            att->SetSolo(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PERFRESBASIC)) {
        AttPerfResBasic *att = element->GetAtt<AttPerfResBasic>(ATT_PERFRESBASIC);
        assert(att);
        if (attrType == "count") {
            att->SetCount(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_RECORDTYPE)) {
        AttRecordType *att = element->GetAtt<AttRecordType>(ATT_RECORDTYPE);
        assert(att);
        if (attrType == "recordtype") {
            att->SetRecordtype(att->StrToRecordTypeRecordtype(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_REGULARMETHOD)) {
        AttRegularMethod *att = element->GetAtt<AttRegularMethod>(ATT_REGULARMETHOD);
        assert(att);
        if (attrType == "method") {
            att->SetMethod(att->StrToRegularMethodMethod(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetHeader(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_ADLIBITUM)) {
        const AttAdlibitum *att = element->GetAtt<AttAdlibitum>(ATT_ADLIBITUM);
        assert(att);
        if (att->HasAdlib()) {
            attributes->push_back({ "adlib", att->BooleanToStr(att->GetAdlib()) });
        }
    }
    if (element->HasAttClass(ATT_BIFOLIUMSURFACES)) {
        const AttBifoliumSurfaces *att = element->GetAtt<AttBifoliumSurfaces>(ATT_BIFOLIUMSURFACES);
        assert(att);
        if (att->HasOuterRecto()) {
            attributes->push_back({ "outer.recto", att->StrToStr(att->GetOuterRecto()) });
        }
        if (att->HasInnerVerso()) {
            attributes->push_back({ "inner.verso", att->StrToStr(att->GetInnerVerso()) });
        }
        if (att->HasInnerRecto()) {
            attributes->push_back({ "inner.recto", att->StrToStr(att->GetInnerRecto()) });
        }
        if (att->HasOuterVerso()) {
            attributes->push_back({ "outer.verso", att->StrToStr(att->GetOuterVerso()) });
        }
    }
    if (element->HasAttClass(ATT_FOLIUMSURFACES)) {
        const AttFoliumSurfaces *att = element->GetAtt<AttFoliumSurfaces>(ATT_FOLIUMSURFACES);
        assert(att);
        if (att->HasRecto()) {
            attributes->push_back({ "recto", att->StrToStr(att->GetRecto()) });
        }
        if (att->HasVerso()) {
            attributes->push_back({ "verso", att->StrToStr(att->GetVerso()) });
        }
    }
    if (element->HasAttClass(ATT_PERFRES)) {
        const AttPerfRes *att = element->GetAtt<AttPerfRes>(ATT_PERFRES);
        assert(att);
        if (att->HasSolo()) {
            attributes->push_back({ "solo", att->BooleanToStr(att->GetSolo()) });
        }
    }
    if (element->HasAttClass(ATT_PERFRESBASIC)) {
        const AttPerfResBasic *att = element->GetAtt<AttPerfResBasic>(ATT_PERFRESBASIC);
        assert(att);
        if (att->HasCount()) {
            attributes->push_back({ "count", att->IntToStr(att->GetCount()) });
        }
    }
    if (element->HasAttClass(ATT_RECORDTYPE)) {
        const AttRecordType *att = element->GetAtt<AttRecordType>(ATT_RECORDTYPE);
        assert(att);
        if (att->HasRecordtype()) {
            attributes->push_back({ "recordtype", att->RecordTypeRecordtypeToStr(att->GetRecordtype()) });
        }
    }
    if (element->HasAttClass(ATT_REGULARMETHOD)) {
        const AttRegularMethod *att = element->GetAtt<AttRegularMethod>(ATT_REGULARMETHOD);
        assert(att);
        if (att->HasMethod()) {
            attributes->push_back({ "method", att->RegularMethodMethodToStr(att->GetMethod()) });
        }
    }
}

void AttModule::CopyHeader(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_ADLIBITUM)) {
        const AttAdlibitum *att = element->GetAtt<AttAdlibitum>(ATT_ADLIBITUM);
        assert(att);
        AttAdlibitum *attTarget = target->GetAtt<AttAdlibitum>(ATT_ADLIBITUM);
        assert(attTarget);
        attTarget->SetAdlib(att->GetAdlib());
    }
    if (element->HasAttClass(ATT_BIFOLIUMSURFACES)) {
        const AttBifoliumSurfaces *att = element->GetAtt<AttBifoliumSurfaces>(ATT_BIFOLIUMSURFACES);
        assert(att);
        AttBifoliumSurfaces *attTarget = target->GetAtt<AttBifoliumSurfaces>(ATT_BIFOLIUMSURFACES);
        assert(attTarget);
        attTarget->SetOuterRecto(att->GetOuterRecto());
        attTarget->SetInnerVerso(att->GetInnerVerso());
        attTarget->SetInnerRecto(att->GetInnerRecto());
        attTarget->SetOuterVerso(att->GetOuterVerso());
    }
    if (element->HasAttClass(ATT_FOLIUMSURFACES)) {
        const AttFoliumSurfaces *att = element->GetAtt<AttFoliumSurfaces>(ATT_FOLIUMSURFACES);
        assert(att);
        AttFoliumSurfaces *attTarget = target->GetAtt<AttFoliumSurfaces>(ATT_FOLIUMSURFACES);
        assert(attTarget);
        attTarget->SetRecto(att->GetRecto());
        attTarget->SetVerso(att->GetVerso());
    }
    if (element->HasAttClass(ATT_PERFRES)) {
        const AttPerfRes *att = element->GetAtt<AttPerfRes>(ATT_PERFRES);
        assert(att);
        AttPerfRes *attTarget = target->GetAtt<AttPerfRes>(ATT_PERFRES);
        assert(attTarget);
        attTarget->SetSolo(att->GetSolo());
    }
    if (element->HasAttClass(ATT_PERFRESBASIC)) {
        const AttPerfResBasic *att = element->GetAtt<AttPerfResBasic>(ATT_PERFRESBASIC);
        assert(att);
        AttPerfResBasic *attTarget = target->GetAtt<AttPerfResBasic>(ATT_PERFRESBASIC);
        assert(attTarget);
        attTarget->SetCount(att->GetCount());
    }
    if (element->HasAttClass(ATT_RECORDTYPE)) {
        const AttRecordType *att = element->GetAtt<AttRecordType>(ATT_RECORDTYPE);
        assert(att);
        AttRecordType *attTarget = target->GetAtt<AttRecordType>(ATT_RECORDTYPE);
        assert(attTarget);
        attTarget->SetRecordtype(att->GetRecordtype());
    }
    if (element->HasAttClass(ATT_REGULARMETHOD)) {
        const AttRegularMethod *att = element->GetAtt<AttRegularMethod>(ATT_REGULARMETHOD);
        assert(att);
        AttRegularMethod *attTarget = target->GetAtt<AttRegularMethod>(ATT_REGULARMETHOD);
        assert(attTarget);
        attTarget->SetMethod(att->GetMethod());
    }
}

} // namespace vrv

#include "atts_mensural.h"

namespace vrv {

//----------------------------------------------------------------------------
// Mensural
//----------------------------------------------------------------------------

bool AttModule::SetMensural(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_DURATIONQUALITY)) {
        AttDurationQuality *att = element->GetAtt<AttDurationQuality>(ATT_DURATIONQUALITY);
        assert(att);
        if (attrType == "dur.quality") {
            att->SetDurQuality(att->StrToDurqualityMensural(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MENSURALLOG)) {
        AttMensuralLog *att = element->GetAtt<AttMensuralLog>(ATT_MENSURALLOG);
        assert(att);
        if (attrType == "proport.num") {
            att->SetProportNum(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "proport.numbase") {
            att->SetProportNumbase(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MENSURALSHARED)) {
        AttMensuralShared *att = element->GetAtt<AttMensuralShared>(ATT_MENSURALSHARED);
        assert(att);
        if (attrType == "modusmaior") {
            att->SetModusmaior(att->StrToModusmaior(attrValue));
            return true;
        }
        if (attrType == "modusminor") {
            att->SetModusminor(att->StrToModusminor(attrValue));
            return true;
        }
        if (attrType == "prolatio") {
            att->SetProlatio(att->StrToProlatio(attrValue));
            return true;
        }
        if (attrType == "tempus") {
            att->SetTempus(att->StrToTempus(attrValue));
            return true;
        }
        if (attrType == "divisio") {
            att->SetDivisio(att->StrToDivisio(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NOTEVISMENSURAL)) {
        AttNoteVisMensural *att = element->GetAtt<AttNoteVisMensural>(ATT_NOTEVISMENSURAL);
        assert(att);
        if (attrType == "lig") {
            att->SetLig(att->StrToLigatureform(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_RESTVISMENSURAL)) {
        AttRestVisMensural *att = element->GetAtt<AttRestVisMensural>(ATT_RESTVISMENSURAL);
        assert(att);
        if (attrType == "spaces") {
            att->SetSpaces(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STEMSMENSURAL)) {
        AttStemsMensural *att = element->GetAtt<AttStemsMensural>(ATT_STEMSMENSURAL);
        assert(att);
        if (attrType == "stem.form") {
            att->SetStemForm(att->StrToStemformMensural(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetMensural(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_DURATIONQUALITY)) {
        const AttDurationQuality *att = element->GetAtt<AttDurationQuality>(ATT_DURATIONQUALITY);
        assert(att);
        if (att->HasDurQuality()) {
            attributes->push_back({ "dur.quality", att->DurqualityMensuralToStr(att->GetDurQuality()) });
        }
    }
    if (element->HasAttClass(ATT_MENSURALLOG)) {
        const AttMensuralLog *att = element->GetAtt<AttMensuralLog>(ATT_MENSURALLOG);
        assert(att);
        if (att->HasProportNum()) {
            attributes->push_back({ "proport.num", att->IntToStr(att->GetProportNum()) });
        }
        if (att->HasProportNumbase()) {
            attributes->push_back({ "proport.numbase", att->IntToStr(att->GetProportNumbase()) });
        }
    }
    if (element->HasAttClass(ATT_MENSURALSHARED)) {
        const AttMensuralShared *att = element->GetAtt<AttMensuralShared>(ATT_MENSURALSHARED);
        assert(att);
        if (att->HasModusmaior()) {
            attributes->push_back({ "modusmaior", att->ModusmaiorToStr(att->GetModusmaior()) });
        }
        if (att->HasModusminor()) {
            attributes->push_back({ "modusminor", att->ModusminorToStr(att->GetModusminor()) });
        }
        if (att->HasProlatio()) {
            attributes->push_back({ "prolatio", att->ProlatioToStr(att->GetProlatio()) });
        }
        if (att->HasTempus()) {
            attributes->push_back({ "tempus", att->TempusToStr(att->GetTempus()) });
        }
        if (att->HasDivisio()) {
            attributes->push_back({ "divisio", att->DivisioToStr(att->GetDivisio()) });
        }
    }
    if (element->HasAttClass(ATT_NOTEVISMENSURAL)) {
        const AttNoteVisMensural *att = element->GetAtt<AttNoteVisMensural>(ATT_NOTEVISMENSURAL);
        assert(att);
        if (att->HasLig()) {
            attributes->push_back({ "lig", att->LigatureformToStr(att->GetLig()) });
        }
    }
    if (element->HasAttClass(ATT_RESTVISMENSURAL)) {
        const AttRestVisMensural *att = element->GetAtt<AttRestVisMensural>(ATT_RESTVISMENSURAL);
        assert(att);
        if (att->HasSpaces()) {
            attributes->push_back({ "spaces", att->IntToStr(att->GetSpaces()) });
        }
    }
    if (element->HasAttClass(ATT_STEMSMENSURAL)) {
        const AttStemsMensural *att = element->GetAtt<AttStemsMensural>(ATT_STEMSMENSURAL);
        assert(att);
        if (att->HasStemForm()) {
            attributes->push_back({ "stem.form", att->StemformMensuralToStr(att->GetStemForm()) });
        }
    }
}

void AttModule::CopyMensural(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_DURATIONQUALITY)) {
        const AttDurationQuality *att = element->GetAtt<AttDurationQuality>(ATT_DURATIONQUALITY);
        assert(att);
        AttDurationQuality *attTarget = target->GetAtt<AttDurationQuality>(ATT_DURATIONQUALITY);
        assert(attTarget);
        attTarget->SetDurQuality(att->GetDurQuality());
    }
    if (element->HasAttClass(ATT_MENSURALLOG)) {
        const AttMensuralLog *att = element->GetAtt<AttMensuralLog>(ATT_MENSURALLOG);
        assert(att);
        AttMensuralLog *attTarget = target->GetAtt<AttMensuralLog>(ATT_MENSURALLOG);
        assert(attTarget);
        attTarget->SetProportNum(att->GetProportNum());
        attTarget->SetProportNumbase(att->GetProportNumbase());
    }
    if (element->HasAttClass(ATT_MENSURALSHARED)) {
        const AttMensuralShared *att = element->GetAtt<AttMensuralShared>(ATT_MENSURALSHARED);
        assert(att);
        AttMensuralShared *attTarget = target->GetAtt<AttMensuralShared>(ATT_MENSURALSHARED);
        assert(attTarget);
        attTarget->SetModusmaior(att->GetModusmaior());
        attTarget->SetModusminor(att->GetModusminor());
        attTarget->SetProlatio(att->GetProlatio());
        attTarget->SetTempus(att->GetTempus());
        attTarget->SetDivisio(att->GetDivisio());
    }
    if (element->HasAttClass(ATT_NOTEVISMENSURAL)) {
        const AttNoteVisMensural *att = element->GetAtt<AttNoteVisMensural>(ATT_NOTEVISMENSURAL);
        assert(att);
        AttNoteVisMensural *attTarget = target->GetAtt<AttNoteVisMensural>(ATT_NOTEVISMENSURAL);
        assert(attTarget);
        attTarget->SetLig(att->GetLig());
    }
    if (element->HasAttClass(ATT_RESTVISMENSURAL)) {
        const AttRestVisMensural *att = element->GetAtt<AttRestVisMensural>(ATT_RESTVISMENSURAL);
        assert(att);
        AttRestVisMensural *attTarget = target->GetAtt<AttRestVisMensural>(ATT_RESTVISMENSURAL);
        assert(attTarget);
        attTarget->SetSpaces(att->GetSpaces());
    }
    if (element->HasAttClass(ATT_STEMSMENSURAL)) {
        const AttStemsMensural *att = element->GetAtt<AttStemsMensural>(ATT_STEMSMENSURAL);
        assert(att);
        AttStemsMensural *attTarget = target->GetAtt<AttStemsMensural>(ATT_STEMSMENSURAL);
        assert(attTarget);
        attTarget->SetStemForm(att->GetStemForm());
    }
}

} // namespace vrv

#include "atts_midi.h"

namespace vrv {

//----------------------------------------------------------------------------
// Midi
//----------------------------------------------------------------------------

bool AttModule::SetMidi(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_CHANNELIZED)) {
        AttChannelized *att = element->GetAtt<AttChannelized>(ATT_CHANNELIZED);
        assert(att);
        if (attrType == "midi.channel") {
            att->SetMidiChannel(att->StrToMidichannel(attrValue));
            return true;
        }
        if (attrType == "midi.duty") {
            att->SetMidiDuty(att->StrToPercentLimited(attrValue));
            return true;
        }
        if (attrType == "midi.port") {
            att->SetMidiPort(att->StrToMidivalueName(attrValue));
            return true;
        }
        if (attrType == "midi.track") {
            att->SetMidiTrack(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_INSTRUMENTIDENT)) {
        AttInstrumentIdent *att = element->GetAtt<AttInstrumentIdent>(ATT_INSTRUMENTIDENT);
        assert(att);
        if (attrType == "instr") {
            att->SetInstr(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MIDIINSTRUMENT)) {
        AttMidiInstrument *att = element->GetAtt<AttMidiInstrument>(ATT_MIDIINSTRUMENT);
        assert(att);
        if (attrType == "midi.instrnum") {
            att->SetMidiInstrnum(att->StrToMidivalue(attrValue));
            return true;
        }
        if (attrType == "midi.instrname") {
            att->SetMidiInstrname(att->StrToMidinames(attrValue));
            return true;
        }
        if (attrType == "midi.pan") {
            att->SetMidiPan(att->StrToMidivaluePan(attrValue));
            return true;
        }
        if (attrType == "midi.patchname") {
            att->SetMidiPatchname(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "midi.patchnum") {
            att->SetMidiPatchnum(att->StrToMidivalue(attrValue));
            return true;
        }
        if (attrType == "midi.volume") {
            att->SetMidiVolume(att->StrToPercent(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MIDINUMBER)) {
        AttMidiNumber *att = element->GetAtt<AttMidiNumber>(ATT_MIDINUMBER);
        assert(att);
        if (attrType == "num") {
            att->SetNum(att->StrToMidivalue(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MIDITEMPO)) {
        AttMidiTempo *att = element->GetAtt<AttMidiTempo>(ATT_MIDITEMPO);
        assert(att);
        if (attrType == "midi.bpm") {
            att->SetMidiBpm(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "midi.mspb") {
            att->SetMidiMspb(att->StrToMidimspb(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MIDIVALUE)) {
        AttMidiValue *att = element->GetAtt<AttMidiValue>(ATT_MIDIVALUE);
        assert(att);
        if (attrType == "val") {
            att->SetVal(att->StrToMidivalue(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MIDIVALUE2)) {
        AttMidiValue2 *att = element->GetAtt<AttMidiValue2>(ATT_MIDIVALUE2);
        assert(att);
        if (attrType == "val2") {
            att->SetVal2(att->StrToMidivalue(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MIDIVELOCITY)) {
        AttMidiVelocity *att = element->GetAtt<AttMidiVelocity>(ATT_MIDIVELOCITY);
        assert(att);
        if (attrType == "vel") {
            att->SetVel(att->StrToMidivalue(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TIMEBASE)) {
        AttTimeBase *att = element->GetAtt<AttTimeBase>(ATT_TIMEBASE);
        assert(att);
        if (attrType == "ppq") {
            att->SetPpq(att->StrToInt(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetMidi(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_CHANNELIZED)) {
        const AttChannelized *att = element->GetAtt<AttChannelized>(ATT_CHANNELIZED);
        assert(att);
        if (att->HasMidiChannel()) {
            attributes->push_back({ "midi.channel", att->MidichannelToStr(att->GetMidiChannel()) });
        }
        if (att->HasMidiDuty()) {
            attributes->push_back({ "midi.duty", att->PercentLimitedToStr(att->GetMidiDuty()) });
        }
        if (att->HasMidiPort()) {
            attributes->push_back({ "midi.port", att->MidivalueNameToStr(att->GetMidiPort()) });
        }
        if (att->HasMidiTrack()) {
            attributes->push_back({ "midi.track", att->IntToStr(att->GetMidiTrack()) });
        }
    }
    if (element->HasAttClass(ATT_INSTRUMENTIDENT)) {
        const AttInstrumentIdent *att = element->GetAtt<AttInstrumentIdent>(ATT_INSTRUMENTIDENT);
        assert(att);
        if (att->HasInstr()) {
            attributes->push_back({ "instr", att->StrToStr(att->GetInstr()) });
        }
    }
    if (element->HasAttClass(ATT_MIDIINSTRUMENT)) {
        const AttMidiInstrument *att = element->GetAtt<AttMidiInstrument>(ATT_MIDIINSTRUMENT);
        assert(att);
        if (att->HasMidiInstrnum()) {
            attributes->push_back({ "midi.instrnum", att->MidivalueToStr(att->GetMidiInstrnum()) });
        }
        if (att->HasMidiInstrname()) {
            attributes->push_back({ "midi.instrname", att->MidinamesToStr(att->GetMidiInstrname()) });
        }
        if (att->HasMidiPan()) {
            attributes->push_back({ "midi.pan", att->MidivaluePanToStr(att->GetMidiPan()) });
        }
        if (att->HasMidiPatchname()) {
            attributes->push_back({ "midi.patchname", att->StrToStr(att->GetMidiPatchname()) });
        }
        if (att->HasMidiPatchnum()) {
            attributes->push_back({ "midi.patchnum", att->MidivalueToStr(att->GetMidiPatchnum()) });
        }
        if (att->HasMidiVolume()) {
            attributes->push_back({ "midi.volume", att->PercentToStr(att->GetMidiVolume()) });
        }
    }
    if (element->HasAttClass(ATT_MIDINUMBER)) {
        const AttMidiNumber *att = element->GetAtt<AttMidiNumber>(ATT_MIDINUMBER);
        assert(att);
        if (att->HasNum()) {
            attributes->push_back({ "num", att->MidivalueToStr(att->GetNum()) });
        }
    }
    if (element->HasAttClass(ATT_MIDITEMPO)) {
        const AttMidiTempo *att = element->GetAtt<AttMidiTempo>(ATT_MIDITEMPO);
        assert(att);
        if (att->HasMidiBpm()) {
            attributes->push_back({ "midi.bpm", att->DblToStr(att->GetMidiBpm()) });
        }
        if (att->HasMidiMspb()) {
            attributes->push_back({ "midi.mspb", att->MidimspbToStr(att->GetMidiMspb()) });
        }
    }
    if (element->HasAttClass(ATT_MIDIVALUE)) {
        const AttMidiValue *att = element->GetAtt<AttMidiValue>(ATT_MIDIVALUE);
        assert(att);
        if (att->HasVal()) {
            attributes->push_back({ "val", att->MidivalueToStr(att->GetVal()) });
        }
    }
    if (element->HasAttClass(ATT_MIDIVALUE2)) {
        const AttMidiValue2 *att = element->GetAtt<AttMidiValue2>(ATT_MIDIVALUE2);
        assert(att);
        if (att->HasVal2()) {
            attributes->push_back({ "val2", att->MidivalueToStr(att->GetVal2()) });
        }
    }
    if (element->HasAttClass(ATT_MIDIVELOCITY)) {
        const AttMidiVelocity *att = element->GetAtt<AttMidiVelocity>(ATT_MIDIVELOCITY);
        assert(att);
        if (att->HasVel()) {
            attributes->push_back({ "vel", att->MidivalueToStr(att->GetVel()) });
        }
    }
    if (element->HasAttClass(ATT_TIMEBASE)) {
        const AttTimeBase *att = element->GetAtt<AttTimeBase>(ATT_TIMEBASE);
        assert(att);
        if (att->HasPpq()) {
            attributes->push_back({ "ppq", att->IntToStr(att->GetPpq()) });
        }
    }
}

void AttModule::CopyMidi(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_CHANNELIZED)) {
        const AttChannelized *att = element->GetAtt<AttChannelized>(ATT_CHANNELIZED);
        assert(att);
        AttChannelized *attTarget = target->GetAtt<AttChannelized>(ATT_CHANNELIZED);
        assert(attTarget);
        attTarget->SetMidiChannel(att->GetMidiChannel());
        attTarget->SetMidiDuty(att->GetMidiDuty());
        attTarget->SetMidiPort(att->GetMidiPort());
        attTarget->SetMidiTrack(att->GetMidiTrack());
    }
    if (element->HasAttClass(ATT_INSTRUMENTIDENT)) {
        const AttInstrumentIdent *att = element->GetAtt<AttInstrumentIdent>(ATT_INSTRUMENTIDENT);
        assert(att);
        AttInstrumentIdent *attTarget = target->GetAtt<AttInstrumentIdent>(ATT_INSTRUMENTIDENT);
        assert(attTarget);
        attTarget->SetInstr(att->GetInstr());
    }
    if (element->HasAttClass(ATT_MIDIINSTRUMENT)) {
        const AttMidiInstrument *att = element->GetAtt<AttMidiInstrument>(ATT_MIDIINSTRUMENT);
        assert(att);
        AttMidiInstrument *attTarget = target->GetAtt<AttMidiInstrument>(ATT_MIDIINSTRUMENT);
        assert(attTarget);
        attTarget->SetMidiInstrnum(att->GetMidiInstrnum());
        attTarget->SetMidiInstrname(att->GetMidiInstrname());
        attTarget->SetMidiPan(att->GetMidiPan());
        attTarget->SetMidiPatchname(att->GetMidiPatchname());
        attTarget->SetMidiPatchnum(att->GetMidiPatchnum());
        attTarget->SetMidiVolume(att->GetMidiVolume());
    }
    if (element->HasAttClass(ATT_MIDINUMBER)) {
        const AttMidiNumber *att = element->GetAtt<AttMidiNumber>(ATT_MIDINUMBER);
        assert(att);
        AttMidiNumber *attTarget = target->GetAtt<AttMidiNumber>(ATT_MIDINUMBER);
        assert(attTarget);
        attTarget->SetNum(att->GetNum());
    }
    if (element->HasAttClass(ATT_MIDITEMPO)) {
        const AttMidiTempo *att = element->GetAtt<AttMidiTempo>(ATT_MIDITEMPO);
        assert(att);
        AttMidiTempo *attTarget = target->GetAtt<AttMidiTempo>(ATT_MIDITEMPO);
        assert(attTarget);
        attTarget->SetMidiBpm(att->GetMidiBpm());
        attTarget->SetMidiMspb(att->GetMidiMspb());
    }
    if (element->HasAttClass(ATT_MIDIVALUE)) {
        const AttMidiValue *att = element->GetAtt<AttMidiValue>(ATT_MIDIVALUE);
        assert(att);
        AttMidiValue *attTarget = target->GetAtt<AttMidiValue>(ATT_MIDIVALUE);
        assert(attTarget);
        attTarget->SetVal(att->GetVal());
    }
    if (element->HasAttClass(ATT_MIDIVALUE2)) {
        const AttMidiValue2 *att = element->GetAtt<AttMidiValue2>(ATT_MIDIVALUE2);
        assert(att);
        AttMidiValue2 *attTarget = target->GetAtt<AttMidiValue2>(ATT_MIDIVALUE2);
        assert(attTarget);
        attTarget->SetVal2(att->GetVal2());
    }
    if (element->HasAttClass(ATT_MIDIVELOCITY)) {
        const AttMidiVelocity *att = element->GetAtt<AttMidiVelocity>(ATT_MIDIVELOCITY);
        assert(att);
        AttMidiVelocity *attTarget = target->GetAtt<AttMidiVelocity>(ATT_MIDIVELOCITY);
        assert(attTarget);
        attTarget->SetVel(att->GetVel());
    }
    if (element->HasAttClass(ATT_TIMEBASE)) {
        const AttTimeBase *att = element->GetAtt<AttTimeBase>(ATT_TIMEBASE);
        assert(att);
        AttTimeBase *attTarget = target->GetAtt<AttTimeBase>(ATT_TIMEBASE);
        assert(attTarget);
        attTarget->SetPpq(att->GetPpq());
    }
}

} // namespace vrv

#include "atts_neumes.h"

namespace vrv {

//----------------------------------------------------------------------------
// Neumes
//----------------------------------------------------------------------------

bool AttModule::SetNeumes(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_DIVLINELOG)) {
        AttDivLineLog *att = element->GetAtt<AttDivLineLog>(ATT_DIVLINELOG);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToDivLineLogForm(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NCLOG)) {
        AttNcLog *att = element->GetAtt<AttNcLog>(ATT_NCLOG);
        assert(att);
        if (attrType == "oct") {
            att->SetOct(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "pname") {
            att->SetPname(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NCFORM)) {
        AttNcForm *att = element->GetAtt<AttNcForm>(ATT_NCFORM);
        assert(att);
        if (attrType == "angled") {
            att->SetAngled(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "con") {
            att->SetCon(att->StrToNcFormCon(attrValue));
            return true;
        }
        if (attrType == "hooked") {
            att->SetHooked(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "ligated") {
            att->SetLigated(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "rellen") {
            att->SetRellen(att->StrToNcFormRellen(attrValue));
            return true;
        }
        if (attrType == "sShape") {
            att->SetSShape(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "tilt") {
            att->SetTilt(att->StrToCompassdirection(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NEUMETYPE)) {
        AttNeumeType *att = element->GetAtt<AttNeumeType>(ATT_NEUMETYPE);
        assert(att);
        if (attrType == "type") {
            att->SetType(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetNeumes(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_DIVLINELOG)) {
        const AttDivLineLog *att = element->GetAtt<AttDivLineLog>(ATT_DIVLINELOG);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->DivLineLogFormToStr(att->GetForm()) });
        }
    }
    if (element->HasAttClass(ATT_NCLOG)) {
        const AttNcLog *att = element->GetAtt<AttNcLog>(ATT_NCLOG);
        assert(att);
        if (att->HasOct()) {
            attributes->push_back({ "oct", att->StrToStr(att->GetOct()) });
        }
        if (att->HasPname()) {
            attributes->push_back({ "pname", att->StrToStr(att->GetPname()) });
        }
    }
    if (element->HasAttClass(ATT_NCFORM)) {
        const AttNcForm *att = element->GetAtt<AttNcForm>(ATT_NCFORM);
        assert(att);
        if (att->HasAngled()) {
            attributes->push_back({ "angled", att->BooleanToStr(att->GetAngled()) });
        }
        if (att->HasCon()) {
            attributes->push_back({ "con", att->NcFormConToStr(att->GetCon()) });
        }
        if (att->HasHooked()) {
            attributes->push_back({ "hooked", att->BooleanToStr(att->GetHooked()) });
        }
        if (att->HasLigated()) {
            attributes->push_back({ "ligated", att->BooleanToStr(att->GetLigated()) });
        }
        if (att->HasRellen()) {
            attributes->push_back({ "rellen", att->NcFormRellenToStr(att->GetRellen()) });
        }
        if (att->HasSShape()) {
            attributes->push_back({ "sShape", att->StrToStr(att->GetSShape()) });
        }
        if (att->HasTilt()) {
            attributes->push_back({ "tilt", att->CompassdirectionToStr(att->GetTilt()) });
        }
    }
    if (element->HasAttClass(ATT_NEUMETYPE)) {
        const AttNeumeType *att = element->GetAtt<AttNeumeType>(ATT_NEUMETYPE);
        assert(att);
        if (att->HasType()) {
            attributes->push_back({ "type", att->StrToStr(att->GetType()) });
        }
    }
}

void AttModule::CopyNeumes(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_DIVLINELOG)) {
        const AttDivLineLog *att = element->GetAtt<AttDivLineLog>(ATT_DIVLINELOG);
        assert(att);
        AttDivLineLog *attTarget = target->GetAtt<AttDivLineLog>(ATT_DIVLINELOG);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
    if (element->HasAttClass(ATT_NCLOG)) {
        const AttNcLog *att = element->GetAtt<AttNcLog>(ATT_NCLOG);
        assert(att);
        AttNcLog *attTarget = target->GetAtt<AttNcLog>(ATT_NCLOG);
        assert(attTarget);
        attTarget->SetOct(att->GetOct());
        attTarget->SetPname(att->GetPname());
    }
    if (element->HasAttClass(ATT_NCFORM)) {
        const AttNcForm *att = element->GetAtt<AttNcForm>(ATT_NCFORM);
        assert(att);
        AttNcForm *attTarget = target->GetAtt<AttNcForm>(ATT_NCFORM);
        assert(attTarget);
        attTarget->SetAngled(att->GetAngled());
        attTarget->SetCon(att->GetCon());
        attTarget->SetHooked(att->GetHooked());
        attTarget->SetLigated(att->GetLigated());
        attTarget->SetRellen(att->GetRellen());
        attTarget->SetSShape(att->GetSShape());
        attTarget->SetTilt(att->GetTilt());
    }
    if (element->HasAttClass(ATT_NEUMETYPE)) {
        const AttNeumeType *att = element->GetAtt<AttNeumeType>(ATT_NEUMETYPE);
        assert(att);
        AttNeumeType *attTarget = target->GetAtt<AttNeumeType>(ATT_NEUMETYPE);
        assert(attTarget);
        attTarget->SetType(att->GetType());
    }
}

} // namespace vrv

#include "atts_pagebased.h"

namespace vrv {

//----------------------------------------------------------------------------
// Pagebased
//----------------------------------------------------------------------------

bool AttModule::SetPagebased(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_MARGINS)) {
        AttMargins *att = element->GetAtt<AttMargins>(ATT_MARGINS);
        assert(att);
        if (attrType == "topmar") {
            att->SetTopmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "botmar") {
            att->SetBotmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "leftmar") {
            att->SetLeftmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "rightmar") {
            att->SetRightmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetPagebased(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_MARGINS)) {
        const AttMargins *att = element->GetAtt<AttMargins>(ATT_MARGINS);
        assert(att);
        if (att->HasTopmar()) {
            attributes->push_back({ "topmar", att->MeasurementunsignedToStr(att->GetTopmar()) });
        }
        if (att->HasBotmar()) {
            attributes->push_back({ "botmar", att->MeasurementunsignedToStr(att->GetBotmar()) });
        }
        if (att->HasLeftmar()) {
            attributes->push_back({ "leftmar", att->MeasurementunsignedToStr(att->GetLeftmar()) });
        }
        if (att->HasRightmar()) {
            attributes->push_back({ "rightmar", att->MeasurementunsignedToStr(att->GetRightmar()) });
        }
    }
}

void AttModule::CopyPagebased(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_MARGINS)) {
        const AttMargins *att = element->GetAtt<AttMargins>(ATT_MARGINS);
        assert(att);
        AttMargins *attTarget = target->GetAtt<AttMargins>(ATT_MARGINS);
        assert(attTarget);
        attTarget->SetTopmar(att->GetTopmar());
        attTarget->SetBotmar(att->GetBotmar());
        attTarget->SetLeftmar(att->GetLeftmar());
        attTarget->SetRightmar(att->GetRightmar());
    }
}

} // namespace vrv

#include "atts_performance.h"

namespace vrv {

//----------------------------------------------------------------------------
// Performance
//----------------------------------------------------------------------------

bool AttModule::SetPerformance(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_ALIGNMENT)) {
        AttAlignment *att = element->GetAtt<AttAlignment>(ATT_ALIGNMENT);
        assert(att);
        if (attrType == "when") {
            att->SetWhen(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetPerformance(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_ALIGNMENT)) {
        const AttAlignment *att = element->GetAtt<AttAlignment>(ATT_ALIGNMENT);
        assert(att);
        if (att->HasWhen()) {
            attributes->push_back({ "when", att->StrToStr(att->GetWhen()) });
        }
    }
}

void AttModule::CopyPerformance(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_ALIGNMENT)) {
        const AttAlignment *att = element->GetAtt<AttAlignment>(ATT_ALIGNMENT);
        assert(att);
        AttAlignment *attTarget = target->GetAtt<AttAlignment>(ATT_ALIGNMENT);
        assert(attTarget);
        attTarget->SetWhen(att->GetWhen());
    }
}

} // namespace vrv

#include "atts_shared.h"

namespace vrv {

//----------------------------------------------------------------------------
// Shared
//----------------------------------------------------------------------------

bool AttModule::SetShared(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_ACCIDLOG)) {
        AttAccidLog *att = element->GetAtt<AttAccidLog>(ATT_ACCIDLOG);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToAccidLogFunc(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ACCIDENTAL)) {
        AttAccidental *att = element->GetAtt<AttAccidental>(ATT_ACCIDENTAL);
        assert(att);
        if (attrType == "accid") {
            att->SetAccid(att->StrToAccidentalWritten(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ANNOTLOG)) {
        AttAnnotLog *att = element->GetAtt<AttAnnotLog>(ATT_ANNOTLOG);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ARTICULATION)) {
        AttArticulation *att = element->GetAtt<AttArticulation>(ATT_ARTICULATION);
        assert(att);
        if (attrType == "artic") {
            att->SetArtic(att->StrToArticulationList(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ATTACCALOG)) {
        AttAttaccaLog *att = element->GetAtt<AttAttaccaLog>(ATT_ATTACCALOG);
        assert(att);
        if (attrType == "target") {
            att->SetTarget(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_AUDIENCE)) {
        AttAudience *att = element->GetAtt<AttAudience>(ATT_AUDIENCE);
        assert(att);
        if (attrType == "audience") {
            att->SetAudience(att->StrToAudienceAudience(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_AUGMENTDOTS)) {
        AttAugmentDots *att = element->GetAtt<AttAugmentDots>(ATT_AUGMENTDOTS);
        assert(att);
        if (attrType == "dots") {
            att->SetDots(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_AUTHORIZED)) {
        AttAuthorized *att = element->GetAtt<AttAuthorized>(ATT_AUTHORIZED);
        assert(att);
        if (attrType == "auth") {
            att->SetAuth(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "auth.uri") {
            att->SetAuthUri(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BARLINELOG)) {
        AttBarLineLog *att = element->GetAtt<AttBarLineLog>(ATT_BARLINELOG);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToBarrendition(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BARRING)) {
        AttBarring *att = element->GetAtt<AttBarring>(ATT_BARRING);
        assert(att);
        if (attrType == "bar.len") {
            att->SetBarLen(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "bar.method") {
            att->SetBarMethod(att->StrToBarmethod(attrValue));
            return true;
        }
        if (attrType == "bar.place") {
            att->SetBarPlace(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BASIC)) {
        AttBasic *att = element->GetAtt<AttBasic>(ATT_BASIC);
        assert(att);
        if (attrType == "xml:base") {
            att->SetBase(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BIBL)) {
        AttBibl *att = element->GetAtt<AttBibl>(ATT_BIBL);
        assert(att);
        if (attrType == "analog") {
            att->SetAnalog(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CALENDARED)) {
        AttCalendared *att = element->GetAtt<AttCalendared>(ATT_CALENDARED);
        assert(att);
        if (attrType == "calendar") {
            att->SetCalendar(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CANONICAL)) {
        AttCanonical *att = element->GetAtt<AttCanonical>(ATT_CANONICAL);
        assert(att);
        if (attrType == "codedval") {
            att->SetCodedval(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CLASSED)) {
        AttClassed *att = element->GetAtt<AttClassed>(ATT_CLASSED);
        assert(att);
        if (attrType == "class") {
            att->SetClass(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CLEFLOG)) {
        AttClefLog *att = element->GetAtt<AttClefLog>(ATT_CLEFLOG);
        assert(att);
        if (attrType == "cautionary") {
            att->SetCautionary(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CLEFSHAPE)) {
        AttClefShape *att = element->GetAtt<AttClefShape>(ATT_CLEFSHAPE);
        assert(att);
        if (attrType == "shape") {
            att->SetShape(att->StrToClefshape(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CLEFFINGLOG)) {
        AttCleffingLog *att = element->GetAtt<AttCleffingLog>(ATT_CLEFFINGLOG);
        assert(att);
        if (attrType == "clef.shape") {
            att->SetClefShape(att->StrToClefshape(attrValue));
            return true;
        }
        if (attrType == "clef.line") {
            att->SetClefLine(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "clef.dis") {
            att->SetClefDis(att->StrToOctaveDis(attrValue));
            return true;
        }
        if (attrType == "clef.dis.place") {
            att->SetClefDisPlace(att->StrToStaffrelBasic(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_COLOR)) {
        AttColor *att = element->GetAtt<AttColor>(ATT_COLOR);
        assert(att);
        if (attrType == "color") {
            att->SetColor(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_COLORATION)) {
        AttColoration *att = element->GetAtt<AttColoration>(ATT_COLORATION);
        assert(att);
        if (attrType == "colored") {
            att->SetColored(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_COORDX1)) {
        AttCoordX1 *att = element->GetAtt<AttCoordX1>(ATT_COORDX1);
        assert(att);
        if (attrType == "coord.x1") {
            att->SetCoordX1(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_COORDX2)) {
        AttCoordX2 *att = element->GetAtt<AttCoordX2>(ATT_COORDX2);
        assert(att);
        if (attrType == "coord.x2") {
            att->SetCoordX2(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_COORDY1)) {
        AttCoordY1 *att = element->GetAtt<AttCoordY1>(ATT_COORDY1);
        assert(att);
        if (attrType == "coord.y1") {
            att->SetCoordY1(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_COORDINATED)) {
        AttCoordinated *att = element->GetAtt<AttCoordinated>(ATT_COORDINATED);
        assert(att);
        if (attrType == "lrx") {
            att->SetLrx(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "lry") {
            att->SetLry(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "rotate") {
            att->SetRotate(att->StrToDegrees(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_COORDINATEDUL)) {
        AttCoordinatedUl *att = element->GetAtt<AttCoordinatedUl>(ATT_COORDINATEDUL);
        assert(att);
        if (attrType == "ulx") {
            att->SetUlx(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "uly") {
            att->SetUly(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CUE)) {
        AttCue *att = element->GetAtt<AttCue>(ATT_CUE);
        assert(att);
        if (attrType == "cue") {
            att->SetCue(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CURVATURE)) {
        AttCurvature *att = element->GetAtt<AttCurvature>(ATT_CURVATURE);
        assert(att);
        if (attrType == "bezier") {
            att->SetBezier(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "bulge") {
            att->SetBulge(att->StrToBulge(attrValue));
            return true;
        }
        if (attrType == "curvedir") {
            att->SetCurvedir(att->StrToCurvatureCurvedir(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CUSTOSLOG)) {
        AttCustosLog *att = element->GetAtt<AttCustosLog>(ATT_CUSTOSLOG);
        assert(att);
        if (attrType == "target") {
            att->SetTarget(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DATAPOINTING)) {
        AttDataPointing *att = element->GetAtt<AttDataPointing>(ATT_DATAPOINTING);
        assert(att);
        if (attrType == "data") {
            att->SetData(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DATASELECTING)) {
        AttDataSelecting *att = element->GetAtt<AttDataSelecting>(ATT_DATASELECTING);
        assert(att);
        if (attrType == "select") {
            att->SetSelect(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DATABLE)) {
        AttDatable *att = element->GetAtt<AttDatable>(ATT_DATABLE);
        assert(att);
        if (attrType == "enddate") {
            att->SetEnddate(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "isodate") {
            att->SetIsodate(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "notafter") {
            att->SetNotafter(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "notbefore") {
            att->SetNotbefore(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "startdate") {
            att->SetStartdate(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DISTANCES)) {
        AttDistances *att = element->GetAtt<AttDistances>(ATT_DISTANCES);
        assert(att);
        if (attrType == "dir.dist") {
            att->SetDirDist(att->StrToMeasurementsigned(attrValue));
            return true;
        }
        if (attrType == "dynam.dist") {
            att->SetDynamDist(att->StrToMeasurementsigned(attrValue));
            return true;
        }
        if (attrType == "harm.dist") {
            att->SetHarmDist(att->StrToMeasurementsigned(attrValue));
            return true;
        }
        if (attrType == "reh.dist") {
            att->SetRehDist(att->StrToMeasurementsigned(attrValue));
            return true;
        }
        if (attrType == "tempo.dist") {
            att->SetTempoDist(att->StrToMeasurementsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DOCSTATUS)) {
        AttDocStatus *att = element->GetAtt<AttDocStatus>(ATT_DOCSTATUS);
        assert(att);
        if (attrType == "status") {
            att->SetStatus(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DOTLOG)) {
        AttDotLog *att = element->GetAtt<AttDotLog>(ATT_DOTLOG);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToDotLogForm(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DURATIONADDITIVE)) {
        AttDurationAdditive *att = element->GetAtt<AttDurationAdditive>(ATT_DURATIONADDITIVE);
        assert(att);
        if (attrType == "dur") {
            att->SetDur(att->StrToDuration(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DURATIONDEFAULT)) {
        AttDurationDefault *att = element->GetAtt<AttDurationDefault>(ATT_DURATIONDEFAULT);
        assert(att);
        if (attrType == "dur.default") {
            att->SetDurDefault(att->StrToDuration(attrValue));
            return true;
        }
        if (attrType == "num.default") {
            att->SetNumDefault(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "numbase.default") {
            att->SetNumbaseDefault(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DURATIONLOG)) {
        AttDurationLog *att = element->GetAtt<AttDurationLog>(ATT_DURATIONLOG);
        assert(att);
        if (attrType == "dur") {
            att->SetDur(att->StrToDuration(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_DURATIONRATIO)) {
        AttDurationRatio *att = element->GetAtt<AttDurationRatio>(ATT_DURATIONRATIO);
        assert(att);
        if (attrType == "num") {
            att->SetNum(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "numbase") {
            att->SetNumbase(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ENCLOSINGCHARS)) {
        AttEnclosingChars *att = element->GetAtt<AttEnclosingChars>(ATT_ENCLOSINGCHARS);
        assert(att);
        if (attrType == "enclose") {
            att->SetEnclose(att->StrToEnclosure(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ENDINGS)) {
        AttEndings *att = element->GetAtt<AttEndings>(ATT_ENDINGS);
        assert(att);
        if (attrType == "ending.rend") {
            att->SetEndingRend(att->StrToEndingsEndingrend(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_EVIDENCE)) {
        AttEvidence *att = element->GetAtt<AttEvidence>(ATT_EVIDENCE);
        assert(att);
        if (attrType == "cert") {
            att->SetCert(att->StrToCertainty(attrValue));
            return true;
        }
        if (attrType == "evidence") {
            att->SetEvidence(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_EXTENDER)) {
        AttExtender *att = element->GetAtt<AttExtender>(ATT_EXTENDER);
        assert(att);
        if (attrType == "extender") {
            att->SetExtender(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_EXTENT)) {
        AttExtent *att = element->GetAtt<AttExtent>(ATT_EXTENT);
        assert(att);
        if (attrType == "extent") {
            att->SetExtent(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_FERMATAPRESENT)) {
        AttFermataPresent *att = element->GetAtt<AttFermataPresent>(ATT_FERMATAPRESENT);
        assert(att);
        if (attrType == "fermata") {
            att->SetFermata(att->StrToStaffrelBasic(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_FILING)) {
        AttFiling *att = element->GetAtt<AttFiling>(ATT_FILING);
        assert(att);
        if (attrType == "nonfiling") {
            att->SetNonfiling(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_FORMEWORK)) {
        AttFormework *att = element->GetAtt<AttFormework>(ATT_FORMEWORK);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToPgfunc(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_GRPSYMLOG)) {
        AttGrpSymLog *att = element->GetAtt<AttGrpSymLog>(ATT_GRPSYMLOG);
        assert(att);
        if (attrType == "level") {
            att->SetLevel(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_HANDIDENT)) {
        AttHandIdent *att = element->GetAtt<AttHandIdent>(ATT_HANDIDENT);
        assert(att);
        if (attrType == "hand") {
            att->SetHand(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_HEIGHT)) {
        AttHeight *att = element->GetAtt<AttHeight>(ATT_HEIGHT);
        assert(att);
        if (attrType == "height") {
            att->SetHeight(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_HORIZONTALALIGN)) {
        AttHorizontalAlign *att = element->GetAtt<AttHorizontalAlign>(ATT_HORIZONTALALIGN);
        assert(att);
        if (attrType == "halign") {
            att->SetHalign(att->StrToHorizontalalignment(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_INTERNETMEDIA)) {
        AttInternetMedia *att = element->GetAtt<AttInternetMedia>(ATT_INTERNETMEDIA);
        assert(att);
        if (attrType == "mimetype") {
            att->SetMimetype(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_JOINED)) {
        AttJoined *att = element->GetAtt<AttJoined>(ATT_JOINED);
        assert(att);
        if (attrType == "join") {
            att->SetJoin(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_KEYSIGLOG)) {
        AttKeySigLog *att = element->GetAtt<AttKeySigLog>(ATT_KEYSIGLOG);
        assert(att);
        if (attrType == "sig") {
            att->SetSig(att->StrToKeysignature(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_KEYSIGDEFAULTLOG)) {
        AttKeySigDefaultLog *att = element->GetAtt<AttKeySigDefaultLog>(ATT_KEYSIGDEFAULTLOG);
        assert(att);
        if (attrType == "keysig") {
            att->SetKeysig(att->StrToKeysignature(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LABELLED)) {
        AttLabelled *att = element->GetAtt<AttLabelled>(ATT_LABELLED);
        assert(att);
        if (attrType == "label") {
            att->SetLabel(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LANG)) {
        AttLang *att = element->GetAtt<AttLang>(ATT_LANG);
        assert(att);
        if (attrType == "xml:lang") {
            att->SetLang(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "translit") {
            att->SetTranslit(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LAYERLOG)) {
        AttLayerLog *att = element->GetAtt<AttLayerLog>(ATT_LAYERLOG);
        assert(att);
        if (attrType == "def") {
            att->SetDef(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LAYERIDENT)) {
        AttLayerIdent *att = element->GetAtt<AttLayerIdent>(ATT_LAYERIDENT);
        assert(att);
        if (attrType == "layer") {
            att->SetLayer(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LINELOC)) {
        AttLineLoc *att = element->GetAtt<AttLineLoc>(ATT_LINELOC);
        assert(att);
        if (attrType == "line") {
            att->SetLine(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LINEREND)) {
        AttLineRend *att = element->GetAtt<AttLineRend>(ATT_LINEREND);
        assert(att);
        if (attrType == "lendsym") {
            att->SetLendsym(att->StrToLinestartendsymbol(attrValue));
            return true;
        }
        if (attrType == "lendsym.size") {
            att->SetLendsymSize(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "lstartsym") {
            att->SetLstartsym(att->StrToLinestartendsymbol(attrValue));
            return true;
        }
        if (attrType == "lstartsym.size") {
            att->SetLstartsymSize(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LINERENDBASE)) {
        AttLineRendBase *att = element->GetAtt<AttLineRendBase>(ATT_LINERENDBASE);
        assert(att);
        if (attrType == "lform") {
            att->SetLform(att->StrToLineform(attrValue));
            return true;
        }
        if (attrType == "lwidth") {
            att->SetLwidth(att->StrToLinewidth(attrValue));
            return true;
        }
        if (attrType == "lsegs") {
            att->SetLsegs(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LINKING)) {
        AttLinking *att = element->GetAtt<AttLinking>(ATT_LINKING);
        assert(att);
        if (attrType == "copyof") {
            att->SetCopyof(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "corresp") {
            att->SetCorresp(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "follows") {
            att->SetFollows(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "next") {
            att->SetNext(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "precedes") {
            att->SetPrecedes(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "prev") {
            att->SetPrev(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "sameas") {
            att->SetSameas(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "synch") {
            att->SetSynch(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LYRICSTYLE)) {
        AttLyricStyle *att = element->GetAtt<AttLyricStyle>(ATT_LYRICSTYLE);
        assert(att);
        if (attrType == "lyric.align") {
            att->SetLyricAlign(att->StrToMeasurementsigned(attrValue));
            return true;
        }
        if (attrType == "lyric.fam") {
            att->SetLyricFam(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "lyric.name") {
            att->SetLyricName(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "lyric.size") {
            att->SetLyricSize(att->StrToFontsize(attrValue));
            return true;
        }
        if (attrType == "lyric.style") {
            att->SetLyricStyle(att->StrToFontstyle(attrValue));
            return true;
        }
        if (attrType == "lyric.weight") {
            att->SetLyricWeight(att->StrToFontweight(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MEASURENUMBERS)) {
        AttMeasureNumbers *att = element->GetAtt<AttMeasureNumbers>(ATT_MEASURENUMBERS);
        assert(att);
        if (attrType == "mnum.visible") {
            att->SetMnumVisible(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MEASUREMENT)) {
        AttMeasurement *att = element->GetAtt<AttMeasurement>(ATT_MEASUREMENT);
        assert(att);
        if (attrType == "unit") {
            att->SetUnit(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MEDIABOUNDS)) {
        AttMediaBounds *att = element->GetAtt<AttMediaBounds>(ATT_MEDIABOUNDS);
        assert(att);
        if (attrType == "begin") {
            att->SetBegin(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "end") {
            att->SetEnd(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "betype") {
            att->SetBetype(att->StrToBetype(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MEDIUM)) {
        AttMedium *att = element->GetAtt<AttMedium>(ATT_MEDIUM);
        assert(att);
        if (attrType == "medium") {
            att->SetMedium(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MEIVERSION)) {
        AttMeiVersion *att = element->GetAtt<AttMeiVersion>(ATT_MEIVERSION);
        assert(att);
        if (attrType == "meiversion") {
            att->SetMeiversion(att->StrToMeiVersionMeiversion(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MENSURLOG)) {
        AttMensurLog *att = element->GetAtt<AttMensurLog>(ATT_MENSURLOG);
        assert(att);
        if (attrType == "level") {
            att->SetLevel(att->StrToDuration(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_METADATAPOINTING)) {
        AttMetadataPointing *att = element->GetAtt<AttMetadataPointing>(ATT_METADATAPOINTING);
        assert(att);
        if (attrType == "decls") {
            att->SetDecls(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_METERCONFORMANCE)) {
        AttMeterConformance *att = element->GetAtt<AttMeterConformance>(ATT_METERCONFORMANCE);
        assert(att);
        if (attrType == "metcon") {
            att->SetMetcon(att->StrToMeterConformanceMetcon(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_METERCONFORMANCEBAR)) {
        AttMeterConformanceBar *att = element->GetAtt<AttMeterConformanceBar>(ATT_METERCONFORMANCEBAR);
        assert(att);
        if (attrType == "metcon") {
            att->SetMetcon(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "control") {
            att->SetControl(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_METERSIGLOG)) {
        AttMeterSigLog *att = element->GetAtt<AttMeterSigLog>(ATT_METERSIGLOG);
        assert(att);
        if (attrType == "count") {
            att->SetCount(att->StrToMetercountPair(attrValue));
            return true;
        }
        if (attrType == "sym") {
            att->SetSym(att->StrToMetersign(attrValue));
            return true;
        }
        if (attrType == "unit") {
            att->SetUnit(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_METERSIGDEFAULTLOG)) {
        AttMeterSigDefaultLog *att = element->GetAtt<AttMeterSigDefaultLog>(ATT_METERSIGDEFAULTLOG);
        assert(att);
        if (attrType == "meter.count") {
            att->SetMeterCount(att->StrToMetercountPair(attrValue));
            return true;
        }
        if (attrType == "meter.unit") {
            att->SetMeterUnit(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "meter.sym") {
            att->SetMeterSym(att->StrToMetersign(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MMTEMPO)) {
        AttMmTempo *att = element->GetAtt<AttMmTempo>(ATT_MMTEMPO);
        assert(att);
        if (attrType == "mm") {
            att->SetMm(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "mm.unit") {
            att->SetMmUnit(att->StrToDuration(attrValue));
            return true;
        }
        if (attrType == "mm.dots") {
            att->SetMmDots(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MULTINUMMEASURES)) {
        AttMultinumMeasures *att = element->GetAtt<AttMultinumMeasures>(ATT_MULTINUMMEASURES);
        assert(att);
        if (attrType == "multi.number") {
            att->SetMultiNumber(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NINTEGER)) {
        AttNInteger *att = element->GetAtt<AttNInteger>(ATT_NINTEGER);
        assert(att);
        if (attrType == "n") {
            att->SetN(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NNUMBERLIKE)) {
        AttNNumberLike *att = element->GetAtt<AttNNumberLike>(ATT_NNUMBERLIKE);
        assert(att);
        if (attrType == "n") {
            att->SetN(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NAME)) {
        AttName *att = element->GetAtt<AttName>(ATT_NAME);
        assert(att);
        if (attrType == "nymref") {
            att->SetNymref(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "role") {
            att->SetRole(att->StrToRelators(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NOTATIONSTYLE)) {
        AttNotationStyle *att = element->GetAtt<AttNotationStyle>(ATT_NOTATIONSTYLE);
        assert(att);
        if (attrType == "music.name") {
            att->SetMusicName(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "music.size") {
            att->SetMusicSize(att->StrToFontsize(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_NOTEHEADS)) {
        AttNoteHeads *att = element->GetAtt<AttNoteHeads>(ATT_NOTEHEADS);
        assert(att);
        if (attrType == "head.altsym") {
            att->SetHeadAltsym(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "head.auth") {
            att->SetHeadAuth(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "head.color") {
            att->SetHeadColor(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "head.fill") {
            att->SetHeadFill(att->StrToFill(attrValue));
            return true;
        }
        if (attrType == "head.fillcolor") {
            att->SetHeadFillcolor(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "head.mod") {
            att->SetHeadMod(att->StrToNoteheadmodifier(attrValue));
            return true;
        }
        if (attrType == "head.rotation") {
            att->SetHeadRotation(att->StrToRotation(attrValue));
            return true;
        }
        if (attrType == "head.shape") {
            att->SetHeadShape(att->StrToHeadshape(attrValue));
            return true;
        }
        if (attrType == "head.visible") {
            att->SetHeadVisible(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_OCTAVE)) {
        AttOctave *att = element->GetAtt<AttOctave>(ATT_OCTAVE);
        assert(att);
        if (attrType == "oct") {
            att->SetOct(att->StrToOctave(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_OCTAVEDEFAULT)) {
        AttOctaveDefault *att = element->GetAtt<AttOctaveDefault>(ATT_OCTAVEDEFAULT);
        assert(att);
        if (attrType == "oct.default") {
            att->SetOctDefault(att->StrToOctave(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_OCTAVEDISPLACEMENT)) {
        AttOctaveDisplacement *att = element->GetAtt<AttOctaveDisplacement>(ATT_OCTAVEDISPLACEMENT);
        assert(att);
        if (attrType == "dis") {
            att->SetDis(att->StrToOctaveDis(attrValue));
            return true;
        }
        if (attrType == "dis.place") {
            att->SetDisPlace(att->StrToStaffrelBasic(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ONELINESTAFF)) {
        AttOneLineStaff *att = element->GetAtt<AttOneLineStaff>(ATT_ONELINESTAFF);
        assert(att);
        if (attrType == "ontheline") {
            att->SetOntheline(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_OPTIMIZATION)) {
        AttOptimization *att = element->GetAtt<AttOptimization>(ATT_OPTIMIZATION);
        assert(att);
        if (attrType == "optimize") {
            att->SetOptimize(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ORIGINLAYERIDENT)) {
        AttOriginLayerIdent *att = element->GetAtt<AttOriginLayerIdent>(ATT_ORIGINLAYERIDENT);
        assert(att);
        if (attrType == "origin.layer") {
            att->SetOriginLayer(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ORIGINSTAFFIDENT)) {
        AttOriginStaffIdent *att = element->GetAtt<AttOriginStaffIdent>(ATT_ORIGINSTAFFIDENT);
        assert(att);
        if (attrType == "origin.staff") {
            att->SetOriginStaff(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ORIGINSTARTENDID)) {
        AttOriginStartEndId *att = element->GetAtt<AttOriginStartEndId>(ATT_ORIGINSTARTENDID);
        assert(att);
        if (attrType == "origin.startid") {
            att->SetOriginStartid(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "origin.endid") {
            att->SetOriginEndid(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ORIGINTIMESTAMPLOG)) {
        AttOriginTimestampLog *att = element->GetAtt<AttOriginTimestampLog>(ATT_ORIGINTIMESTAMPLOG);
        assert(att);
        if (attrType == "origin.tstamp") {
            att->SetOriginTstamp(att->StrToMeasurebeat(attrValue));
            return true;
        }
        if (attrType == "origin.tstamp2") {
            att->SetOriginTstamp2(att->StrToMeasurebeat(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PAGES)) {
        AttPages *att = element->GetAtt<AttPages>(ATT_PAGES);
        assert(att);
        if (attrType == "page.height") {
            att->SetPageHeight(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "page.width") {
            att->SetPageWidth(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "page.topmar") {
            att->SetPageTopmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "page.botmar") {
            att->SetPageBotmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "page.leftmar") {
            att->SetPageLeftmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "page.rightmar") {
            att->SetPageRightmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "page.panels") {
            att->SetPagePanels(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "page.scale") {
            att->SetPageScale(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PARTIDENT)) {
        AttPartIdent *att = element->GetAtt<AttPartIdent>(ATT_PARTIDENT);
        assert(att);
        if (attrType == "part") {
            att->SetPart(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "partstaff") {
            att->SetPartstaff(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PITCH)) {
        AttPitch *att = element->GetAtt<AttPitch>(ATT_PITCH);
        assert(att);
        if (attrType == "pname") {
            att->SetPname(att->StrToPitchname(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PLACEMENTONSTAFF)) {
        AttPlacementOnStaff *att = element->GetAtt<AttPlacementOnStaff>(ATT_PLACEMENTONSTAFF);
        assert(att);
        if (attrType == "onstaff") {
            att->SetOnstaff(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PLACEMENTRELEVENT)) {
        AttPlacementRelEvent *att = element->GetAtt<AttPlacementRelEvent>(ATT_PLACEMENTRELEVENT);
        assert(att);
        if (attrType == "place") {
            att->SetPlace(att->StrToStaffrel(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PLACEMENTRELSTAFF)) {
        AttPlacementRelStaff *att = element->GetAtt<AttPlacementRelStaff>(ATT_PLACEMENTRELSTAFF);
        assert(att);
        if (attrType == "place") {
            att->SetPlace(att->StrToStaffrel(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PLIST)) {
        AttPlist *att = element->GetAtt<AttPlist>(ATT_PLIST);
        assert(att);
        if (attrType == "plist") {
            att->SetPlist(att->StrToXsdAnyURIList(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_POINTING)) {
        AttPointing *att = element->GetAtt<AttPointing>(ATT_POINTING);
        assert(att);
        if (attrType == "xlink:actuate") {
            att->SetActuate(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "xlink:role") {
            att->SetRole(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "xlink:show") {
            att->SetShow(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "target") {
            att->SetTarget(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "targettype") {
            att->SetTargettype(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_QUANTITY)) {
        AttQuantity *att = element->GetAtt<AttQuantity>(ATT_QUANTITY);
        assert(att);
        if (attrType == "quantity") {
            att->SetQuantity(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_RANGING)) {
        AttRanging *att = element->GetAtt<AttRanging>(ATT_RANGING);
        assert(att);
        if (attrType == "atleast") {
            att->SetAtleast(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "atmost") {
            att->SetAtmost(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "min") {
            att->SetMin(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "max") {
            att->SetMax(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "confidence") {
            att->SetConfidence(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_REPEATMARKLOG)) {
        AttRepeatMarkLog *att = element->GetAtt<AttRepeatMarkLog>(ATT_REPEATMARKLOG);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToRepeatMarkLogFunc(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_RESPONSIBILITY)) {
        AttResponsibility *att = element->GetAtt<AttResponsibility>(ATT_RESPONSIBILITY);
        assert(att);
        if (attrType == "resp") {
            att->SetResp(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_RESTDURATIONLOG)) {
        AttRestdurationLog *att = element->GetAtt<AttRestdurationLog>(ATT_RESTDURATIONLOG);
        assert(att);
        if (attrType == "dur") {
            att->SetDur(att->StrToDuration(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SCALABLE)) {
        AttScalable *att = element->GetAtt<AttScalable>(ATT_SCALABLE);
        assert(att);
        if (attrType == "scale") {
            att->SetScale(att->StrToPercent(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SEQUENCE)) {
        AttSequence *att = element->GetAtt<AttSequence>(ATT_SEQUENCE);
        assert(att);
        if (attrType == "seq") {
            att->SetSeq(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SLASHCOUNT)) {
        AttSlashCount *att = element->GetAtt<AttSlashCount>(ATT_SLASHCOUNT);
        assert(att);
        if (attrType == "slash") {
            att->SetSlash(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SLURPRESENT)) {
        AttSlurPresent *att = element->GetAtt<AttSlurPresent>(ATT_SLURPRESENT);
        assert(att);
        if (attrType == "slur") {
            att->SetSlur(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SOURCE)) {
        AttSource *att = element->GetAtt<AttSource>(ATT_SOURCE);
        assert(att);
        if (attrType == "source") {
            att->SetSource(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SPACING)) {
        AttSpacing *att = element->GetAtt<AttSpacing>(ATT_SPACING);
        assert(att);
        if (attrType == "spacing.packexp") {
            att->SetSpacingPackexp(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "spacing.packfact") {
            att->SetSpacingPackfact(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "spacing.staff") {
            att->SetSpacingStaff(att->StrToMeasurementsigned(attrValue));
            return true;
        }
        if (attrType == "spacing.system") {
            att->SetSpacingSystem(att->StrToMeasurementsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STAFFLOG)) {
        AttStaffLog *att = element->GetAtt<AttStaffLog>(ATT_STAFFLOG);
        assert(att);
        if (attrType == "def") {
            att->SetDef(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STAFFDEFLOG)) {
        AttStaffDefLog *att = element->GetAtt<AttStaffDefLog>(ATT_STAFFDEFLOG);
        assert(att);
        if (attrType == "lines") {
            att->SetLines(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STAFFGROUPINGSYM)) {
        AttStaffGroupingSym *att = element->GetAtt<AttStaffGroupingSym>(ATT_STAFFGROUPINGSYM);
        assert(att);
        if (attrType == "symbol") {
            att->SetSymbol(att->StrToStaffGroupingSymSymbol(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STAFFIDENT)) {
        AttStaffIdent *att = element->GetAtt<AttStaffIdent>(ATT_STAFFIDENT);
        assert(att);
        if (attrType == "staff") {
            att->SetStaff(att->StrToXsdPositiveIntegerList(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STAFFITEMS)) {
        AttStaffItems *att = element->GetAtt<AttStaffItems>(ATT_STAFFITEMS);
        assert(att);
        if (attrType == "aboveorder") {
            att->SetAboveorder(att->StrToStaffitem(attrValue));
            return true;
        }
        if (attrType == "beloworder") {
            att->SetBeloworder(att->StrToStaffitem(attrValue));
            return true;
        }
        if (attrType == "betweenorder") {
            att->SetBetweenorder(att->StrToStaffitem(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STAFFLOC)) {
        AttStaffLoc *att = element->GetAtt<AttStaffLoc>(ATT_STAFFLOC);
        assert(att);
        if (attrType == "loc") {
            att->SetLoc(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STAFFLOCPITCHED)) {
        AttStaffLocPitched *att = element->GetAtt<AttStaffLocPitched>(ATT_STAFFLOCPITCHED);
        assert(att);
        if (attrType == "ploc") {
            att->SetPloc(att->StrToPitchname(attrValue));
            return true;
        }
        if (attrType == "oloc") {
            att->SetOloc(att->StrToOctave(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STARTENDID)) {
        AttStartEndId *att = element->GetAtt<AttStartEndId>(ATT_STARTENDID);
        assert(att);
        if (attrType == "endid") {
            att->SetEndid(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STARTID)) {
        AttStartId *att = element->GetAtt<AttStartId>(ATT_STARTID);
        assert(att);
        if (attrType == "startid") {
            att->SetStartid(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STEMS)) {
        AttStems *att = element->GetAtt<AttStems>(ATT_STEMS);
        assert(att);
        if (attrType == "stem.dir") {
            att->SetStemDir(att->StrToStemdirection(attrValue));
            return true;
        }
        if (attrType == "stem.len") {
            att->SetStemLen(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "stem.mod") {
            att->SetStemMod(att->StrToStemmodifier(attrValue));
            return true;
        }
        if (attrType == "stem.pos") {
            att->SetStemPos(att->StrToStemposition(attrValue));
            return true;
        }
        if (attrType == "stem.sameas") {
            att->SetStemSameas(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "stem.visible") {
            att->SetStemVisible(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "stem.x") {
            att->SetStemX(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "stem.y") {
            att->SetStemY(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SYLLOG)) {
        AttSylLog *att = element->GetAtt<AttSylLog>(ATT_SYLLOG);
        assert(att);
        if (attrType == "con") {
            att->SetCon(att->StrToSylLogCon(attrValue));
            return true;
        }
        if (attrType == "wordpos") {
            att->SetWordpos(att->StrToSylLogWordpos(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SYLTEXT)) {
        AttSylText *att = element->GetAtt<AttSylText>(ATT_SYLTEXT);
        assert(att);
        if (attrType == "syl") {
            att->SetSyl(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SYSTEMS)) {
        AttSystems *att = element->GetAtt<AttSystems>(ATT_SYSTEMS);
        assert(att);
        if (attrType == "system.leftline") {
            att->SetSystemLeftline(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "system.leftmar") {
            att->SetSystemLeftmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "system.rightmar") {
            att->SetSystemRightmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "system.topmar") {
            att->SetSystemTopmar(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TARGETEVAL)) {
        AttTargetEval *att = element->GetAtt<AttTargetEval>(ATT_TARGETEVAL);
        assert(att);
        if (attrType == "evaluate") {
            att->SetEvaluate(att->StrToTargetEvalEvaluate(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TEMPOLOG)) {
        AttTempoLog *att = element->GetAtt<AttTempoLog>(ATT_TEMPOLOG);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToTempoLogFunc(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TEXTRENDITION)) {
        AttTextRendition *att = element->GetAtt<AttTextRendition>(ATT_TEXTRENDITION);
        assert(att);
        if (attrType == "altrend") {
            att->SetAltrend(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "rend") {
            att->SetRend(att->StrToTextrendition(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TEXTSTYLE)) {
        AttTextStyle *att = element->GetAtt<AttTextStyle>(ATT_TEXTSTYLE);
        assert(att);
        if (attrType == "text.fam") {
            att->SetTextFam(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "text.name") {
            att->SetTextName(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "text.size") {
            att->SetTextSize(att->StrToFontsize(attrValue));
            return true;
        }
        if (attrType == "text.style") {
            att->SetTextStyle(att->StrToFontstyle(attrValue));
            return true;
        }
        if (attrType == "text.weight") {
            att->SetTextWeight(att->StrToFontweight(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TIEPRESENT)) {
        AttTiePresent *att = element->GetAtt<AttTiePresent>(ATT_TIEPRESENT);
        assert(att);
        if (attrType == "tie") {
            att->SetTie(att->StrToTie(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TIMESTAMPLOG)) {
        AttTimestampLog *att = element->GetAtt<AttTimestampLog>(ATT_TIMESTAMPLOG);
        assert(att);
        if (attrType == "tstamp") {
            att->SetTstamp(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TIMESTAMP2LOG)) {
        AttTimestamp2Log *att = element->GetAtt<AttTimestamp2Log>(ATT_TIMESTAMP2LOG);
        assert(att);
        if (attrType == "tstamp2") {
            att->SetTstamp2(att->StrToMeasurebeat(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TRANSPOSITION)) {
        AttTransposition *att = element->GetAtt<AttTransposition>(ATT_TRANSPOSITION);
        assert(att);
        if (attrType == "trans.diat") {
            att->SetTransDiat(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "trans.semi") {
            att->SetTransSemi(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TUNING)) {
        AttTuning *att = element->GetAtt<AttTuning>(ATT_TUNING);
        assert(att);
        if (attrType == "tune.Hz") {
            att->SetTuneHz(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "tune.pname") {
            att->SetTunePname(att->StrToPitchname(attrValue));
            return true;
        }
        if (attrType == "tune.temper") {
            att->SetTuneTemper(att->StrToTemperament(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TUNINGLOG)) {
        AttTuningLog *att = element->GetAtt<AttTuningLog>(ATT_TUNINGLOG);
        assert(att);
        if (attrType == "tuning.standard") {
            att->SetTuningStandard(att->StrToCoursetuning(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TUPLETPRESENT)) {
        AttTupletPresent *att = element->GetAtt<AttTupletPresent>(ATT_TUPLETPRESENT);
        assert(att);
        if (attrType == "tuplet") {
            att->SetTuplet(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TYPED)) {
        AttTyped *att = element->GetAtt<AttTyped>(ATT_TYPED);
        assert(att);
        if (attrType == "type") {
            att->SetType(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TYPOGRAPHY)) {
        AttTypography *att = element->GetAtt<AttTypography>(ATT_TYPOGRAPHY);
        assert(att);
        if (attrType == "fontfam") {
            att->SetFontfam(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "fontname") {
            att->SetFontname(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "fontsize") {
            att->SetFontsize(att->StrToFontsize(attrValue));
            return true;
        }
        if (attrType == "fontstyle") {
            att->SetFontstyle(att->StrToFontstyle(attrValue));
            return true;
        }
        if (attrType == "fontweight") {
            att->SetFontweight(att->StrToFontweight(attrValue));
            return true;
        }
        if (attrType == "letterspacing") {
            att->SetLetterspacing(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "lineheight") {
            att->SetLineheight(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VERTICALALIGN)) {
        AttVerticalAlign *att = element->GetAtt<AttVerticalAlign>(ATT_VERTICALALIGN);
        assert(att);
        if (attrType == "valign") {
            att->SetValign(att->StrToVerticalalignment(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VERTICALGROUP)) {
        AttVerticalGroup *att = element->GetAtt<AttVerticalGroup>(ATT_VERTICALGROUP);
        assert(att);
        if (attrType == "vgrp") {
            att->SetVgrp(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VISIBILITY)) {
        AttVisibility *att = element->GetAtt<AttVisibility>(ATT_VISIBILITY);
        assert(att);
        if (attrType == "visible") {
            att->SetVisible(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSETHO)) {
        AttVisualOffsetHo *att = element->GetAtt<AttVisualOffsetHo>(ATT_VISUALOFFSETHO);
        assert(att);
        if (attrType == "ho") {
            att->SetHo(att->StrToMeasurementsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSETTO)) {
        AttVisualOffsetTo *att = element->GetAtt<AttVisualOffsetTo>(ATT_VISUALOFFSETTO);
        assert(att);
        if (attrType == "to") {
            att->SetTo(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSETVO)) {
        AttVisualOffsetVo *att = element->GetAtt<AttVisualOffsetVo>(ATT_VISUALOFFSETVO);
        assert(att);
        if (attrType == "vo") {
            att->SetVo(att->StrToMeasurementsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSET2HO)) {
        AttVisualOffset2Ho *att = element->GetAtt<AttVisualOffset2Ho>(ATT_VISUALOFFSET2HO);
        assert(att);
        if (attrType == "startho") {
            att->SetStartho(att->StrToMeasurementsigned(attrValue));
            return true;
        }
        if (attrType == "endho") {
            att->SetEndho(att->StrToMeasurementsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSET2TO)) {
        AttVisualOffset2To *att = element->GetAtt<AttVisualOffset2To>(ATT_VISUALOFFSET2TO);
        assert(att);
        if (attrType == "startto") {
            att->SetStartto(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "endto") {
            att->SetEndto(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSET2VO)) {
        AttVisualOffset2Vo *att = element->GetAtt<AttVisualOffset2Vo>(ATT_VISUALOFFSET2VO);
        assert(att);
        if (attrType == "startvo") {
            att->SetStartvo(att->StrToMeasurementsigned(attrValue));
            return true;
        }
        if (attrType == "endvo") {
            att->SetEndvo(att->StrToMeasurementsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_VOLTAGROUPINGSYM)) {
        AttVoltaGroupingSym *att = element->GetAtt<AttVoltaGroupingSym>(ATT_VOLTAGROUPINGSYM);
        assert(att);
        if (attrType == "voltasym") {
            att->SetVoltasym(att->StrToVoltaGroupingSymVoltasym(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_WHITESPACE)) {
        AttWhitespace *att = element->GetAtt<AttWhitespace>(ATT_WHITESPACE);
        assert(att);
        if (attrType == "xml:space") {
            att->SetSpace(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_WIDTH)) {
        AttWidth *att = element->GetAtt<AttWidth>(ATT_WIDTH);
        assert(att);
        if (attrType == "width") {
            att->SetWidth(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_XY)) {
        AttXy *att = element->GetAtt<AttXy>(ATT_XY);
        assert(att);
        if (attrType == "x") {
            att->SetX(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "y") {
            att->SetY(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_XY2)) {
        AttXy2 *att = element->GetAtt<AttXy2>(ATT_XY2);
        assert(att);
        if (attrType == "x2") {
            att->SetX2(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "y2") {
            att->SetY2(att->StrToDbl(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetShared(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_ACCIDLOG)) {
        const AttAccidLog *att = element->GetAtt<AttAccidLog>(ATT_ACCIDLOG);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->AccidLogFuncToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_ACCIDENTAL)) {
        const AttAccidental *att = element->GetAtt<AttAccidental>(ATT_ACCIDENTAL);
        assert(att);
        if (att->HasAccid()) {
            attributes->push_back({ "accid", att->AccidentalWrittenToStr(att->GetAccid()) });
        }
    }
    if (element->HasAttClass(ATT_ANNOTLOG)) {
        const AttAnnotLog *att = element->GetAtt<AttAnnotLog>(ATT_ANNOTLOG);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->StrToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_ARTICULATION)) {
        const AttArticulation *att = element->GetAtt<AttArticulation>(ATT_ARTICULATION);
        assert(att);
        if (att->HasArtic()) {
            attributes->push_back({ "artic", att->ArticulationListToStr(att->GetArtic()) });
        }
    }
    if (element->HasAttClass(ATT_ATTACCALOG)) {
        const AttAttaccaLog *att = element->GetAtt<AttAttaccaLog>(ATT_ATTACCALOG);
        assert(att);
        if (att->HasTarget()) {
            attributes->push_back({ "target", att->StrToStr(att->GetTarget()) });
        }
    }
    if (element->HasAttClass(ATT_AUDIENCE)) {
        const AttAudience *att = element->GetAtt<AttAudience>(ATT_AUDIENCE);
        assert(att);
        if (att->HasAudience()) {
            attributes->push_back({ "audience", att->AudienceAudienceToStr(att->GetAudience()) });
        }
    }
    if (element->HasAttClass(ATT_AUGMENTDOTS)) {
        const AttAugmentDots *att = element->GetAtt<AttAugmentDots>(ATT_AUGMENTDOTS);
        assert(att);
        if (att->HasDots()) {
            attributes->push_back({ "dots", att->IntToStr(att->GetDots()) });
        }
    }
    if (element->HasAttClass(ATT_AUTHORIZED)) {
        const AttAuthorized *att = element->GetAtt<AttAuthorized>(ATT_AUTHORIZED);
        assert(att);
        if (att->HasAuth()) {
            attributes->push_back({ "auth", att->StrToStr(att->GetAuth()) });
        }
        if (att->HasAuthUri()) {
            attributes->push_back({ "auth.uri", att->StrToStr(att->GetAuthUri()) });
        }
    }
    if (element->HasAttClass(ATT_BARLINELOG)) {
        const AttBarLineLog *att = element->GetAtt<AttBarLineLog>(ATT_BARLINELOG);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->BarrenditionToStr(att->GetForm()) });
        }
    }
    if (element->HasAttClass(ATT_BARRING)) {
        const AttBarring *att = element->GetAtt<AttBarring>(ATT_BARRING);
        assert(att);
        if (att->HasBarLen()) {
            attributes->push_back({ "bar.len", att->DblToStr(att->GetBarLen()) });
        }
        if (att->HasBarMethod()) {
            attributes->push_back({ "bar.method", att->BarmethodToStr(att->GetBarMethod()) });
        }
        if (att->HasBarPlace()) {
            attributes->push_back({ "bar.place", att->IntToStr(att->GetBarPlace()) });
        }
    }
    if (element->HasAttClass(ATT_BASIC)) {
        const AttBasic *att = element->GetAtt<AttBasic>(ATT_BASIC);
        assert(att);
        if (att->HasBase()) {
            attributes->push_back({ "xml:base", att->StrToStr(att->GetBase()) });
        }
    }
    if (element->HasAttClass(ATT_BIBL)) {
        const AttBibl *att = element->GetAtt<AttBibl>(ATT_BIBL);
        assert(att);
        if (att->HasAnalog()) {
            attributes->push_back({ "analog", att->StrToStr(att->GetAnalog()) });
        }
    }
    if (element->HasAttClass(ATT_CALENDARED)) {
        const AttCalendared *att = element->GetAtt<AttCalendared>(ATT_CALENDARED);
        assert(att);
        if (att->HasCalendar()) {
            attributes->push_back({ "calendar", att->StrToStr(att->GetCalendar()) });
        }
    }
    if (element->HasAttClass(ATT_CANONICAL)) {
        const AttCanonical *att = element->GetAtt<AttCanonical>(ATT_CANONICAL);
        assert(att);
        if (att->HasCodedval()) {
            attributes->push_back({ "codedval", att->StrToStr(att->GetCodedval()) });
        }
    }
    if (element->HasAttClass(ATT_CLASSED)) {
        const AttClassed *att = element->GetAtt<AttClassed>(ATT_CLASSED);
        assert(att);
        if (att->HasClass()) {
            attributes->push_back({ "class", att->StrToStr(att->GetClass()) });
        }
    }
    if (element->HasAttClass(ATT_CLEFLOG)) {
        const AttClefLog *att = element->GetAtt<AttClefLog>(ATT_CLEFLOG);
        assert(att);
        if (att->HasCautionary()) {
            attributes->push_back({ "cautionary", att->BooleanToStr(att->GetCautionary()) });
        }
    }
    if (element->HasAttClass(ATT_CLEFSHAPE)) {
        const AttClefShape *att = element->GetAtt<AttClefShape>(ATT_CLEFSHAPE);
        assert(att);
        if (att->HasShape()) {
            attributes->push_back({ "shape", att->ClefshapeToStr(att->GetShape()) });
        }
    }
    if (element->HasAttClass(ATT_CLEFFINGLOG)) {
        const AttCleffingLog *att = element->GetAtt<AttCleffingLog>(ATT_CLEFFINGLOG);
        assert(att);
        if (att->HasClefShape()) {
            attributes->push_back({ "clef.shape", att->ClefshapeToStr(att->GetClefShape()) });
        }
        if (att->HasClefLine()) {
            attributes->push_back({ "clef.line", att->IntToStr(att->GetClefLine()) });
        }
        if (att->HasClefDis()) {
            attributes->push_back({ "clef.dis", att->OctaveDisToStr(att->GetClefDis()) });
        }
        if (att->HasClefDisPlace()) {
            attributes->push_back({ "clef.dis.place", att->StaffrelBasicToStr(att->GetClefDisPlace()) });
        }
    }
    if (element->HasAttClass(ATT_COLOR)) {
        const AttColor *att = element->GetAtt<AttColor>(ATT_COLOR);
        assert(att);
        if (att->HasColor()) {
            attributes->push_back({ "color", att->StrToStr(att->GetColor()) });
        }
    }
    if (element->HasAttClass(ATT_COLORATION)) {
        const AttColoration *att = element->GetAtt<AttColoration>(ATT_COLORATION);
        assert(att);
        if (att->HasColored()) {
            attributes->push_back({ "colored", att->BooleanToStr(att->GetColored()) });
        }
    }
    if (element->HasAttClass(ATT_COORDX1)) {
        const AttCoordX1 *att = element->GetAtt<AttCoordX1>(ATT_COORDX1);
        assert(att);
        if (att->HasCoordX1()) {
            attributes->push_back({ "coord.x1", att->DblToStr(att->GetCoordX1()) });
        }
    }
    if (element->HasAttClass(ATT_COORDX2)) {
        const AttCoordX2 *att = element->GetAtt<AttCoordX2>(ATT_COORDX2);
        assert(att);
        if (att->HasCoordX2()) {
            attributes->push_back({ "coord.x2", att->DblToStr(att->GetCoordX2()) });
        }
    }
    if (element->HasAttClass(ATT_COORDY1)) {
        const AttCoordY1 *att = element->GetAtt<AttCoordY1>(ATT_COORDY1);
        assert(att);
        if (att->HasCoordY1()) {
            attributes->push_back({ "coord.y1", att->DblToStr(att->GetCoordY1()) });
        }
    }
    if (element->HasAttClass(ATT_COORDINATED)) {
        const AttCoordinated *att = element->GetAtt<AttCoordinated>(ATT_COORDINATED);
        assert(att);
        if (att->HasLrx()) {
            attributes->push_back({ "lrx", att->IntToStr(att->GetLrx()) });
        }
        if (att->HasLry()) {
            attributes->push_back({ "lry", att->IntToStr(att->GetLry()) });
        }
        if (att->HasRotate()) {
            attributes->push_back({ "rotate", att->DegreesToStr(att->GetRotate()) });
        }
    }
    if (element->HasAttClass(ATT_COORDINATEDUL)) {
        const AttCoordinatedUl *att = element->GetAtt<AttCoordinatedUl>(ATT_COORDINATEDUL);
        assert(att);
        if (att->HasUlx()) {
            attributes->push_back({ "ulx", att->IntToStr(att->GetUlx()) });
        }
        if (att->HasUly()) {
            attributes->push_back({ "uly", att->IntToStr(att->GetUly()) });
        }
    }
    if (element->HasAttClass(ATT_CUE)) {
        const AttCue *att = element->GetAtt<AttCue>(ATT_CUE);
        assert(att);
        if (att->HasCue()) {
            attributes->push_back({ "cue", att->BooleanToStr(att->GetCue()) });
        }
    }
    if (element->HasAttClass(ATT_CURVATURE)) {
        const AttCurvature *att = element->GetAtt<AttCurvature>(ATT_CURVATURE);
        assert(att);
        if (att->HasBezier()) {
            attributes->push_back({ "bezier", att->StrToStr(att->GetBezier()) });
        }
        if (att->HasBulge()) {
            attributes->push_back({ "bulge", att->BulgeToStr(att->GetBulge()) });
        }
        if (att->HasCurvedir()) {
            attributes->push_back({ "curvedir", att->CurvatureCurvedirToStr(att->GetCurvedir()) });
        }
    }
    if (element->HasAttClass(ATT_CUSTOSLOG)) {
        const AttCustosLog *att = element->GetAtt<AttCustosLog>(ATT_CUSTOSLOG);
        assert(att);
        if (att->HasTarget()) {
            attributes->push_back({ "target", att->StrToStr(att->GetTarget()) });
        }
    }
    if (element->HasAttClass(ATT_DATAPOINTING)) {
        const AttDataPointing *att = element->GetAtt<AttDataPointing>(ATT_DATAPOINTING);
        assert(att);
        if (att->HasData()) {
            attributes->push_back({ "data", att->StrToStr(att->GetData()) });
        }
    }
    if (element->HasAttClass(ATT_DATASELECTING)) {
        const AttDataSelecting *att = element->GetAtt<AttDataSelecting>(ATT_DATASELECTING);
        assert(att);
        if (att->HasSelect()) {
            attributes->push_back({ "select", att->StrToStr(att->GetSelect()) });
        }
    }
    if (element->HasAttClass(ATT_DATABLE)) {
        const AttDatable *att = element->GetAtt<AttDatable>(ATT_DATABLE);
        assert(att);
        if (att->HasEnddate()) {
            attributes->push_back({ "enddate", att->StrToStr(att->GetEnddate()) });
        }
        if (att->HasIsodate()) {
            attributes->push_back({ "isodate", att->StrToStr(att->GetIsodate()) });
        }
        if (att->HasNotafter()) {
            attributes->push_back({ "notafter", att->StrToStr(att->GetNotafter()) });
        }
        if (att->HasNotbefore()) {
            attributes->push_back({ "notbefore", att->StrToStr(att->GetNotbefore()) });
        }
        if (att->HasStartdate()) {
            attributes->push_back({ "startdate", att->StrToStr(att->GetStartdate()) });
        }
    }
    if (element->HasAttClass(ATT_DISTANCES)) {
        const AttDistances *att = element->GetAtt<AttDistances>(ATT_DISTANCES);
        assert(att);
        if (att->HasDirDist()) {
            attributes->push_back({ "dir.dist", att->MeasurementsignedToStr(att->GetDirDist()) });
        }
        if (att->HasDynamDist()) {
            attributes->push_back({ "dynam.dist", att->MeasurementsignedToStr(att->GetDynamDist()) });
        }
        if (att->HasHarmDist()) {
            attributes->push_back({ "harm.dist", att->MeasurementsignedToStr(att->GetHarmDist()) });
        }
        if (att->HasRehDist()) {
            attributes->push_back({ "reh.dist", att->MeasurementsignedToStr(att->GetRehDist()) });
        }
        if (att->HasTempoDist()) {
            attributes->push_back({ "tempo.dist", att->MeasurementsignedToStr(att->GetTempoDist()) });
        }
    }
    if (element->HasAttClass(ATT_DOCSTATUS)) {
        const AttDocStatus *att = element->GetAtt<AttDocStatus>(ATT_DOCSTATUS);
        assert(att);
        if (att->HasStatus()) {
            attributes->push_back({ "status", att->StrToStr(att->GetStatus()) });
        }
    }
    if (element->HasAttClass(ATT_DOTLOG)) {
        const AttDotLog *att = element->GetAtt<AttDotLog>(ATT_DOTLOG);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->DotLogFormToStr(att->GetForm()) });
        }
    }
    if (element->HasAttClass(ATT_DURATIONADDITIVE)) {
        const AttDurationAdditive *att = element->GetAtt<AttDurationAdditive>(ATT_DURATIONADDITIVE);
        assert(att);
        if (att->HasDur()) {
            attributes->push_back({ "dur", att->DurationToStr(att->GetDur()) });
        }
    }
    if (element->HasAttClass(ATT_DURATIONDEFAULT)) {
        const AttDurationDefault *att = element->GetAtt<AttDurationDefault>(ATT_DURATIONDEFAULT);
        assert(att);
        if (att->HasDurDefault()) {
            attributes->push_back({ "dur.default", att->DurationToStr(att->GetDurDefault()) });
        }
        if (att->HasNumDefault()) {
            attributes->push_back({ "num.default", att->IntToStr(att->GetNumDefault()) });
        }
        if (att->HasNumbaseDefault()) {
            attributes->push_back({ "numbase.default", att->IntToStr(att->GetNumbaseDefault()) });
        }
    }
    if (element->HasAttClass(ATT_DURATIONLOG)) {
        const AttDurationLog *att = element->GetAtt<AttDurationLog>(ATT_DURATIONLOG);
        assert(att);
        if (att->HasDur()) {
            attributes->push_back({ "dur", att->DurationToStr(att->GetDur()) });
        }
    }
    if (element->HasAttClass(ATT_DURATIONRATIO)) {
        const AttDurationRatio *att = element->GetAtt<AttDurationRatio>(ATT_DURATIONRATIO);
        assert(att);
        if (att->HasNum()) {
            attributes->push_back({ "num", att->IntToStr(att->GetNum()) });
        }
        if (att->HasNumbase()) {
            attributes->push_back({ "numbase", att->IntToStr(att->GetNumbase()) });
        }
    }
    if (element->HasAttClass(ATT_ENCLOSINGCHARS)) {
        const AttEnclosingChars *att = element->GetAtt<AttEnclosingChars>(ATT_ENCLOSINGCHARS);
        assert(att);
        if (att->HasEnclose()) {
            attributes->push_back({ "enclose", att->EnclosureToStr(att->GetEnclose()) });
        }
    }
    if (element->HasAttClass(ATT_ENDINGS)) {
        const AttEndings *att = element->GetAtt<AttEndings>(ATT_ENDINGS);
        assert(att);
        if (att->HasEndingRend()) {
            attributes->push_back({ "ending.rend", att->EndingsEndingrendToStr(att->GetEndingRend()) });
        }
    }
    if (element->HasAttClass(ATT_EVIDENCE)) {
        const AttEvidence *att = element->GetAtt<AttEvidence>(ATT_EVIDENCE);
        assert(att);
        if (att->HasCert()) {
            attributes->push_back({ "cert", att->CertaintyToStr(att->GetCert()) });
        }
        if (att->HasEvidence()) {
            attributes->push_back({ "evidence", att->StrToStr(att->GetEvidence()) });
        }
    }
    if (element->HasAttClass(ATT_EXTENDER)) {
        const AttExtender *att = element->GetAtt<AttExtender>(ATT_EXTENDER);
        assert(att);
        if (att->HasExtender()) {
            attributes->push_back({ "extender", att->BooleanToStr(att->GetExtender()) });
        }
    }
    if (element->HasAttClass(ATT_EXTENT)) {
        const AttExtent *att = element->GetAtt<AttExtent>(ATT_EXTENT);
        assert(att);
        if (att->HasExtent()) {
            attributes->push_back({ "extent", att->StrToStr(att->GetExtent()) });
        }
    }
    if (element->HasAttClass(ATT_FERMATAPRESENT)) {
        const AttFermataPresent *att = element->GetAtt<AttFermataPresent>(ATT_FERMATAPRESENT);
        assert(att);
        if (att->HasFermata()) {
            attributes->push_back({ "fermata", att->StaffrelBasicToStr(att->GetFermata()) });
        }
    }
    if (element->HasAttClass(ATT_FILING)) {
        const AttFiling *att = element->GetAtt<AttFiling>(ATT_FILING);
        assert(att);
        if (att->HasNonfiling()) {
            attributes->push_back({ "nonfiling", att->IntToStr(att->GetNonfiling()) });
        }
    }
    if (element->HasAttClass(ATT_FORMEWORK)) {
        const AttFormework *att = element->GetAtt<AttFormework>(ATT_FORMEWORK);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->PgfuncToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_GRPSYMLOG)) {
        const AttGrpSymLog *att = element->GetAtt<AttGrpSymLog>(ATT_GRPSYMLOG);
        assert(att);
        if (att->HasLevel()) {
            attributes->push_back({ "level", att->IntToStr(att->GetLevel()) });
        }
    }
    if (element->HasAttClass(ATT_HANDIDENT)) {
        const AttHandIdent *att = element->GetAtt<AttHandIdent>(ATT_HANDIDENT);
        assert(att);
        if (att->HasHand()) {
            attributes->push_back({ "hand", att->StrToStr(att->GetHand()) });
        }
    }
    if (element->HasAttClass(ATT_HEIGHT)) {
        const AttHeight *att = element->GetAtt<AttHeight>(ATT_HEIGHT);
        assert(att);
        if (att->HasHeight()) {
            attributes->push_back({ "height", att->MeasurementunsignedToStr(att->GetHeight()) });
        }
    }
    if (element->HasAttClass(ATT_HORIZONTALALIGN)) {
        const AttHorizontalAlign *att = element->GetAtt<AttHorizontalAlign>(ATT_HORIZONTALALIGN);
        assert(att);
        if (att->HasHalign()) {
            attributes->push_back({ "halign", att->HorizontalalignmentToStr(att->GetHalign()) });
        }
    }
    if (element->HasAttClass(ATT_INTERNETMEDIA)) {
        const AttInternetMedia *att = element->GetAtt<AttInternetMedia>(ATT_INTERNETMEDIA);
        assert(att);
        if (att->HasMimetype()) {
            attributes->push_back({ "mimetype", att->StrToStr(att->GetMimetype()) });
        }
    }
    if (element->HasAttClass(ATT_JOINED)) {
        const AttJoined *att = element->GetAtt<AttJoined>(ATT_JOINED);
        assert(att);
        if (att->HasJoin()) {
            attributes->push_back({ "join", att->StrToStr(att->GetJoin()) });
        }
    }
    if (element->HasAttClass(ATT_KEYSIGLOG)) {
        const AttKeySigLog *att = element->GetAtt<AttKeySigLog>(ATT_KEYSIGLOG);
        assert(att);
        if (att->HasSig()) {
            attributes->push_back({ "sig", att->KeysignatureToStr(att->GetSig()) });
        }
    }
    if (element->HasAttClass(ATT_KEYSIGDEFAULTLOG)) {
        const AttKeySigDefaultLog *att = element->GetAtt<AttKeySigDefaultLog>(ATT_KEYSIGDEFAULTLOG);
        assert(att);
        if (att->HasKeysig()) {
            attributes->push_back({ "keysig", att->KeysignatureToStr(att->GetKeysig()) });
        }
    }
    if (element->HasAttClass(ATT_LABELLED)) {
        const AttLabelled *att = element->GetAtt<AttLabelled>(ATT_LABELLED);
        assert(att);
        if (att->HasLabel()) {
            attributes->push_back({ "label", att->StrToStr(att->GetLabel()) });
        }
    }
    if (element->HasAttClass(ATT_LANG)) {
        const AttLang *att = element->GetAtt<AttLang>(ATT_LANG);
        assert(att);
        if (att->HasLang()) {
            attributes->push_back({ "xml:lang", att->StrToStr(att->GetLang()) });
        }
        if (att->HasTranslit()) {
            attributes->push_back({ "translit", att->StrToStr(att->GetTranslit()) });
        }
    }
    if (element->HasAttClass(ATT_LAYERLOG)) {
        const AttLayerLog *att = element->GetAtt<AttLayerLog>(ATT_LAYERLOG);
        assert(att);
        if (att->HasDef()) {
            attributes->push_back({ "def", att->StrToStr(att->GetDef()) });
        }
    }
    if (element->HasAttClass(ATT_LAYERIDENT)) {
        const AttLayerIdent *att = element->GetAtt<AttLayerIdent>(ATT_LAYERIDENT);
        assert(att);
        if (att->HasLayer()) {
            attributes->push_back({ "layer", att->IntToStr(att->GetLayer()) });
        }
    }
    if (element->HasAttClass(ATT_LINELOC)) {
        const AttLineLoc *att = element->GetAtt<AttLineLoc>(ATT_LINELOC);
        assert(att);
        if (att->HasLine()) {
            attributes->push_back({ "line", att->IntToStr(att->GetLine()) });
        }
    }
    if (element->HasAttClass(ATT_LINEREND)) {
        const AttLineRend *att = element->GetAtt<AttLineRend>(ATT_LINEREND);
        assert(att);
        if (att->HasLendsym()) {
            attributes->push_back({ "lendsym", att->LinestartendsymbolToStr(att->GetLendsym()) });
        }
        if (att->HasLendsymSize()) {
            attributes->push_back({ "lendsym.size", att->IntToStr(att->GetLendsymSize()) });
        }
        if (att->HasLstartsym()) {
            attributes->push_back({ "lstartsym", att->LinestartendsymbolToStr(att->GetLstartsym()) });
        }
        if (att->HasLstartsymSize()) {
            attributes->push_back({ "lstartsym.size", att->IntToStr(att->GetLstartsymSize()) });
        }
    }
    if (element->HasAttClass(ATT_LINERENDBASE)) {
        const AttLineRendBase *att = element->GetAtt<AttLineRendBase>(ATT_LINERENDBASE);
        assert(att);
        if (att->HasLform()) {
            attributes->push_back({ "lform", att->LineformToStr(att->GetLform()) });
        }
        if (att->HasLwidth()) {
            attributes->push_back({ "lwidth", att->LinewidthToStr(att->GetLwidth()) });
        }
        if (att->HasLsegs()) {
            attributes->push_back({ "lsegs", att->IntToStr(att->GetLsegs()) });
        }
    }
    if (element->HasAttClass(ATT_LINKING)) {
        const AttLinking *att = element->GetAtt<AttLinking>(ATT_LINKING);
        assert(att);
        if (att->HasCopyof()) {
            attributes->push_back({ "copyof", att->StrToStr(att->GetCopyof()) });
        }
        if (att->HasCorresp()) {
            attributes->push_back({ "corresp", att->StrToStr(att->GetCorresp()) });
        }
        if (att->HasFollows()) {
            attributes->push_back({ "follows", att->StrToStr(att->GetFollows()) });
        }
        if (att->HasNext()) {
            attributes->push_back({ "next", att->StrToStr(att->GetNext()) });
        }
        if (att->HasPrecedes()) {
            attributes->push_back({ "precedes", att->StrToStr(att->GetPrecedes()) });
        }
        if (att->HasPrev()) {
            attributes->push_back({ "prev", att->StrToStr(att->GetPrev()) });
        }
        if (att->HasSameas()) {
            attributes->push_back({ "sameas", att->StrToStr(att->GetSameas()) });
        }
        if (att->HasSynch()) {
            attributes->push_back({ "synch", att->StrToStr(att->GetSynch()) });
        }
    }
    if (element->HasAttClass(ATT_LYRICSTYLE)) {
        const AttLyricStyle *att = element->GetAtt<AttLyricStyle>(ATT_LYRICSTYLE);
        assert(att);
        if (att->HasLyricAlign()) {
            attributes->push_back({ "lyric.align", att->MeasurementsignedToStr(att->GetLyricAlign()) });
        }
        if (att->HasLyricFam()) {
            attributes->push_back({ "lyric.fam", att->StrToStr(att->GetLyricFam()) });
        }
        if (att->HasLyricName()) {
            attributes->push_back({ "lyric.name", att->StrToStr(att->GetLyricName()) });
        }
        if (att->HasLyricSize()) {
            attributes->push_back({ "lyric.size", att->FontsizeToStr(att->GetLyricSize()) });
        }
        if (att->HasLyricStyle()) {
            attributes->push_back({ "lyric.style", att->FontstyleToStr(att->GetLyricStyle()) });
        }
        if (att->HasLyricWeight()) {
            attributes->push_back({ "lyric.weight", att->FontweightToStr(att->GetLyricWeight()) });
        }
    }
    if (element->HasAttClass(ATT_MEASURENUMBERS)) {
        const AttMeasureNumbers *att = element->GetAtt<AttMeasureNumbers>(ATT_MEASURENUMBERS);
        assert(att);
        if (att->HasMnumVisible()) {
            attributes->push_back({ "mnum.visible", att->BooleanToStr(att->GetMnumVisible()) });
        }
    }
    if (element->HasAttClass(ATT_MEASUREMENT)) {
        const AttMeasurement *att = element->GetAtt<AttMeasurement>(ATT_MEASUREMENT);
        assert(att);
        if (att->HasUnit()) {
            attributes->push_back({ "unit", att->StrToStr(att->GetUnit()) });
        }
    }
    if (element->HasAttClass(ATT_MEDIABOUNDS)) {
        const AttMediaBounds *att = element->GetAtt<AttMediaBounds>(ATT_MEDIABOUNDS);
        assert(att);
        if (att->HasBegin()) {
            attributes->push_back({ "begin", att->StrToStr(att->GetBegin()) });
        }
        if (att->HasEnd()) {
            attributes->push_back({ "end", att->StrToStr(att->GetEnd()) });
        }
        if (att->HasBetype()) {
            attributes->push_back({ "betype", att->BetypeToStr(att->GetBetype()) });
        }
    }
    if (element->HasAttClass(ATT_MEDIUM)) {
        const AttMedium *att = element->GetAtt<AttMedium>(ATT_MEDIUM);
        assert(att);
        if (att->HasMedium()) {
            attributes->push_back({ "medium", att->StrToStr(att->GetMedium()) });
        }
    }
    if (element->HasAttClass(ATT_MEIVERSION)) {
        const AttMeiVersion *att = element->GetAtt<AttMeiVersion>(ATT_MEIVERSION);
        assert(att);
        if (att->HasMeiversion()) {
            attributes->push_back({ "meiversion", att->MeiVersionMeiversionToStr(att->GetMeiversion()) });
        }
    }
    if (element->HasAttClass(ATT_MENSURLOG)) {
        const AttMensurLog *att = element->GetAtt<AttMensurLog>(ATT_MENSURLOG);
        assert(att);
        if (att->HasLevel()) {
            attributes->push_back({ "level", att->DurationToStr(att->GetLevel()) });
        }
    }
    if (element->HasAttClass(ATT_METADATAPOINTING)) {
        const AttMetadataPointing *att = element->GetAtt<AttMetadataPointing>(ATT_METADATAPOINTING);
        assert(att);
        if (att->HasDecls()) {
            attributes->push_back({ "decls", att->StrToStr(att->GetDecls()) });
        }
    }
    if (element->HasAttClass(ATT_METERCONFORMANCE)) {
        const AttMeterConformance *att = element->GetAtt<AttMeterConformance>(ATT_METERCONFORMANCE);
        assert(att);
        if (att->HasMetcon()) {
            attributes->push_back({ "metcon", att->MeterConformanceMetconToStr(att->GetMetcon()) });
        }
    }
    if (element->HasAttClass(ATT_METERCONFORMANCEBAR)) {
        const AttMeterConformanceBar *att = element->GetAtt<AttMeterConformanceBar>(ATT_METERCONFORMANCEBAR);
        assert(att);
        if (att->HasMetcon()) {
            attributes->push_back({ "metcon", att->BooleanToStr(att->GetMetcon()) });
        }
        if (att->HasControl()) {
            attributes->push_back({ "control", att->BooleanToStr(att->GetControl()) });
        }
    }
    if (element->HasAttClass(ATT_METERSIGLOG)) {
        const AttMeterSigLog *att = element->GetAtt<AttMeterSigLog>(ATT_METERSIGLOG);
        assert(att);
        if (att->HasCount()) {
            attributes->push_back({ "count", att->MetercountPairToStr(att->GetCount()) });
        }
        if (att->HasSym()) {
            attributes->push_back({ "sym", att->MetersignToStr(att->GetSym()) });
        }
        if (att->HasUnit()) {
            attributes->push_back({ "unit", att->IntToStr(att->GetUnit()) });
        }
    }
    if (element->HasAttClass(ATT_METERSIGDEFAULTLOG)) {
        const AttMeterSigDefaultLog *att = element->GetAtt<AttMeterSigDefaultLog>(ATT_METERSIGDEFAULTLOG);
        assert(att);
        if (att->HasMeterCount()) {
            attributes->push_back({ "meter.count", att->MetercountPairToStr(att->GetMeterCount()) });
        }
        if (att->HasMeterUnit()) {
            attributes->push_back({ "meter.unit", att->IntToStr(att->GetMeterUnit()) });
        }
        if (att->HasMeterSym()) {
            attributes->push_back({ "meter.sym", att->MetersignToStr(att->GetMeterSym()) });
        }
    }
    if (element->HasAttClass(ATT_MMTEMPO)) {
        const AttMmTempo *att = element->GetAtt<AttMmTempo>(ATT_MMTEMPO);
        assert(att);
        if (att->HasMm()) {
            attributes->push_back({ "mm", att->DblToStr(att->GetMm()) });
        }
        if (att->HasMmUnit()) {
            attributes->push_back({ "mm.unit", att->DurationToStr(att->GetMmUnit()) });
        }
        if (att->HasMmDots()) {
            attributes->push_back({ "mm.dots", att->IntToStr(att->GetMmDots()) });
        }
    }
    if (element->HasAttClass(ATT_MULTINUMMEASURES)) {
        const AttMultinumMeasures *att = element->GetAtt<AttMultinumMeasures>(ATT_MULTINUMMEASURES);
        assert(att);
        if (att->HasMultiNumber()) {
            attributes->push_back({ "multi.number", att->BooleanToStr(att->GetMultiNumber()) });
        }
    }
    if (element->HasAttClass(ATT_NINTEGER)) {
        const AttNInteger *att = element->GetAtt<AttNInteger>(ATT_NINTEGER);
        assert(att);
        if (att->HasN()) {
            attributes->push_back({ "n", att->IntToStr(att->GetN()) });
        }
    }
    if (element->HasAttClass(ATT_NNUMBERLIKE)) {
        const AttNNumberLike *att = element->GetAtt<AttNNumberLike>(ATT_NNUMBERLIKE);
        assert(att);
        if (att->HasN()) {
            attributes->push_back({ "n", att->StrToStr(att->GetN()) });
        }
    }
    if (element->HasAttClass(ATT_NAME)) {
        const AttName *att = element->GetAtt<AttName>(ATT_NAME);
        assert(att);
        if (att->HasNymref()) {
            attributes->push_back({ "nymref", att->StrToStr(att->GetNymref()) });
        }
        if (att->HasRole()) {
            attributes->push_back({ "role", att->RelatorsToStr(att->GetRole()) });
        }
    }
    if (element->HasAttClass(ATT_NOTATIONSTYLE)) {
        const AttNotationStyle *att = element->GetAtt<AttNotationStyle>(ATT_NOTATIONSTYLE);
        assert(att);
        if (att->HasMusicName()) {
            attributes->push_back({ "music.name", att->StrToStr(att->GetMusicName()) });
        }
        if (att->HasMusicSize()) {
            attributes->push_back({ "music.size", att->FontsizeToStr(att->GetMusicSize()) });
        }
    }
    if (element->HasAttClass(ATT_NOTEHEADS)) {
        const AttNoteHeads *att = element->GetAtt<AttNoteHeads>(ATT_NOTEHEADS);
        assert(att);
        if (att->HasHeadAltsym()) {
            attributes->push_back({ "head.altsym", att->StrToStr(att->GetHeadAltsym()) });
        }
        if (att->HasHeadAuth()) {
            attributes->push_back({ "head.auth", att->StrToStr(att->GetHeadAuth()) });
        }
        if (att->HasHeadColor()) {
            attributes->push_back({ "head.color", att->StrToStr(att->GetHeadColor()) });
        }
        if (att->HasHeadFill()) {
            attributes->push_back({ "head.fill", att->FillToStr(att->GetHeadFill()) });
        }
        if (att->HasHeadFillcolor()) {
            attributes->push_back({ "head.fillcolor", att->StrToStr(att->GetHeadFillcolor()) });
        }
        if (att->HasHeadMod()) {
            attributes->push_back({ "head.mod", att->NoteheadmodifierToStr(att->GetHeadMod()) });
        }
        if (att->HasHeadRotation()) {
            attributes->push_back({ "head.rotation", att->RotationToStr(att->GetHeadRotation()) });
        }
        if (att->HasHeadShape()) {
            attributes->push_back({ "head.shape", att->HeadshapeToStr(att->GetHeadShape()) });
        }
        if (att->HasHeadVisible()) {
            attributes->push_back({ "head.visible", att->BooleanToStr(att->GetHeadVisible()) });
        }
    }
    if (element->HasAttClass(ATT_OCTAVE)) {
        const AttOctave *att = element->GetAtt<AttOctave>(ATT_OCTAVE);
        assert(att);
        if (att->HasOct()) {
            attributes->push_back({ "oct", att->OctaveToStr(att->GetOct()) });
        }
    }
    if (element->HasAttClass(ATT_OCTAVEDEFAULT)) {
        const AttOctaveDefault *att = element->GetAtt<AttOctaveDefault>(ATT_OCTAVEDEFAULT);
        assert(att);
        if (att->HasOctDefault()) {
            attributes->push_back({ "oct.default", att->OctaveToStr(att->GetOctDefault()) });
        }
    }
    if (element->HasAttClass(ATT_OCTAVEDISPLACEMENT)) {
        const AttOctaveDisplacement *att = element->GetAtt<AttOctaveDisplacement>(ATT_OCTAVEDISPLACEMENT);
        assert(att);
        if (att->HasDis()) {
            attributes->push_back({ "dis", att->OctaveDisToStr(att->GetDis()) });
        }
        if (att->HasDisPlace()) {
            attributes->push_back({ "dis.place", att->StaffrelBasicToStr(att->GetDisPlace()) });
        }
    }
    if (element->HasAttClass(ATT_ONELINESTAFF)) {
        const AttOneLineStaff *att = element->GetAtt<AttOneLineStaff>(ATT_ONELINESTAFF);
        assert(att);
        if (att->HasOntheline()) {
            attributes->push_back({ "ontheline", att->BooleanToStr(att->GetOntheline()) });
        }
    }
    if (element->HasAttClass(ATT_OPTIMIZATION)) {
        const AttOptimization *att = element->GetAtt<AttOptimization>(ATT_OPTIMIZATION);
        assert(att);
        if (att->HasOptimize()) {
            attributes->push_back({ "optimize", att->BooleanToStr(att->GetOptimize()) });
        }
    }
    if (element->HasAttClass(ATT_ORIGINLAYERIDENT)) {
        const AttOriginLayerIdent *att = element->GetAtt<AttOriginLayerIdent>(ATT_ORIGINLAYERIDENT);
        assert(att);
        if (att->HasOriginLayer()) {
            attributes->push_back({ "origin.layer", att->StrToStr(att->GetOriginLayer()) });
        }
    }
    if (element->HasAttClass(ATT_ORIGINSTAFFIDENT)) {
        const AttOriginStaffIdent *att = element->GetAtt<AttOriginStaffIdent>(ATT_ORIGINSTAFFIDENT);
        assert(att);
        if (att->HasOriginStaff()) {
            attributes->push_back({ "origin.staff", att->StrToStr(att->GetOriginStaff()) });
        }
    }
    if (element->HasAttClass(ATT_ORIGINSTARTENDID)) {
        const AttOriginStartEndId *att = element->GetAtt<AttOriginStartEndId>(ATT_ORIGINSTARTENDID);
        assert(att);
        if (att->HasOriginStartid()) {
            attributes->push_back({ "origin.startid", att->StrToStr(att->GetOriginStartid()) });
        }
        if (att->HasOriginEndid()) {
            attributes->push_back({ "origin.endid", att->StrToStr(att->GetOriginEndid()) });
        }
    }
    if (element->HasAttClass(ATT_ORIGINTIMESTAMPLOG)) {
        const AttOriginTimestampLog *att = element->GetAtt<AttOriginTimestampLog>(ATT_ORIGINTIMESTAMPLOG);
        assert(att);
        if (att->HasOriginTstamp()) {
            attributes->push_back({ "origin.tstamp", att->MeasurebeatToStr(att->GetOriginTstamp()) });
        }
        if (att->HasOriginTstamp2()) {
            attributes->push_back({ "origin.tstamp2", att->MeasurebeatToStr(att->GetOriginTstamp2()) });
        }
    }
    if (element->HasAttClass(ATT_PAGES)) {
        const AttPages *att = element->GetAtt<AttPages>(ATT_PAGES);
        assert(att);
        if (att->HasPageHeight()) {
            attributes->push_back({ "page.height", att->MeasurementunsignedToStr(att->GetPageHeight()) });
        }
        if (att->HasPageWidth()) {
            attributes->push_back({ "page.width", att->MeasurementunsignedToStr(att->GetPageWidth()) });
        }
        if (att->HasPageTopmar()) {
            attributes->push_back({ "page.topmar", att->MeasurementunsignedToStr(att->GetPageTopmar()) });
        }
        if (att->HasPageBotmar()) {
            attributes->push_back({ "page.botmar", att->MeasurementunsignedToStr(att->GetPageBotmar()) });
        }
        if (att->HasPageLeftmar()) {
            attributes->push_back({ "page.leftmar", att->MeasurementunsignedToStr(att->GetPageLeftmar()) });
        }
        if (att->HasPageRightmar()) {
            attributes->push_back({ "page.rightmar", att->MeasurementunsignedToStr(att->GetPageRightmar()) });
        }
        if (att->HasPagePanels()) {
            attributes->push_back({ "page.panels", att->StrToStr(att->GetPagePanels()) });
        }
        if (att->HasPageScale()) {
            attributes->push_back({ "page.scale", att->StrToStr(att->GetPageScale()) });
        }
    }
    if (element->HasAttClass(ATT_PARTIDENT)) {
        const AttPartIdent *att = element->GetAtt<AttPartIdent>(ATT_PARTIDENT);
        assert(att);
        if (att->HasPart()) {
            attributes->push_back({ "part", att->StrToStr(att->GetPart()) });
        }
        if (att->HasPartstaff()) {
            attributes->push_back({ "partstaff", att->StrToStr(att->GetPartstaff()) });
        }
    }
    if (element->HasAttClass(ATT_PITCH)) {
        const AttPitch *att = element->GetAtt<AttPitch>(ATT_PITCH);
        assert(att);
        if (att->HasPname()) {
            attributes->push_back({ "pname", att->PitchnameToStr(att->GetPname()) });
        }
    }
    if (element->HasAttClass(ATT_PLACEMENTONSTAFF)) {
        const AttPlacementOnStaff *att = element->GetAtt<AttPlacementOnStaff>(ATT_PLACEMENTONSTAFF);
        assert(att);
        if (att->HasOnstaff()) {
            attributes->push_back({ "onstaff", att->BooleanToStr(att->GetOnstaff()) });
        }
    }
    if (element->HasAttClass(ATT_PLACEMENTRELEVENT)) {
        const AttPlacementRelEvent *att = element->GetAtt<AttPlacementRelEvent>(ATT_PLACEMENTRELEVENT);
        assert(att);
        if (att->HasPlace()) {
            attributes->push_back({ "place", att->StaffrelToStr(att->GetPlace()) });
        }
    }
    if (element->HasAttClass(ATT_PLACEMENTRELSTAFF)) {
        const AttPlacementRelStaff *att = element->GetAtt<AttPlacementRelStaff>(ATT_PLACEMENTRELSTAFF);
        assert(att);
        if (att->HasPlace()) {
            attributes->push_back({ "place", att->StaffrelToStr(att->GetPlace()) });
        }
    }
    if (element->HasAttClass(ATT_PLIST)) {
        const AttPlist *att = element->GetAtt<AttPlist>(ATT_PLIST);
        assert(att);
        if (att->HasPlist()) {
            attributes->push_back({ "plist", att->XsdAnyURIListToStr(att->GetPlist()) });
        }
    }
    if (element->HasAttClass(ATT_POINTING)) {
        const AttPointing *att = element->GetAtt<AttPointing>(ATT_POINTING);
        assert(att);
        if (att->HasActuate()) {
            attributes->push_back({ "xlink:actuate", att->StrToStr(att->GetActuate()) });
        }
        if (att->HasRole()) {
            attributes->push_back({ "xlink:role", att->StrToStr(att->GetRole()) });
        }
        if (att->HasShow()) {
            attributes->push_back({ "xlink:show", att->StrToStr(att->GetShow()) });
        }
        if (att->HasTarget()) {
            attributes->push_back({ "target", att->StrToStr(att->GetTarget()) });
        }
        if (att->HasTargettype()) {
            attributes->push_back({ "targettype", att->StrToStr(att->GetTargettype()) });
        }
    }
    if (element->HasAttClass(ATT_QUANTITY)) {
        const AttQuantity *att = element->GetAtt<AttQuantity>(ATT_QUANTITY);
        assert(att);
        if (att->HasQuantity()) {
            attributes->push_back({ "quantity", att->DblToStr(att->GetQuantity()) });
        }
    }
    if (element->HasAttClass(ATT_RANGING)) {
        const AttRanging *att = element->GetAtt<AttRanging>(ATT_RANGING);
        assert(att);
        if (att->HasAtleast()) {
            attributes->push_back({ "atleast", att->DblToStr(att->GetAtleast()) });
        }
        if (att->HasAtmost()) {
            attributes->push_back({ "atmost", att->DblToStr(att->GetAtmost()) });
        }
        if (att->HasMin()) {
            attributes->push_back({ "min", att->DblToStr(att->GetMin()) });
        }
        if (att->HasMax()) {
            attributes->push_back({ "max", att->DblToStr(att->GetMax()) });
        }
        if (att->HasConfidence()) {
            attributes->push_back({ "confidence", att->DblToStr(att->GetConfidence()) });
        }
    }
    if (element->HasAttClass(ATT_REPEATMARKLOG)) {
        const AttRepeatMarkLog *att = element->GetAtt<AttRepeatMarkLog>(ATT_REPEATMARKLOG);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->RepeatMarkLogFuncToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_RESPONSIBILITY)) {
        const AttResponsibility *att = element->GetAtt<AttResponsibility>(ATT_RESPONSIBILITY);
        assert(att);
        if (att->HasResp()) {
            attributes->push_back({ "resp", att->StrToStr(att->GetResp()) });
        }
    }
    if (element->HasAttClass(ATT_RESTDURATIONLOG)) {
        const AttRestdurationLog *att = element->GetAtt<AttRestdurationLog>(ATT_RESTDURATIONLOG);
        assert(att);
        if (att->HasDur()) {
            attributes->push_back({ "dur", att->DurationToStr(att->GetDur()) });
        }
    }
    if (element->HasAttClass(ATT_SCALABLE)) {
        const AttScalable *att = element->GetAtt<AttScalable>(ATT_SCALABLE);
        assert(att);
        if (att->HasScale()) {
            attributes->push_back({ "scale", att->PercentToStr(att->GetScale()) });
        }
    }
    if (element->HasAttClass(ATT_SEQUENCE)) {
        const AttSequence *att = element->GetAtt<AttSequence>(ATT_SEQUENCE);
        assert(att);
        if (att->HasSeq()) {
            attributes->push_back({ "seq", att->IntToStr(att->GetSeq()) });
        }
    }
    if (element->HasAttClass(ATT_SLASHCOUNT)) {
        const AttSlashCount *att = element->GetAtt<AttSlashCount>(ATT_SLASHCOUNT);
        assert(att);
        if (att->HasSlash()) {
            attributes->push_back({ "slash", att->IntToStr(att->GetSlash()) });
        }
    }
    if (element->HasAttClass(ATT_SLURPRESENT)) {
        const AttSlurPresent *att = element->GetAtt<AttSlurPresent>(ATT_SLURPRESENT);
        assert(att);
        if (att->HasSlur()) {
            attributes->push_back({ "slur", att->StrToStr(att->GetSlur()) });
        }
    }
    if (element->HasAttClass(ATT_SOURCE)) {
        const AttSource *att = element->GetAtt<AttSource>(ATT_SOURCE);
        assert(att);
        if (att->HasSource()) {
            attributes->push_back({ "source", att->StrToStr(att->GetSource()) });
        }
    }
    if (element->HasAttClass(ATT_SPACING)) {
        const AttSpacing *att = element->GetAtt<AttSpacing>(ATT_SPACING);
        assert(att);
        if (att->HasSpacingPackexp()) {
            attributes->push_back({ "spacing.packexp", att->DblToStr(att->GetSpacingPackexp()) });
        }
        if (att->HasSpacingPackfact()) {
            attributes->push_back({ "spacing.packfact", att->DblToStr(att->GetSpacingPackfact()) });
        }
        if (att->HasSpacingStaff()) {
            attributes->push_back({ "spacing.staff", att->MeasurementsignedToStr(att->GetSpacingStaff()) });
        }
        if (att->HasSpacingSystem()) {
            attributes->push_back({ "spacing.system", att->MeasurementsignedToStr(att->GetSpacingSystem()) });
        }
    }
    if (element->HasAttClass(ATT_STAFFLOG)) {
        const AttStaffLog *att = element->GetAtt<AttStaffLog>(ATT_STAFFLOG);
        assert(att);
        if (att->HasDef()) {
            attributes->push_back({ "def", att->StrToStr(att->GetDef()) });
        }
    }
    if (element->HasAttClass(ATT_STAFFDEFLOG)) {
        const AttStaffDefLog *att = element->GetAtt<AttStaffDefLog>(ATT_STAFFDEFLOG);
        assert(att);
        if (att->HasLines()) {
            attributes->push_back({ "lines", att->IntToStr(att->GetLines()) });
        }
    }
    if (element->HasAttClass(ATT_STAFFGROUPINGSYM)) {
        const AttStaffGroupingSym *att = element->GetAtt<AttStaffGroupingSym>(ATT_STAFFGROUPINGSYM);
        assert(att);
        if (att->HasSymbol()) {
            attributes->push_back({ "symbol", att->StaffGroupingSymSymbolToStr(att->GetSymbol()) });
        }
    }
    if (element->HasAttClass(ATT_STAFFIDENT)) {
        const AttStaffIdent *att = element->GetAtt<AttStaffIdent>(ATT_STAFFIDENT);
        assert(att);
        if (att->HasStaff()) {
            attributes->push_back({ "staff", att->XsdPositiveIntegerListToStr(att->GetStaff()) });
        }
    }
    if (element->HasAttClass(ATT_STAFFITEMS)) {
        const AttStaffItems *att = element->GetAtt<AttStaffItems>(ATT_STAFFITEMS);
        assert(att);
        if (att->HasAboveorder()) {
            attributes->push_back({ "aboveorder", att->StaffitemToStr(att->GetAboveorder()) });
        }
        if (att->HasBeloworder()) {
            attributes->push_back({ "beloworder", att->StaffitemToStr(att->GetBeloworder()) });
        }
        if (att->HasBetweenorder()) {
            attributes->push_back({ "betweenorder", att->StaffitemToStr(att->GetBetweenorder()) });
        }
    }
    if (element->HasAttClass(ATT_STAFFLOC)) {
        const AttStaffLoc *att = element->GetAtt<AttStaffLoc>(ATT_STAFFLOC);
        assert(att);
        if (att->HasLoc()) {
            attributes->push_back({ "loc", att->IntToStr(att->GetLoc()) });
        }
    }
    if (element->HasAttClass(ATT_STAFFLOCPITCHED)) {
        const AttStaffLocPitched *att = element->GetAtt<AttStaffLocPitched>(ATT_STAFFLOCPITCHED);
        assert(att);
        if (att->HasPloc()) {
            attributes->push_back({ "ploc", att->PitchnameToStr(att->GetPloc()) });
        }
        if (att->HasOloc()) {
            attributes->push_back({ "oloc", att->OctaveToStr(att->GetOloc()) });
        }
    }
    if (element->HasAttClass(ATT_STARTENDID)) {
        const AttStartEndId *att = element->GetAtt<AttStartEndId>(ATT_STARTENDID);
        assert(att);
        if (att->HasEndid()) {
            attributes->push_back({ "endid", att->StrToStr(att->GetEndid()) });
        }
    }
    if (element->HasAttClass(ATT_STARTID)) {
        const AttStartId *att = element->GetAtt<AttStartId>(ATT_STARTID);
        assert(att);
        if (att->HasStartid()) {
            attributes->push_back({ "startid", att->StrToStr(att->GetStartid()) });
        }
    }
    if (element->HasAttClass(ATT_STEMS)) {
        const AttStems *att = element->GetAtt<AttStems>(ATT_STEMS);
        assert(att);
        if (att->HasStemDir()) {
            attributes->push_back({ "stem.dir", att->StemdirectionToStr(att->GetStemDir()) });
        }
        if (att->HasStemLen()) {
            attributes->push_back({ "stem.len", att->DblToStr(att->GetStemLen()) });
        }
        if (att->HasStemMod()) {
            attributes->push_back({ "stem.mod", att->StemmodifierToStr(att->GetStemMod()) });
        }
        if (att->HasStemPos()) {
            attributes->push_back({ "stem.pos", att->StempositionToStr(att->GetStemPos()) });
        }
        if (att->HasStemSameas()) {
            attributes->push_back({ "stem.sameas", att->StrToStr(att->GetStemSameas()) });
        }
        if (att->HasStemVisible()) {
            attributes->push_back({ "stem.visible", att->BooleanToStr(att->GetStemVisible()) });
        }
        if (att->HasStemX()) {
            attributes->push_back({ "stem.x", att->DblToStr(att->GetStemX()) });
        }
        if (att->HasStemY()) {
            attributes->push_back({ "stem.y", att->DblToStr(att->GetStemY()) });
        }
    }
    if (element->HasAttClass(ATT_SYLLOG)) {
        const AttSylLog *att = element->GetAtt<AttSylLog>(ATT_SYLLOG);
        assert(att);
        if (att->HasCon()) {
            attributes->push_back({ "con", att->SylLogConToStr(att->GetCon()) });
        }
        if (att->HasWordpos()) {
            attributes->push_back({ "wordpos", att->SylLogWordposToStr(att->GetWordpos()) });
        }
    }
    if (element->HasAttClass(ATT_SYLTEXT)) {
        const AttSylText *att = element->GetAtt<AttSylText>(ATT_SYLTEXT);
        assert(att);
        if (att->HasSyl()) {
            attributes->push_back({ "syl", att->StrToStr(att->GetSyl()) });
        }
    }
    if (element->HasAttClass(ATT_SYSTEMS)) {
        const AttSystems *att = element->GetAtt<AttSystems>(ATT_SYSTEMS);
        assert(att);
        if (att->HasSystemLeftline()) {
            attributes->push_back({ "system.leftline", att->BooleanToStr(att->GetSystemLeftline()) });
        }
        if (att->HasSystemLeftmar()) {
            attributes->push_back({ "system.leftmar", att->MeasurementunsignedToStr(att->GetSystemLeftmar()) });
        }
        if (att->HasSystemRightmar()) {
            attributes->push_back({ "system.rightmar", att->MeasurementunsignedToStr(att->GetSystemRightmar()) });
        }
        if (att->HasSystemTopmar()) {
            attributes->push_back({ "system.topmar", att->MeasurementunsignedToStr(att->GetSystemTopmar()) });
        }
    }
    if (element->HasAttClass(ATT_TARGETEVAL)) {
        const AttTargetEval *att = element->GetAtt<AttTargetEval>(ATT_TARGETEVAL);
        assert(att);
        if (att->HasEvaluate()) {
            attributes->push_back({ "evaluate", att->TargetEvalEvaluateToStr(att->GetEvaluate()) });
        }
    }
    if (element->HasAttClass(ATT_TEMPOLOG)) {
        const AttTempoLog *att = element->GetAtt<AttTempoLog>(ATT_TEMPOLOG);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->TempoLogFuncToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_TEXTRENDITION)) {
        const AttTextRendition *att = element->GetAtt<AttTextRendition>(ATT_TEXTRENDITION);
        assert(att);
        if (att->HasAltrend()) {
            attributes->push_back({ "altrend", att->StrToStr(att->GetAltrend()) });
        }
        if (att->HasRend()) {
            attributes->push_back({ "rend", att->TextrenditionToStr(att->GetRend()) });
        }
    }
    if (element->HasAttClass(ATT_TEXTSTYLE)) {
        const AttTextStyle *att = element->GetAtt<AttTextStyle>(ATT_TEXTSTYLE);
        assert(att);
        if (att->HasTextFam()) {
            attributes->push_back({ "text.fam", att->StrToStr(att->GetTextFam()) });
        }
        if (att->HasTextName()) {
            attributes->push_back({ "text.name", att->StrToStr(att->GetTextName()) });
        }
        if (att->HasTextSize()) {
            attributes->push_back({ "text.size", att->FontsizeToStr(att->GetTextSize()) });
        }
        if (att->HasTextStyle()) {
            attributes->push_back({ "text.style", att->FontstyleToStr(att->GetTextStyle()) });
        }
        if (att->HasTextWeight()) {
            attributes->push_back({ "text.weight", att->FontweightToStr(att->GetTextWeight()) });
        }
    }
    if (element->HasAttClass(ATT_TIEPRESENT)) {
        const AttTiePresent *att = element->GetAtt<AttTiePresent>(ATT_TIEPRESENT);
        assert(att);
        if (att->HasTie()) {
            attributes->push_back({ "tie", att->TieToStr(att->GetTie()) });
        }
    }
    if (element->HasAttClass(ATT_TIMESTAMPLOG)) {
        const AttTimestampLog *att = element->GetAtt<AttTimestampLog>(ATT_TIMESTAMPLOG);
        assert(att);
        if (att->HasTstamp()) {
            attributes->push_back({ "tstamp", att->DblToStr(att->GetTstamp()) });
        }
    }
    if (element->HasAttClass(ATT_TIMESTAMP2LOG)) {
        const AttTimestamp2Log *att = element->GetAtt<AttTimestamp2Log>(ATT_TIMESTAMP2LOG);
        assert(att);
        if (att->HasTstamp2()) {
            attributes->push_back({ "tstamp2", att->MeasurebeatToStr(att->GetTstamp2()) });
        }
    }
    if (element->HasAttClass(ATT_TRANSPOSITION)) {
        const AttTransposition *att = element->GetAtt<AttTransposition>(ATT_TRANSPOSITION);
        assert(att);
        if (att->HasTransDiat()) {
            attributes->push_back({ "trans.diat", att->IntToStr(att->GetTransDiat()) });
        }
        if (att->HasTransSemi()) {
            attributes->push_back({ "trans.semi", att->IntToStr(att->GetTransSemi()) });
        }
    }
    if (element->HasAttClass(ATT_TUNING)) {
        const AttTuning *att = element->GetAtt<AttTuning>(ATT_TUNING);
        assert(att);
        if (att->HasTuneHz()) {
            attributes->push_back({ "tune.Hz", att->DblToStr(att->GetTuneHz()) });
        }
        if (att->HasTunePname()) {
            attributes->push_back({ "tune.pname", att->PitchnameToStr(att->GetTunePname()) });
        }
        if (att->HasTuneTemper()) {
            attributes->push_back({ "tune.temper", att->TemperamentToStr(att->GetTuneTemper()) });
        }
    }
    if (element->HasAttClass(ATT_TUNINGLOG)) {
        const AttTuningLog *att = element->GetAtt<AttTuningLog>(ATT_TUNINGLOG);
        assert(att);
        if (att->HasTuningStandard()) {
            attributes->push_back({ "tuning.standard", att->CoursetuningToStr(att->GetTuningStandard()) });
        }
    }
    if (element->HasAttClass(ATT_TUPLETPRESENT)) {
        const AttTupletPresent *att = element->GetAtt<AttTupletPresent>(ATT_TUPLETPRESENT);
        assert(att);
        if (att->HasTuplet()) {
            attributes->push_back({ "tuplet", att->StrToStr(att->GetTuplet()) });
        }
    }
    if (element->HasAttClass(ATT_TYPED)) {
        const AttTyped *att = element->GetAtt<AttTyped>(ATT_TYPED);
        assert(att);
        if (att->HasType()) {
            attributes->push_back({ "type", att->StrToStr(att->GetType()) });
        }
    }
    if (element->HasAttClass(ATT_TYPOGRAPHY)) {
        const AttTypography *att = element->GetAtt<AttTypography>(ATT_TYPOGRAPHY);
        assert(att);
        if (att->HasFontfam()) {
            attributes->push_back({ "fontfam", att->StrToStr(att->GetFontfam()) });
        }
        if (att->HasFontname()) {
            attributes->push_back({ "fontname", att->StrToStr(att->GetFontname()) });
        }
        if (att->HasFontsize()) {
            attributes->push_back({ "fontsize", att->FontsizeToStr(att->GetFontsize()) });
        }
        if (att->HasFontstyle()) {
            attributes->push_back({ "fontstyle", att->FontstyleToStr(att->GetFontstyle()) });
        }
        if (att->HasFontweight()) {
            attributes->push_back({ "fontweight", att->FontweightToStr(att->GetFontweight()) });
        }
        if (att->HasLetterspacing()) {
            attributes->push_back({ "letterspacing", att->DblToStr(att->GetLetterspacing()) });
        }
        if (att->HasLineheight()) {
            attributes->push_back({ "lineheight", att->StrToStr(att->GetLineheight()) });
        }
    }
    if (element->HasAttClass(ATT_VERTICALALIGN)) {
        const AttVerticalAlign *att = element->GetAtt<AttVerticalAlign>(ATT_VERTICALALIGN);
        assert(att);
        if (att->HasValign()) {
            attributes->push_back({ "valign", att->VerticalalignmentToStr(att->GetValign()) });
        }
    }
    if (element->HasAttClass(ATT_VERTICALGROUP)) {
        const AttVerticalGroup *att = element->GetAtt<AttVerticalGroup>(ATT_VERTICALGROUP);
        assert(att);
        if (att->HasVgrp()) {
            attributes->push_back({ "vgrp", att->IntToStr(att->GetVgrp()) });
        }
    }
    if (element->HasAttClass(ATT_VISIBILITY)) {
        const AttVisibility *att = element->GetAtt<AttVisibility>(ATT_VISIBILITY);
        assert(att);
        if (att->HasVisible()) {
            attributes->push_back({ "visible", att->BooleanToStr(att->GetVisible()) });
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSETHO)) {
        const AttVisualOffsetHo *att = element->GetAtt<AttVisualOffsetHo>(ATT_VISUALOFFSETHO);
        assert(att);
        if (att->HasHo()) {
            attributes->push_back({ "ho", att->MeasurementsignedToStr(att->GetHo()) });
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSETTO)) {
        const AttVisualOffsetTo *att = element->GetAtt<AttVisualOffsetTo>(ATT_VISUALOFFSETTO);
        assert(att);
        if (att->HasTo()) {
            attributes->push_back({ "to", att->DblToStr(att->GetTo()) });
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSETVO)) {
        const AttVisualOffsetVo *att = element->GetAtt<AttVisualOffsetVo>(ATT_VISUALOFFSETVO);
        assert(att);
        if (att->HasVo()) {
            attributes->push_back({ "vo", att->MeasurementsignedToStr(att->GetVo()) });
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSET2HO)) {
        const AttVisualOffset2Ho *att = element->GetAtt<AttVisualOffset2Ho>(ATT_VISUALOFFSET2HO);
        assert(att);
        if (att->HasStartho()) {
            attributes->push_back({ "startho", att->MeasurementsignedToStr(att->GetStartho()) });
        }
        if (att->HasEndho()) {
            attributes->push_back({ "endho", att->MeasurementsignedToStr(att->GetEndho()) });
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSET2TO)) {
        const AttVisualOffset2To *att = element->GetAtt<AttVisualOffset2To>(ATT_VISUALOFFSET2TO);
        assert(att);
        if (att->HasStartto()) {
            attributes->push_back({ "startto", att->DblToStr(att->GetStartto()) });
        }
        if (att->HasEndto()) {
            attributes->push_back({ "endto", att->DblToStr(att->GetEndto()) });
        }
    }
    if (element->HasAttClass(ATT_VISUALOFFSET2VO)) {
        const AttVisualOffset2Vo *att = element->GetAtt<AttVisualOffset2Vo>(ATT_VISUALOFFSET2VO);
        assert(att);
        if (att->HasStartvo()) {
            attributes->push_back({ "startvo", att->MeasurementsignedToStr(att->GetStartvo()) });
        }
        if (att->HasEndvo()) {
            attributes->push_back({ "endvo", att->MeasurementsignedToStr(att->GetEndvo()) });
        }
    }
    if (element->HasAttClass(ATT_VOLTAGROUPINGSYM)) {
        const AttVoltaGroupingSym *att = element->GetAtt<AttVoltaGroupingSym>(ATT_VOLTAGROUPINGSYM);
        assert(att);
        if (att->HasVoltasym()) {
            attributes->push_back({ "voltasym", att->VoltaGroupingSymVoltasymToStr(att->GetVoltasym()) });
        }
    }
    if (element->HasAttClass(ATT_WHITESPACE)) {
        const AttWhitespace *att = element->GetAtt<AttWhitespace>(ATT_WHITESPACE);
        assert(att);
        if (att->HasSpace()) {
            attributes->push_back({ "xml:space", att->StrToStr(att->GetSpace()) });
        }
    }
    if (element->HasAttClass(ATT_WIDTH)) {
        const AttWidth *att = element->GetAtt<AttWidth>(ATT_WIDTH);
        assert(att);
        if (att->HasWidth()) {
            attributes->push_back({ "width", att->MeasurementunsignedToStr(att->GetWidth()) });
        }
    }
    if (element->HasAttClass(ATT_XY)) {
        const AttXy *att = element->GetAtt<AttXy>(ATT_XY);
        assert(att);
        if (att->HasX()) {
            attributes->push_back({ "x", att->DblToStr(att->GetX()) });
        }
        if (att->HasY()) {
            attributes->push_back({ "y", att->DblToStr(att->GetY()) });
        }
    }
    if (element->HasAttClass(ATT_XY2)) {
        const AttXy2 *att = element->GetAtt<AttXy2>(ATT_XY2);
        assert(att);
        if (att->HasX2()) {
            attributes->push_back({ "x2", att->DblToStr(att->GetX2()) });
        }
        if (att->HasY2()) {
            attributes->push_back({ "y2", att->DblToStr(att->GetY2()) });
        }
    }
}

void AttModule::CopyShared(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_ACCIDLOG)) {
        const AttAccidLog *att = element->GetAtt<AttAccidLog>(ATT_ACCIDLOG);
        assert(att);
        AttAccidLog *attTarget = target->GetAtt<AttAccidLog>(ATT_ACCIDLOG);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_ACCIDENTAL)) {
        const AttAccidental *att = element->GetAtt<AttAccidental>(ATT_ACCIDENTAL);
        assert(att);
        AttAccidental *attTarget = target->GetAtt<AttAccidental>(ATT_ACCIDENTAL);
        assert(attTarget);
        attTarget->SetAccid(att->GetAccid());
    }
    if (element->HasAttClass(ATT_ANNOTLOG)) {
        const AttAnnotLog *att = element->GetAtt<AttAnnotLog>(ATT_ANNOTLOG);
        assert(att);
        AttAnnotLog *attTarget = target->GetAtt<AttAnnotLog>(ATT_ANNOTLOG);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_ARTICULATION)) {
        const AttArticulation *att = element->GetAtt<AttArticulation>(ATT_ARTICULATION);
        assert(att);
        AttArticulation *attTarget = target->GetAtt<AttArticulation>(ATT_ARTICULATION);
        assert(attTarget);
        attTarget->SetArtic(att->GetArtic());
    }
    if (element->HasAttClass(ATT_ATTACCALOG)) {
        const AttAttaccaLog *att = element->GetAtt<AttAttaccaLog>(ATT_ATTACCALOG);
        assert(att);
        AttAttaccaLog *attTarget = target->GetAtt<AttAttaccaLog>(ATT_ATTACCALOG);
        assert(attTarget);
        attTarget->SetTarget(att->GetTarget());
    }
    if (element->HasAttClass(ATT_AUDIENCE)) {
        const AttAudience *att = element->GetAtt<AttAudience>(ATT_AUDIENCE);
        assert(att);
        AttAudience *attTarget = target->GetAtt<AttAudience>(ATT_AUDIENCE);
        assert(attTarget);
        attTarget->SetAudience(att->GetAudience());
    }
    if (element->HasAttClass(ATT_AUGMENTDOTS)) {
        const AttAugmentDots *att = element->GetAtt<AttAugmentDots>(ATT_AUGMENTDOTS);
        assert(att);
        AttAugmentDots *attTarget = target->GetAtt<AttAugmentDots>(ATT_AUGMENTDOTS);
        assert(attTarget);
        attTarget->SetDots(att->GetDots());
    }
    if (element->HasAttClass(ATT_AUTHORIZED)) {
        const AttAuthorized *att = element->GetAtt<AttAuthorized>(ATT_AUTHORIZED);
        assert(att);
        AttAuthorized *attTarget = target->GetAtt<AttAuthorized>(ATT_AUTHORIZED);
        assert(attTarget);
        attTarget->SetAuth(att->GetAuth());
        attTarget->SetAuthUri(att->GetAuthUri());
    }
    if (element->HasAttClass(ATT_BARLINELOG)) {
        const AttBarLineLog *att = element->GetAtt<AttBarLineLog>(ATT_BARLINELOG);
        assert(att);
        AttBarLineLog *attTarget = target->GetAtt<AttBarLineLog>(ATT_BARLINELOG);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
    if (element->HasAttClass(ATT_BARRING)) {
        const AttBarring *att = element->GetAtt<AttBarring>(ATT_BARRING);
        assert(att);
        AttBarring *attTarget = target->GetAtt<AttBarring>(ATT_BARRING);
        assert(attTarget);
        attTarget->SetBarLen(att->GetBarLen());
        attTarget->SetBarMethod(att->GetBarMethod());
        attTarget->SetBarPlace(att->GetBarPlace());
    }
    if (element->HasAttClass(ATT_BASIC)) {
        const AttBasic *att = element->GetAtt<AttBasic>(ATT_BASIC);
        assert(att);
        AttBasic *attTarget = target->GetAtt<AttBasic>(ATT_BASIC);
        assert(attTarget);
        attTarget->SetBase(att->GetBase());
    }
    if (element->HasAttClass(ATT_BIBL)) {
        const AttBibl *att = element->GetAtt<AttBibl>(ATT_BIBL);
        assert(att);
        AttBibl *attTarget = target->GetAtt<AttBibl>(ATT_BIBL);
        assert(attTarget);
        attTarget->SetAnalog(att->GetAnalog());
    }
    if (element->HasAttClass(ATT_CALENDARED)) {
        const AttCalendared *att = element->GetAtt<AttCalendared>(ATT_CALENDARED);
        assert(att);
        AttCalendared *attTarget = target->GetAtt<AttCalendared>(ATT_CALENDARED);
        assert(attTarget);
        attTarget->SetCalendar(att->GetCalendar());
    }
    if (element->HasAttClass(ATT_CANONICAL)) {
        const AttCanonical *att = element->GetAtt<AttCanonical>(ATT_CANONICAL);
        assert(att);
        AttCanonical *attTarget = target->GetAtt<AttCanonical>(ATT_CANONICAL);
        assert(attTarget);
        attTarget->SetCodedval(att->GetCodedval());
    }
    if (element->HasAttClass(ATT_CLASSED)) {
        const AttClassed *att = element->GetAtt<AttClassed>(ATT_CLASSED);
        assert(att);
        AttClassed *attTarget = target->GetAtt<AttClassed>(ATT_CLASSED);
        assert(attTarget);
        attTarget->SetClass(att->GetClass());
    }
    if (element->HasAttClass(ATT_CLEFLOG)) {
        const AttClefLog *att = element->GetAtt<AttClefLog>(ATT_CLEFLOG);
        assert(att);
        AttClefLog *attTarget = target->GetAtt<AttClefLog>(ATT_CLEFLOG);
        assert(attTarget);
        attTarget->SetCautionary(att->GetCautionary());
    }
    if (element->HasAttClass(ATT_CLEFSHAPE)) {
        const AttClefShape *att = element->GetAtt<AttClefShape>(ATT_CLEFSHAPE);
        assert(att);
        AttClefShape *attTarget = target->GetAtt<AttClefShape>(ATT_CLEFSHAPE);
        assert(attTarget);
        attTarget->SetShape(att->GetShape());
    }
    if (element->HasAttClass(ATT_CLEFFINGLOG)) {
        const AttCleffingLog *att = element->GetAtt<AttCleffingLog>(ATT_CLEFFINGLOG);
        assert(att);
        AttCleffingLog *attTarget = target->GetAtt<AttCleffingLog>(ATT_CLEFFINGLOG);
        assert(attTarget);
        attTarget->SetClefShape(att->GetClefShape());
        attTarget->SetClefLine(att->GetClefLine());
        attTarget->SetClefDis(att->GetClefDis());
        attTarget->SetClefDisPlace(att->GetClefDisPlace());
    }
    if (element->HasAttClass(ATT_COLOR)) {
        const AttColor *att = element->GetAtt<AttColor>(ATT_COLOR);
        assert(att);
        AttColor *attTarget = target->GetAtt<AttColor>(ATT_COLOR);
        assert(attTarget);
        attTarget->SetColor(att->GetColor());
    }
    if (element->HasAttClass(ATT_COLORATION)) {
        const AttColoration *att = element->GetAtt<AttColoration>(ATT_COLORATION);
        assert(att);
        AttColoration *attTarget = target->GetAtt<AttColoration>(ATT_COLORATION);
        assert(attTarget);
        attTarget->SetColored(att->GetColored());
    }
    if (element->HasAttClass(ATT_COORDX1)) {
        const AttCoordX1 *att = element->GetAtt<AttCoordX1>(ATT_COORDX1);
        assert(att);
        AttCoordX1 *attTarget = target->GetAtt<AttCoordX1>(ATT_COORDX1);
        assert(attTarget);
        attTarget->SetCoordX1(att->GetCoordX1());
    }
    if (element->HasAttClass(ATT_COORDX2)) {
        const AttCoordX2 *att = element->GetAtt<AttCoordX2>(ATT_COORDX2);
        assert(att);
        AttCoordX2 *attTarget = target->GetAtt<AttCoordX2>(ATT_COORDX2);
        assert(attTarget);
        attTarget->SetCoordX2(att->GetCoordX2());
    }
    if (element->HasAttClass(ATT_COORDY1)) {
        const AttCoordY1 *att = element->GetAtt<AttCoordY1>(ATT_COORDY1);
        assert(att);
        AttCoordY1 *attTarget = target->GetAtt<AttCoordY1>(ATT_COORDY1);
        assert(attTarget);
        attTarget->SetCoordY1(att->GetCoordY1());
    }
    if (element->HasAttClass(ATT_COORDINATED)) {
        const AttCoordinated *att = element->GetAtt<AttCoordinated>(ATT_COORDINATED);
        assert(att);
        AttCoordinated *attTarget = target->GetAtt<AttCoordinated>(ATT_COORDINATED);
        assert(attTarget);
        attTarget->SetLrx(att->GetLrx());
        attTarget->SetLry(att->GetLry());
        attTarget->SetRotate(att->GetRotate());
    }
    if (element->HasAttClass(ATT_COORDINATEDUL)) {
        const AttCoordinatedUl *att = element->GetAtt<AttCoordinatedUl>(ATT_COORDINATEDUL);
        assert(att);
        AttCoordinatedUl *attTarget = target->GetAtt<AttCoordinatedUl>(ATT_COORDINATEDUL);
        assert(attTarget);
        attTarget->SetUlx(att->GetUlx());
        attTarget->SetUly(att->GetUly());
    }
    if (element->HasAttClass(ATT_CUE)) {
        const AttCue *att = element->GetAtt<AttCue>(ATT_CUE);
        assert(att);
        AttCue *attTarget = target->GetAtt<AttCue>(ATT_CUE);
        assert(attTarget);
        attTarget->SetCue(att->GetCue());
    }
    if (element->HasAttClass(ATT_CURVATURE)) {
        const AttCurvature *att = element->GetAtt<AttCurvature>(ATT_CURVATURE);
        assert(att);
        AttCurvature *attTarget = target->GetAtt<AttCurvature>(ATT_CURVATURE);
        assert(attTarget);
        attTarget->SetBezier(att->GetBezier());
        attTarget->SetBulge(att->GetBulge());
        attTarget->SetCurvedir(att->GetCurvedir());
    }
    if (element->HasAttClass(ATT_CUSTOSLOG)) {
        const AttCustosLog *att = element->GetAtt<AttCustosLog>(ATT_CUSTOSLOG);
        assert(att);
        AttCustosLog *attTarget = target->GetAtt<AttCustosLog>(ATT_CUSTOSLOG);
        assert(attTarget);
        attTarget->SetTarget(att->GetTarget());
    }
    if (element->HasAttClass(ATT_DATAPOINTING)) {
        const AttDataPointing *att = element->GetAtt<AttDataPointing>(ATT_DATAPOINTING);
        assert(att);
        AttDataPointing *attTarget = target->GetAtt<AttDataPointing>(ATT_DATAPOINTING);
        assert(attTarget);
        attTarget->SetData(att->GetData());
    }
    if (element->HasAttClass(ATT_DATASELECTING)) {
        const AttDataSelecting *att = element->GetAtt<AttDataSelecting>(ATT_DATASELECTING);
        assert(att);
        AttDataSelecting *attTarget = target->GetAtt<AttDataSelecting>(ATT_DATASELECTING);
        assert(attTarget);
        attTarget->SetSelect(att->GetSelect());
    }
    if (element->HasAttClass(ATT_DATABLE)) {
        const AttDatable *att = element->GetAtt<AttDatable>(ATT_DATABLE);
        assert(att);
        AttDatable *attTarget = target->GetAtt<AttDatable>(ATT_DATABLE);
        assert(attTarget);
        attTarget->SetEnddate(att->GetEnddate());
        attTarget->SetIsodate(att->GetIsodate());
        attTarget->SetNotafter(att->GetNotafter());
        attTarget->SetNotbefore(att->GetNotbefore());
        attTarget->SetStartdate(att->GetStartdate());
    }
    if (element->HasAttClass(ATT_DISTANCES)) {
        const AttDistances *att = element->GetAtt<AttDistances>(ATT_DISTANCES);
        assert(att);
        AttDistances *attTarget = target->GetAtt<AttDistances>(ATT_DISTANCES);
        assert(attTarget);
        attTarget->SetDirDist(att->GetDirDist());
        attTarget->SetDynamDist(att->GetDynamDist());
        attTarget->SetHarmDist(att->GetHarmDist());
        attTarget->SetRehDist(att->GetRehDist());
        attTarget->SetTempoDist(att->GetTempoDist());
    }
    if (element->HasAttClass(ATT_DOCSTATUS)) {
        const AttDocStatus *att = element->GetAtt<AttDocStatus>(ATT_DOCSTATUS);
        assert(att);
        AttDocStatus *attTarget = target->GetAtt<AttDocStatus>(ATT_DOCSTATUS);
        assert(attTarget);
        attTarget->SetStatus(att->GetStatus());
    }
    if (element->HasAttClass(ATT_DOTLOG)) {
        const AttDotLog *att = element->GetAtt<AttDotLog>(ATT_DOTLOG);
        assert(att);
        AttDotLog *attTarget = target->GetAtt<AttDotLog>(ATT_DOTLOG);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
    if (element->HasAttClass(ATT_DURATIONADDITIVE)) {
        const AttDurationAdditive *att = element->GetAtt<AttDurationAdditive>(ATT_DURATIONADDITIVE);
        assert(att);
        AttDurationAdditive *attTarget = target->GetAtt<AttDurationAdditive>(ATT_DURATIONADDITIVE);
        assert(attTarget);
        attTarget->SetDur(att->GetDur());
    }
    if (element->HasAttClass(ATT_DURATIONDEFAULT)) {
        const AttDurationDefault *att = element->GetAtt<AttDurationDefault>(ATT_DURATIONDEFAULT);
        assert(att);
        AttDurationDefault *attTarget = target->GetAtt<AttDurationDefault>(ATT_DURATIONDEFAULT);
        assert(attTarget);
        attTarget->SetDurDefault(att->GetDurDefault());
        attTarget->SetNumDefault(att->GetNumDefault());
        attTarget->SetNumbaseDefault(att->GetNumbaseDefault());
    }
    if (element->HasAttClass(ATT_DURATIONLOG)) {
        const AttDurationLog *att = element->GetAtt<AttDurationLog>(ATT_DURATIONLOG);
        assert(att);
        AttDurationLog *attTarget = target->GetAtt<AttDurationLog>(ATT_DURATIONLOG);
        assert(attTarget);
        attTarget->SetDur(att->GetDur());
    }
    if (element->HasAttClass(ATT_DURATIONRATIO)) {
        const AttDurationRatio *att = element->GetAtt<AttDurationRatio>(ATT_DURATIONRATIO);
        assert(att);
        AttDurationRatio *attTarget = target->GetAtt<AttDurationRatio>(ATT_DURATIONRATIO);
        assert(attTarget);
        attTarget->SetNum(att->GetNum());
        attTarget->SetNumbase(att->GetNumbase());
    }
    if (element->HasAttClass(ATT_ENCLOSINGCHARS)) {
        const AttEnclosingChars *att = element->GetAtt<AttEnclosingChars>(ATT_ENCLOSINGCHARS);
        assert(att);
        AttEnclosingChars *attTarget = target->GetAtt<AttEnclosingChars>(ATT_ENCLOSINGCHARS);
        assert(attTarget);
        attTarget->SetEnclose(att->GetEnclose());
    }
    if (element->HasAttClass(ATT_ENDINGS)) {
        const AttEndings *att = element->GetAtt<AttEndings>(ATT_ENDINGS);
        assert(att);
        AttEndings *attTarget = target->GetAtt<AttEndings>(ATT_ENDINGS);
        assert(attTarget);
        attTarget->SetEndingRend(att->GetEndingRend());
    }
    if (element->HasAttClass(ATT_EVIDENCE)) {
        const AttEvidence *att = element->GetAtt<AttEvidence>(ATT_EVIDENCE);
        assert(att);
        AttEvidence *attTarget = target->GetAtt<AttEvidence>(ATT_EVIDENCE);
        assert(attTarget);
        attTarget->SetCert(att->GetCert());
        attTarget->SetEvidence(att->GetEvidence());
    }
    if (element->HasAttClass(ATT_EXTENDER)) {
        const AttExtender *att = element->GetAtt<AttExtender>(ATT_EXTENDER);
        assert(att);
        AttExtender *attTarget = target->GetAtt<AttExtender>(ATT_EXTENDER);
        assert(attTarget);
        attTarget->SetExtender(att->GetExtender());
    }
    if (element->HasAttClass(ATT_EXTENT)) {
        const AttExtent *att = element->GetAtt<AttExtent>(ATT_EXTENT);
        assert(att);
        AttExtent *attTarget = target->GetAtt<AttExtent>(ATT_EXTENT);
        assert(attTarget);
        attTarget->SetExtent(att->GetExtent());
    }
    if (element->HasAttClass(ATT_FERMATAPRESENT)) {
        const AttFermataPresent *att = element->GetAtt<AttFermataPresent>(ATT_FERMATAPRESENT);
        assert(att);
        AttFermataPresent *attTarget = target->GetAtt<AttFermataPresent>(ATT_FERMATAPRESENT);
        assert(attTarget);
        attTarget->SetFermata(att->GetFermata());
    }
    if (element->HasAttClass(ATT_FILING)) {
        const AttFiling *att = element->GetAtt<AttFiling>(ATT_FILING);
        assert(att);
        AttFiling *attTarget = target->GetAtt<AttFiling>(ATT_FILING);
        assert(attTarget);
        attTarget->SetNonfiling(att->GetNonfiling());
    }
    if (element->HasAttClass(ATT_FORMEWORK)) {
        const AttFormework *att = element->GetAtt<AttFormework>(ATT_FORMEWORK);
        assert(att);
        AttFormework *attTarget = target->GetAtt<AttFormework>(ATT_FORMEWORK);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_GRPSYMLOG)) {
        const AttGrpSymLog *att = element->GetAtt<AttGrpSymLog>(ATT_GRPSYMLOG);
        assert(att);
        AttGrpSymLog *attTarget = target->GetAtt<AttGrpSymLog>(ATT_GRPSYMLOG);
        assert(attTarget);
        attTarget->SetLevel(att->GetLevel());
    }
    if (element->HasAttClass(ATT_HANDIDENT)) {
        const AttHandIdent *att = element->GetAtt<AttHandIdent>(ATT_HANDIDENT);
        assert(att);
        AttHandIdent *attTarget = target->GetAtt<AttHandIdent>(ATT_HANDIDENT);
        assert(attTarget);
        attTarget->SetHand(att->GetHand());
    }
    if (element->HasAttClass(ATT_HEIGHT)) {
        const AttHeight *att = element->GetAtt<AttHeight>(ATT_HEIGHT);
        assert(att);
        AttHeight *attTarget = target->GetAtt<AttHeight>(ATT_HEIGHT);
        assert(attTarget);
        attTarget->SetHeight(att->GetHeight());
    }
    if (element->HasAttClass(ATT_HORIZONTALALIGN)) {
        const AttHorizontalAlign *att = element->GetAtt<AttHorizontalAlign>(ATT_HORIZONTALALIGN);
        assert(att);
        AttHorizontalAlign *attTarget = target->GetAtt<AttHorizontalAlign>(ATT_HORIZONTALALIGN);
        assert(attTarget);
        attTarget->SetHalign(att->GetHalign());
    }
    if (element->HasAttClass(ATT_INTERNETMEDIA)) {
        const AttInternetMedia *att = element->GetAtt<AttInternetMedia>(ATT_INTERNETMEDIA);
        assert(att);
        AttInternetMedia *attTarget = target->GetAtt<AttInternetMedia>(ATT_INTERNETMEDIA);
        assert(attTarget);
        attTarget->SetMimetype(att->GetMimetype());
    }
    if (element->HasAttClass(ATT_JOINED)) {
        const AttJoined *att = element->GetAtt<AttJoined>(ATT_JOINED);
        assert(att);
        AttJoined *attTarget = target->GetAtt<AttJoined>(ATT_JOINED);
        assert(attTarget);
        attTarget->SetJoin(att->GetJoin());
    }
    if (element->HasAttClass(ATT_KEYSIGLOG)) {
        const AttKeySigLog *att = element->GetAtt<AttKeySigLog>(ATT_KEYSIGLOG);
        assert(att);
        AttKeySigLog *attTarget = target->GetAtt<AttKeySigLog>(ATT_KEYSIGLOG);
        assert(attTarget);
        attTarget->SetSig(att->GetSig());
    }
    if (element->HasAttClass(ATT_KEYSIGDEFAULTLOG)) {
        const AttKeySigDefaultLog *att = element->GetAtt<AttKeySigDefaultLog>(ATT_KEYSIGDEFAULTLOG);
        assert(att);
        AttKeySigDefaultLog *attTarget = target->GetAtt<AttKeySigDefaultLog>(ATT_KEYSIGDEFAULTLOG);
        assert(attTarget);
        attTarget->SetKeysig(att->GetKeysig());
    }
    if (element->HasAttClass(ATT_LABELLED)) {
        const AttLabelled *att = element->GetAtt<AttLabelled>(ATT_LABELLED);
        assert(att);
        AttLabelled *attTarget = target->GetAtt<AttLabelled>(ATT_LABELLED);
        assert(attTarget);
        attTarget->SetLabel(att->GetLabel());
    }
    if (element->HasAttClass(ATT_LANG)) {
        const AttLang *att = element->GetAtt<AttLang>(ATT_LANG);
        assert(att);
        AttLang *attTarget = target->GetAtt<AttLang>(ATT_LANG);
        assert(attTarget);
        attTarget->SetLang(att->GetLang());
        attTarget->SetTranslit(att->GetTranslit());
    }
    if (element->HasAttClass(ATT_LAYERLOG)) {
        const AttLayerLog *att = element->GetAtt<AttLayerLog>(ATT_LAYERLOG);
        assert(att);
        AttLayerLog *attTarget = target->GetAtt<AttLayerLog>(ATT_LAYERLOG);
        assert(attTarget);
        attTarget->SetDef(att->GetDef());
    }
    if (element->HasAttClass(ATT_LAYERIDENT)) {
        const AttLayerIdent *att = element->GetAtt<AttLayerIdent>(ATT_LAYERIDENT);
        assert(att);
        AttLayerIdent *attTarget = target->GetAtt<AttLayerIdent>(ATT_LAYERIDENT);
        assert(attTarget);
        attTarget->SetLayer(att->GetLayer());
    }
    if (element->HasAttClass(ATT_LINELOC)) {
        const AttLineLoc *att = element->GetAtt<AttLineLoc>(ATT_LINELOC);
        assert(att);
        AttLineLoc *attTarget = target->GetAtt<AttLineLoc>(ATT_LINELOC);
        assert(attTarget);
        attTarget->SetLine(att->GetLine());
    }
    if (element->HasAttClass(ATT_LINEREND)) {
        const AttLineRend *att = element->GetAtt<AttLineRend>(ATT_LINEREND);
        assert(att);
        AttLineRend *attTarget = target->GetAtt<AttLineRend>(ATT_LINEREND);
        assert(attTarget);
        attTarget->SetLendsym(att->GetLendsym());
        attTarget->SetLendsymSize(att->GetLendsymSize());
        attTarget->SetLstartsym(att->GetLstartsym());
        attTarget->SetLstartsymSize(att->GetLstartsymSize());
    }
    if (element->HasAttClass(ATT_LINERENDBASE)) {
        const AttLineRendBase *att = element->GetAtt<AttLineRendBase>(ATT_LINERENDBASE);
        assert(att);
        AttLineRendBase *attTarget = target->GetAtt<AttLineRendBase>(ATT_LINERENDBASE);
        assert(attTarget);
        attTarget->SetLform(att->GetLform());
        attTarget->SetLwidth(att->GetLwidth());
        attTarget->SetLsegs(att->GetLsegs());
    }
    if (element->HasAttClass(ATT_LINKING)) {
        const AttLinking *att = element->GetAtt<AttLinking>(ATT_LINKING);
        assert(att);
        AttLinking *attTarget = target->GetAtt<AttLinking>(ATT_LINKING);
        assert(attTarget);
        attTarget->SetCopyof(att->GetCopyof());
        attTarget->SetCorresp(att->GetCorresp());
        attTarget->SetFollows(att->GetFollows());
        attTarget->SetNext(att->GetNext());
        attTarget->SetPrecedes(att->GetPrecedes());
        attTarget->SetPrev(att->GetPrev());
        attTarget->SetSameas(att->GetSameas());
        attTarget->SetSynch(att->GetSynch());
    }
    if (element->HasAttClass(ATT_LYRICSTYLE)) {
        const AttLyricStyle *att = element->GetAtt<AttLyricStyle>(ATT_LYRICSTYLE);
        assert(att);
        AttLyricStyle *attTarget = target->GetAtt<AttLyricStyle>(ATT_LYRICSTYLE);
        assert(attTarget);
        attTarget->SetLyricAlign(att->GetLyricAlign());
        attTarget->SetLyricFam(att->GetLyricFam());
        attTarget->SetLyricName(att->GetLyricName());
        attTarget->SetLyricSize(att->GetLyricSize());
        attTarget->SetLyricStyle(att->GetLyricStyle());
        attTarget->SetLyricWeight(att->GetLyricWeight());
    }
    if (element->HasAttClass(ATT_MEASURENUMBERS)) {
        const AttMeasureNumbers *att = element->GetAtt<AttMeasureNumbers>(ATT_MEASURENUMBERS);
        assert(att);
        AttMeasureNumbers *attTarget = target->GetAtt<AttMeasureNumbers>(ATT_MEASURENUMBERS);
        assert(attTarget);
        attTarget->SetMnumVisible(att->GetMnumVisible());
    }
    if (element->HasAttClass(ATT_MEASUREMENT)) {
        const AttMeasurement *att = element->GetAtt<AttMeasurement>(ATT_MEASUREMENT);
        assert(att);
        AttMeasurement *attTarget = target->GetAtt<AttMeasurement>(ATT_MEASUREMENT);
        assert(attTarget);
        attTarget->SetUnit(att->GetUnit());
    }
    if (element->HasAttClass(ATT_MEDIABOUNDS)) {
        const AttMediaBounds *att = element->GetAtt<AttMediaBounds>(ATT_MEDIABOUNDS);
        assert(att);
        AttMediaBounds *attTarget = target->GetAtt<AttMediaBounds>(ATT_MEDIABOUNDS);
        assert(attTarget);
        attTarget->SetBegin(att->GetBegin());
        attTarget->SetEnd(att->GetEnd());
        attTarget->SetBetype(att->GetBetype());
    }
    if (element->HasAttClass(ATT_MEDIUM)) {
        const AttMedium *att = element->GetAtt<AttMedium>(ATT_MEDIUM);
        assert(att);
        AttMedium *attTarget = target->GetAtt<AttMedium>(ATT_MEDIUM);
        assert(attTarget);
        attTarget->SetMedium(att->GetMedium());
    }
    if (element->HasAttClass(ATT_MEIVERSION)) {
        const AttMeiVersion *att = element->GetAtt<AttMeiVersion>(ATT_MEIVERSION);
        assert(att);
        AttMeiVersion *attTarget = target->GetAtt<AttMeiVersion>(ATT_MEIVERSION);
        assert(attTarget);
        attTarget->SetMeiversion(att->GetMeiversion());
    }
    if (element->HasAttClass(ATT_MENSURLOG)) {
        const AttMensurLog *att = element->GetAtt<AttMensurLog>(ATT_MENSURLOG);
        assert(att);
        AttMensurLog *attTarget = target->GetAtt<AttMensurLog>(ATT_MENSURLOG);
        assert(attTarget);
        attTarget->SetLevel(att->GetLevel());
    }
    if (element->HasAttClass(ATT_METADATAPOINTING)) {
        const AttMetadataPointing *att = element->GetAtt<AttMetadataPointing>(ATT_METADATAPOINTING);
        assert(att);
        AttMetadataPointing *attTarget = target->GetAtt<AttMetadataPointing>(ATT_METADATAPOINTING);
        assert(attTarget);
        attTarget->SetDecls(att->GetDecls());
    }
    if (element->HasAttClass(ATT_METERCONFORMANCE)) {
        const AttMeterConformance *att = element->GetAtt<AttMeterConformance>(ATT_METERCONFORMANCE);
        assert(att);
        AttMeterConformance *attTarget = target->GetAtt<AttMeterConformance>(ATT_METERCONFORMANCE);
        assert(attTarget);
        attTarget->SetMetcon(att->GetMetcon());
    }
    if (element->HasAttClass(ATT_METERCONFORMANCEBAR)) {
        const AttMeterConformanceBar *att = element->GetAtt<AttMeterConformanceBar>(ATT_METERCONFORMANCEBAR);
        assert(att);
        AttMeterConformanceBar *attTarget = target->GetAtt<AttMeterConformanceBar>(ATT_METERCONFORMANCEBAR);
        assert(attTarget);
        attTarget->SetMetcon(att->GetMetcon());
        attTarget->SetControl(att->GetControl());
    }
    if (element->HasAttClass(ATT_METERSIGLOG)) {
        const AttMeterSigLog *att = element->GetAtt<AttMeterSigLog>(ATT_METERSIGLOG);
        assert(att);
        AttMeterSigLog *attTarget = target->GetAtt<AttMeterSigLog>(ATT_METERSIGLOG);
        assert(attTarget);
        attTarget->SetCount(att->GetCount());
        attTarget->SetSym(att->GetSym());
        attTarget->SetUnit(att->GetUnit());
    }
    if (element->HasAttClass(ATT_METERSIGDEFAULTLOG)) {
        const AttMeterSigDefaultLog *att = element->GetAtt<AttMeterSigDefaultLog>(ATT_METERSIGDEFAULTLOG);
        assert(att);
        AttMeterSigDefaultLog *attTarget = target->GetAtt<AttMeterSigDefaultLog>(ATT_METERSIGDEFAULTLOG);
        assert(attTarget);
        attTarget->SetMeterCount(att->GetMeterCount());
        attTarget->SetMeterUnit(att->GetMeterUnit());
        attTarget->SetMeterSym(att->GetMeterSym());
    }
    if (element->HasAttClass(ATT_MMTEMPO)) {
        const AttMmTempo *att = element->GetAtt<AttMmTempo>(ATT_MMTEMPO);
        assert(att);
        AttMmTempo *attTarget = target->GetAtt<AttMmTempo>(ATT_MMTEMPO);
        assert(attTarget);
        attTarget->SetMm(att->GetMm());
        attTarget->SetMmUnit(att->GetMmUnit());
        attTarget->SetMmDots(att->GetMmDots());
    }
    if (element->HasAttClass(ATT_MULTINUMMEASURES)) {
        const AttMultinumMeasures *att = element->GetAtt<AttMultinumMeasures>(ATT_MULTINUMMEASURES);
        assert(att);
        AttMultinumMeasures *attTarget = target->GetAtt<AttMultinumMeasures>(ATT_MULTINUMMEASURES);
        assert(attTarget);
        attTarget->SetMultiNumber(att->GetMultiNumber());
    }
    if (element->HasAttClass(ATT_NINTEGER)) {
        const AttNInteger *att = element->GetAtt<AttNInteger>(ATT_NINTEGER);
        assert(att);
        AttNInteger *attTarget = target->GetAtt<AttNInteger>(ATT_NINTEGER);
        assert(attTarget);
        attTarget->SetN(att->GetN());
    }
    if (element->HasAttClass(ATT_NNUMBERLIKE)) {
        const AttNNumberLike *att = element->GetAtt<AttNNumberLike>(ATT_NNUMBERLIKE);
        assert(att);
        AttNNumberLike *attTarget = target->GetAtt<AttNNumberLike>(ATT_NNUMBERLIKE);
        assert(attTarget);
        attTarget->SetN(att->GetN());
    }
    if (element->HasAttClass(ATT_NAME)) {
        const AttName *att = element->GetAtt<AttName>(ATT_NAME);
        assert(att);
        AttName *attTarget = target->GetAtt<AttName>(ATT_NAME);
        assert(attTarget);
        attTarget->SetNymref(att->GetNymref());
        attTarget->SetRole(att->GetRole());
    }
    if (element->HasAttClass(ATT_NOTATIONSTYLE)) {
        const AttNotationStyle *att = element->GetAtt<AttNotationStyle>(ATT_NOTATIONSTYLE);
        assert(att);
        AttNotationStyle *attTarget = target->GetAtt<AttNotationStyle>(ATT_NOTATIONSTYLE);
        assert(attTarget);
        attTarget->SetMusicName(att->GetMusicName());
        attTarget->SetMusicSize(att->GetMusicSize());
    }
    if (element->HasAttClass(ATT_NOTEHEADS)) {
        const AttNoteHeads *att = element->GetAtt<AttNoteHeads>(ATT_NOTEHEADS);
        assert(att);
        AttNoteHeads *attTarget = target->GetAtt<AttNoteHeads>(ATT_NOTEHEADS);
        assert(attTarget);
        attTarget->SetHeadAltsym(att->GetHeadAltsym());
        attTarget->SetHeadAuth(att->GetHeadAuth());
        attTarget->SetHeadColor(att->GetHeadColor());
        attTarget->SetHeadFill(att->GetHeadFill());
        attTarget->SetHeadFillcolor(att->GetHeadFillcolor());
        attTarget->SetHeadMod(att->GetHeadMod());
        attTarget->SetHeadRotation(att->GetHeadRotation());
        attTarget->SetHeadShape(att->GetHeadShape());
        attTarget->SetHeadVisible(att->GetHeadVisible());
    }
    if (element->HasAttClass(ATT_OCTAVE)) {
        const AttOctave *att = element->GetAtt<AttOctave>(ATT_OCTAVE);
        assert(att);
        AttOctave *attTarget = target->GetAtt<AttOctave>(ATT_OCTAVE);
        assert(attTarget);
        attTarget->SetOct(att->GetOct());
    }
    if (element->HasAttClass(ATT_OCTAVEDEFAULT)) {
        const AttOctaveDefault *att = element->GetAtt<AttOctaveDefault>(ATT_OCTAVEDEFAULT);
        assert(att);
        AttOctaveDefault *attTarget = target->GetAtt<AttOctaveDefault>(ATT_OCTAVEDEFAULT);
        assert(attTarget);
        attTarget->SetOctDefault(att->GetOctDefault());
    }
    if (element->HasAttClass(ATT_OCTAVEDISPLACEMENT)) {
        const AttOctaveDisplacement *att = element->GetAtt<AttOctaveDisplacement>(ATT_OCTAVEDISPLACEMENT);
        assert(att);
        AttOctaveDisplacement *attTarget = target->GetAtt<AttOctaveDisplacement>(ATT_OCTAVEDISPLACEMENT);
        assert(attTarget);
        attTarget->SetDis(att->GetDis());
        attTarget->SetDisPlace(att->GetDisPlace());
    }
    if (element->HasAttClass(ATT_ONELINESTAFF)) {
        const AttOneLineStaff *att = element->GetAtt<AttOneLineStaff>(ATT_ONELINESTAFF);
        assert(att);
        AttOneLineStaff *attTarget = target->GetAtt<AttOneLineStaff>(ATT_ONELINESTAFF);
        assert(attTarget);
        attTarget->SetOntheline(att->GetOntheline());
    }
    if (element->HasAttClass(ATT_OPTIMIZATION)) {
        const AttOptimization *att = element->GetAtt<AttOptimization>(ATT_OPTIMIZATION);
        assert(att);
        AttOptimization *attTarget = target->GetAtt<AttOptimization>(ATT_OPTIMIZATION);
        assert(attTarget);
        attTarget->SetOptimize(att->GetOptimize());
    }
    if (element->HasAttClass(ATT_ORIGINLAYERIDENT)) {
        const AttOriginLayerIdent *att = element->GetAtt<AttOriginLayerIdent>(ATT_ORIGINLAYERIDENT);
        assert(att);
        AttOriginLayerIdent *attTarget = target->GetAtt<AttOriginLayerIdent>(ATT_ORIGINLAYERIDENT);
        assert(attTarget);
        attTarget->SetOriginLayer(att->GetOriginLayer());
    }
    if (element->HasAttClass(ATT_ORIGINSTAFFIDENT)) {
        const AttOriginStaffIdent *att = element->GetAtt<AttOriginStaffIdent>(ATT_ORIGINSTAFFIDENT);
        assert(att);
        AttOriginStaffIdent *attTarget = target->GetAtt<AttOriginStaffIdent>(ATT_ORIGINSTAFFIDENT);
        assert(attTarget);
        attTarget->SetOriginStaff(att->GetOriginStaff());
    }
    if (element->HasAttClass(ATT_ORIGINSTARTENDID)) {
        const AttOriginStartEndId *att = element->GetAtt<AttOriginStartEndId>(ATT_ORIGINSTARTENDID);
        assert(att);
        AttOriginStartEndId *attTarget = target->GetAtt<AttOriginStartEndId>(ATT_ORIGINSTARTENDID);
        assert(attTarget);
        attTarget->SetOriginStartid(att->GetOriginStartid());
        attTarget->SetOriginEndid(att->GetOriginEndid());
    }
    if (element->HasAttClass(ATT_ORIGINTIMESTAMPLOG)) {
        const AttOriginTimestampLog *att = element->GetAtt<AttOriginTimestampLog>(ATT_ORIGINTIMESTAMPLOG);
        assert(att);
        AttOriginTimestampLog *attTarget = target->GetAtt<AttOriginTimestampLog>(ATT_ORIGINTIMESTAMPLOG);
        assert(attTarget);
        attTarget->SetOriginTstamp(att->GetOriginTstamp());
        attTarget->SetOriginTstamp2(att->GetOriginTstamp2());
    }
    if (element->HasAttClass(ATT_PAGES)) {
        const AttPages *att = element->GetAtt<AttPages>(ATT_PAGES);
        assert(att);
        AttPages *attTarget = target->GetAtt<AttPages>(ATT_PAGES);
        assert(attTarget);
        attTarget->SetPageHeight(att->GetPageHeight());
        attTarget->SetPageWidth(att->GetPageWidth());
        attTarget->SetPageTopmar(att->GetPageTopmar());
        attTarget->SetPageBotmar(att->GetPageBotmar());
        attTarget->SetPageLeftmar(att->GetPageLeftmar());
        attTarget->SetPageRightmar(att->GetPageRightmar());
        attTarget->SetPagePanels(att->GetPagePanels());
        attTarget->SetPageScale(att->GetPageScale());
    }
    if (element->HasAttClass(ATT_PARTIDENT)) {
        const AttPartIdent *att = element->GetAtt<AttPartIdent>(ATT_PARTIDENT);
        assert(att);
        AttPartIdent *attTarget = target->GetAtt<AttPartIdent>(ATT_PARTIDENT);
        assert(attTarget);
        attTarget->SetPart(att->GetPart());
        attTarget->SetPartstaff(att->GetPartstaff());
    }
    if (element->HasAttClass(ATT_PITCH)) {
        const AttPitch *att = element->GetAtt<AttPitch>(ATT_PITCH);
        assert(att);
        AttPitch *attTarget = target->GetAtt<AttPitch>(ATT_PITCH);
        assert(attTarget);
        attTarget->SetPname(att->GetPname());
    }
    if (element->HasAttClass(ATT_PLACEMENTONSTAFF)) {
        const AttPlacementOnStaff *att = element->GetAtt<AttPlacementOnStaff>(ATT_PLACEMENTONSTAFF);
        assert(att);
        AttPlacementOnStaff *attTarget = target->GetAtt<AttPlacementOnStaff>(ATT_PLACEMENTONSTAFF);
        assert(attTarget);
        attTarget->SetOnstaff(att->GetOnstaff());
    }
    if (element->HasAttClass(ATT_PLACEMENTRELEVENT)) {
        const AttPlacementRelEvent *att = element->GetAtt<AttPlacementRelEvent>(ATT_PLACEMENTRELEVENT);
        assert(att);
        AttPlacementRelEvent *attTarget = target->GetAtt<AttPlacementRelEvent>(ATT_PLACEMENTRELEVENT);
        assert(attTarget);
        attTarget->SetPlace(att->GetPlace());
    }
    if (element->HasAttClass(ATT_PLACEMENTRELSTAFF)) {
        const AttPlacementRelStaff *att = element->GetAtt<AttPlacementRelStaff>(ATT_PLACEMENTRELSTAFF);
        assert(att);
        AttPlacementRelStaff *attTarget = target->GetAtt<AttPlacementRelStaff>(ATT_PLACEMENTRELSTAFF);
        assert(attTarget);
        attTarget->SetPlace(att->GetPlace());
    }
    if (element->HasAttClass(ATT_PLIST)) {
        const AttPlist *att = element->GetAtt<AttPlist>(ATT_PLIST);
        assert(att);
        AttPlist *attTarget = target->GetAtt<AttPlist>(ATT_PLIST);
        assert(attTarget);
        attTarget->SetPlist(att->GetPlist());
    }
    if (element->HasAttClass(ATT_POINTING)) {
        const AttPointing *att = element->GetAtt<AttPointing>(ATT_POINTING);
        assert(att);
        AttPointing *attTarget = target->GetAtt<AttPointing>(ATT_POINTING);
        assert(attTarget);
        attTarget->SetActuate(att->GetActuate());
        attTarget->SetRole(att->GetRole());
        attTarget->SetShow(att->GetShow());
        attTarget->SetTarget(att->GetTarget());
        attTarget->SetTargettype(att->GetTargettype());
    }
    if (element->HasAttClass(ATT_QUANTITY)) {
        const AttQuantity *att = element->GetAtt<AttQuantity>(ATT_QUANTITY);
        assert(att);
        AttQuantity *attTarget = target->GetAtt<AttQuantity>(ATT_QUANTITY);
        assert(attTarget);
        attTarget->SetQuantity(att->GetQuantity());
    }
    if (element->HasAttClass(ATT_RANGING)) {
        const AttRanging *att = element->GetAtt<AttRanging>(ATT_RANGING);
        assert(att);
        AttRanging *attTarget = target->GetAtt<AttRanging>(ATT_RANGING);
        assert(attTarget);
        attTarget->SetAtleast(att->GetAtleast());
        attTarget->SetAtmost(att->GetAtmost());
        attTarget->SetMin(att->GetMin());
        attTarget->SetMax(att->GetMax());
        attTarget->SetConfidence(att->GetConfidence());
    }
    if (element->HasAttClass(ATT_REPEATMARKLOG)) {
        const AttRepeatMarkLog *att = element->GetAtt<AttRepeatMarkLog>(ATT_REPEATMARKLOG);
        assert(att);
        AttRepeatMarkLog *attTarget = target->GetAtt<AttRepeatMarkLog>(ATT_REPEATMARKLOG);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_RESPONSIBILITY)) {
        const AttResponsibility *att = element->GetAtt<AttResponsibility>(ATT_RESPONSIBILITY);
        assert(att);
        AttResponsibility *attTarget = target->GetAtt<AttResponsibility>(ATT_RESPONSIBILITY);
        assert(attTarget);
        attTarget->SetResp(att->GetResp());
    }
    if (element->HasAttClass(ATT_RESTDURATIONLOG)) {
        const AttRestdurationLog *att = element->GetAtt<AttRestdurationLog>(ATT_RESTDURATIONLOG);
        assert(att);
        AttRestdurationLog *attTarget = target->GetAtt<AttRestdurationLog>(ATT_RESTDURATIONLOG);
        assert(attTarget);
        attTarget->SetDur(att->GetDur());
    }
    if (element->HasAttClass(ATT_SCALABLE)) {
        const AttScalable *att = element->GetAtt<AttScalable>(ATT_SCALABLE);
        assert(att);
        AttScalable *attTarget = target->GetAtt<AttScalable>(ATT_SCALABLE);
        assert(attTarget);
        attTarget->SetScale(att->GetScale());
    }
    if (element->HasAttClass(ATT_SEQUENCE)) {
        const AttSequence *att = element->GetAtt<AttSequence>(ATT_SEQUENCE);
        assert(att);
        AttSequence *attTarget = target->GetAtt<AttSequence>(ATT_SEQUENCE);
        assert(attTarget);
        attTarget->SetSeq(att->GetSeq());
    }
    if (element->HasAttClass(ATT_SLASHCOUNT)) {
        const AttSlashCount *att = element->GetAtt<AttSlashCount>(ATT_SLASHCOUNT);
        assert(att);
        AttSlashCount *attTarget = target->GetAtt<AttSlashCount>(ATT_SLASHCOUNT);
        assert(attTarget);
        attTarget->SetSlash(att->GetSlash());
    }
    if (element->HasAttClass(ATT_SLURPRESENT)) {
        const AttSlurPresent *att = element->GetAtt<AttSlurPresent>(ATT_SLURPRESENT);
        assert(att);
        AttSlurPresent *attTarget = target->GetAtt<AttSlurPresent>(ATT_SLURPRESENT);
        assert(attTarget);
        attTarget->SetSlur(att->GetSlur());
    }
    if (element->HasAttClass(ATT_SOURCE)) {
        const AttSource *att = element->GetAtt<AttSource>(ATT_SOURCE);
        assert(att);
        AttSource *attTarget = target->GetAtt<AttSource>(ATT_SOURCE);
        assert(attTarget);
        attTarget->SetSource(att->GetSource());
    }
    if (element->HasAttClass(ATT_SPACING)) {
        const AttSpacing *att = element->GetAtt<AttSpacing>(ATT_SPACING);
        assert(att);
        AttSpacing *attTarget = target->GetAtt<AttSpacing>(ATT_SPACING);
        assert(attTarget);
        attTarget->SetSpacingPackexp(att->GetSpacingPackexp());
        attTarget->SetSpacingPackfact(att->GetSpacingPackfact());
        attTarget->SetSpacingStaff(att->GetSpacingStaff());
        attTarget->SetSpacingSystem(att->GetSpacingSystem());
    }
    if (element->HasAttClass(ATT_STAFFLOG)) {
        const AttStaffLog *att = element->GetAtt<AttStaffLog>(ATT_STAFFLOG);
        assert(att);
        AttStaffLog *attTarget = target->GetAtt<AttStaffLog>(ATT_STAFFLOG);
        assert(attTarget);
        attTarget->SetDef(att->GetDef());
    }
    if (element->HasAttClass(ATT_STAFFDEFLOG)) {
        const AttStaffDefLog *att = element->GetAtt<AttStaffDefLog>(ATT_STAFFDEFLOG);
        assert(att);
        AttStaffDefLog *attTarget = target->GetAtt<AttStaffDefLog>(ATT_STAFFDEFLOG);
        assert(attTarget);
        attTarget->SetLines(att->GetLines());
    }
    if (element->HasAttClass(ATT_STAFFGROUPINGSYM)) {
        const AttStaffGroupingSym *att = element->GetAtt<AttStaffGroupingSym>(ATT_STAFFGROUPINGSYM);
        assert(att);
        AttStaffGroupingSym *attTarget = target->GetAtt<AttStaffGroupingSym>(ATT_STAFFGROUPINGSYM);
        assert(attTarget);
        attTarget->SetSymbol(att->GetSymbol());
    }
    if (element->HasAttClass(ATT_STAFFIDENT)) {
        const AttStaffIdent *att = element->GetAtt<AttStaffIdent>(ATT_STAFFIDENT);
        assert(att);
        AttStaffIdent *attTarget = target->GetAtt<AttStaffIdent>(ATT_STAFFIDENT);
        assert(attTarget);
        attTarget->SetStaff(att->GetStaff());
    }
    if (element->HasAttClass(ATT_STAFFITEMS)) {
        const AttStaffItems *att = element->GetAtt<AttStaffItems>(ATT_STAFFITEMS);
        assert(att);
        AttStaffItems *attTarget = target->GetAtt<AttStaffItems>(ATT_STAFFITEMS);
        assert(attTarget);
        attTarget->SetAboveorder(att->GetAboveorder());
        attTarget->SetBeloworder(att->GetBeloworder());
        attTarget->SetBetweenorder(att->GetBetweenorder());
    }
    if (element->HasAttClass(ATT_STAFFLOC)) {
        const AttStaffLoc *att = element->GetAtt<AttStaffLoc>(ATT_STAFFLOC);
        assert(att);
        AttStaffLoc *attTarget = target->GetAtt<AttStaffLoc>(ATT_STAFFLOC);
        assert(attTarget);
        attTarget->SetLoc(att->GetLoc());
    }
    if (element->HasAttClass(ATT_STAFFLOCPITCHED)) {
        const AttStaffLocPitched *att = element->GetAtt<AttStaffLocPitched>(ATT_STAFFLOCPITCHED);
        assert(att);
        AttStaffLocPitched *attTarget = target->GetAtt<AttStaffLocPitched>(ATT_STAFFLOCPITCHED);
        assert(attTarget);
        attTarget->SetPloc(att->GetPloc());
        attTarget->SetOloc(att->GetOloc());
    }
    if (element->HasAttClass(ATT_STARTENDID)) {
        const AttStartEndId *att = element->GetAtt<AttStartEndId>(ATT_STARTENDID);
        assert(att);
        AttStartEndId *attTarget = target->GetAtt<AttStartEndId>(ATT_STARTENDID);
        assert(attTarget);
        attTarget->SetEndid(att->GetEndid());
    }
    if (element->HasAttClass(ATT_STARTID)) {
        const AttStartId *att = element->GetAtt<AttStartId>(ATT_STARTID);
        assert(att);
        AttStartId *attTarget = target->GetAtt<AttStartId>(ATT_STARTID);
        assert(attTarget);
        attTarget->SetStartid(att->GetStartid());
    }
    if (element->HasAttClass(ATT_STEMS)) {
        const AttStems *att = element->GetAtt<AttStems>(ATT_STEMS);
        assert(att);
        AttStems *attTarget = target->GetAtt<AttStems>(ATT_STEMS);
        assert(attTarget);
        attTarget->SetStemDir(att->GetStemDir());
        attTarget->SetStemLen(att->GetStemLen());
        attTarget->SetStemMod(att->GetStemMod());
        attTarget->SetStemPos(att->GetStemPos());
        attTarget->SetStemSameas(att->GetStemSameas());
        attTarget->SetStemVisible(att->GetStemVisible());
        attTarget->SetStemX(att->GetStemX());
        attTarget->SetStemY(att->GetStemY());
    }
    if (element->HasAttClass(ATT_SYLLOG)) {
        const AttSylLog *att = element->GetAtt<AttSylLog>(ATT_SYLLOG);
        assert(att);
        AttSylLog *attTarget = target->GetAtt<AttSylLog>(ATT_SYLLOG);
        assert(attTarget);
        attTarget->SetCon(att->GetCon());
        attTarget->SetWordpos(att->GetWordpos());
    }
    if (element->HasAttClass(ATT_SYLTEXT)) {
        const AttSylText *att = element->GetAtt<AttSylText>(ATT_SYLTEXT);
        assert(att);
        AttSylText *attTarget = target->GetAtt<AttSylText>(ATT_SYLTEXT);
        assert(attTarget);
        attTarget->SetSyl(att->GetSyl());
    }
    if (element->HasAttClass(ATT_SYSTEMS)) {
        const AttSystems *att = element->GetAtt<AttSystems>(ATT_SYSTEMS);
        assert(att);
        AttSystems *attTarget = target->GetAtt<AttSystems>(ATT_SYSTEMS);
        assert(attTarget);
        attTarget->SetSystemLeftline(att->GetSystemLeftline());
        attTarget->SetSystemLeftmar(att->GetSystemLeftmar());
        attTarget->SetSystemRightmar(att->GetSystemRightmar());
        attTarget->SetSystemTopmar(att->GetSystemTopmar());
    }
    if (element->HasAttClass(ATT_TARGETEVAL)) {
        const AttTargetEval *att = element->GetAtt<AttTargetEval>(ATT_TARGETEVAL);
        assert(att);
        AttTargetEval *attTarget = target->GetAtt<AttTargetEval>(ATT_TARGETEVAL);
        assert(attTarget);
        attTarget->SetEvaluate(att->GetEvaluate());
    }
    if (element->HasAttClass(ATT_TEMPOLOG)) {
        const AttTempoLog *att = element->GetAtt<AttTempoLog>(ATT_TEMPOLOG);
        assert(att);
        AttTempoLog *attTarget = target->GetAtt<AttTempoLog>(ATT_TEMPOLOG);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_TEXTRENDITION)) {
        const AttTextRendition *att = element->GetAtt<AttTextRendition>(ATT_TEXTRENDITION);
        assert(att);
        AttTextRendition *attTarget = target->GetAtt<AttTextRendition>(ATT_TEXTRENDITION);
        assert(attTarget);
        attTarget->SetAltrend(att->GetAltrend());
        attTarget->SetRend(att->GetRend());
    }
    if (element->HasAttClass(ATT_TEXTSTYLE)) {
        const AttTextStyle *att = element->GetAtt<AttTextStyle>(ATT_TEXTSTYLE);
        assert(att);
        AttTextStyle *attTarget = target->GetAtt<AttTextStyle>(ATT_TEXTSTYLE);
        assert(attTarget);
        attTarget->SetTextFam(att->GetTextFam());
        attTarget->SetTextName(att->GetTextName());
        attTarget->SetTextSize(att->GetTextSize());
        attTarget->SetTextStyle(att->GetTextStyle());
        attTarget->SetTextWeight(att->GetTextWeight());
    }
    if (element->HasAttClass(ATT_TIEPRESENT)) {
        const AttTiePresent *att = element->GetAtt<AttTiePresent>(ATT_TIEPRESENT);
        assert(att);
        AttTiePresent *attTarget = target->GetAtt<AttTiePresent>(ATT_TIEPRESENT);
        assert(attTarget);
        attTarget->SetTie(att->GetTie());
    }
    if (element->HasAttClass(ATT_TIMESTAMPLOG)) {
        const AttTimestampLog *att = element->GetAtt<AttTimestampLog>(ATT_TIMESTAMPLOG);
        assert(att);
        AttTimestampLog *attTarget = target->GetAtt<AttTimestampLog>(ATT_TIMESTAMPLOG);
        assert(attTarget);
        attTarget->SetTstamp(att->GetTstamp());
    }
    if (element->HasAttClass(ATT_TIMESTAMP2LOG)) {
        const AttTimestamp2Log *att = element->GetAtt<AttTimestamp2Log>(ATT_TIMESTAMP2LOG);
        assert(att);
        AttTimestamp2Log *attTarget = target->GetAtt<AttTimestamp2Log>(ATT_TIMESTAMP2LOG);
        assert(attTarget);
        attTarget->SetTstamp2(att->GetTstamp2());
    }
    if (element->HasAttClass(ATT_TRANSPOSITION)) {
        const AttTransposition *att = element->GetAtt<AttTransposition>(ATT_TRANSPOSITION);
        assert(att);
        AttTransposition *attTarget = target->GetAtt<AttTransposition>(ATT_TRANSPOSITION);
        assert(attTarget);
        attTarget->SetTransDiat(att->GetTransDiat());
        attTarget->SetTransSemi(att->GetTransSemi());
    }
    if (element->HasAttClass(ATT_TUNING)) {
        const AttTuning *att = element->GetAtt<AttTuning>(ATT_TUNING);
        assert(att);
        AttTuning *attTarget = target->GetAtt<AttTuning>(ATT_TUNING);
        assert(attTarget);
        attTarget->SetTuneHz(att->GetTuneHz());
        attTarget->SetTunePname(att->GetTunePname());
        attTarget->SetTuneTemper(att->GetTuneTemper());
    }
    if (element->HasAttClass(ATT_TUNINGLOG)) {
        const AttTuningLog *att = element->GetAtt<AttTuningLog>(ATT_TUNINGLOG);
        assert(att);
        AttTuningLog *attTarget = target->GetAtt<AttTuningLog>(ATT_TUNINGLOG);
        assert(attTarget);
        attTarget->SetTuningStandard(att->GetTuningStandard());
    }
    if (element->HasAttClass(ATT_TUPLETPRESENT)) {
        const AttTupletPresent *att = element->GetAtt<AttTupletPresent>(ATT_TUPLETPRESENT);
        assert(att);
        AttTupletPresent *attTarget = target->GetAtt<AttTupletPresent>(ATT_TUPLETPRESENT);
        assert(attTarget);
        attTarget->SetTuplet(att->GetTuplet());
    }
    if (element->HasAttClass(ATT_TYPED)) {
        const AttTyped *att = element->GetAtt<AttTyped>(ATT_TYPED);
        assert(att);
        AttTyped *attTarget = target->GetAtt<AttTyped>(ATT_TYPED);
        assert(attTarget);
        attTarget->SetType(att->GetType());
    }
    if (element->HasAttClass(ATT_TYPOGRAPHY)) {
        const AttTypography *att = element->GetAtt<AttTypography>(ATT_TYPOGRAPHY);
        assert(att);
        AttTypography *attTarget = target->GetAtt<AttTypography>(ATT_TYPOGRAPHY);
        assert(attTarget);
        attTarget->SetFontfam(att->GetFontfam());
        attTarget->SetFontname(att->GetFontname());
        attTarget->SetFontsize(att->GetFontsize());
        attTarget->SetFontstyle(att->GetFontstyle());
        attTarget->SetFontweight(att->GetFontweight());
        attTarget->SetLetterspacing(att->GetLetterspacing());
        attTarget->SetLineheight(att->GetLineheight());
    }
    if (element->HasAttClass(ATT_VERTICALALIGN)) {
        const AttVerticalAlign *att = element->GetAtt<AttVerticalAlign>(ATT_VERTICALALIGN);
        assert(att);
        AttVerticalAlign *attTarget = target->GetAtt<AttVerticalAlign>(ATT_VERTICALALIGN);
        assert(attTarget);
        attTarget->SetValign(att->GetValign());
    }
    if (element->HasAttClass(ATT_VERTICALGROUP)) {
        const AttVerticalGroup *att = element->GetAtt<AttVerticalGroup>(ATT_VERTICALGROUP);
        assert(att);
        AttVerticalGroup *attTarget = target->GetAtt<AttVerticalGroup>(ATT_VERTICALGROUP);
        assert(attTarget);
        attTarget->SetVgrp(att->GetVgrp());
    }
    if (element->HasAttClass(ATT_VISIBILITY)) {
        const AttVisibility *att = element->GetAtt<AttVisibility>(ATT_VISIBILITY);
        assert(att);
        AttVisibility *attTarget = target->GetAtt<AttVisibility>(ATT_VISIBILITY);
        assert(attTarget);
        attTarget->SetVisible(att->GetVisible());
    }
    if (element->HasAttClass(ATT_VISUALOFFSETHO)) {
        const AttVisualOffsetHo *att = element->GetAtt<AttVisualOffsetHo>(ATT_VISUALOFFSETHO);
        assert(att);
        AttVisualOffsetHo *attTarget = target->GetAtt<AttVisualOffsetHo>(ATT_VISUALOFFSETHO);
        assert(attTarget);
        attTarget->SetHo(att->GetHo());
    }
    if (element->HasAttClass(ATT_VISUALOFFSETTO)) {
        const AttVisualOffsetTo *att = element->GetAtt<AttVisualOffsetTo>(ATT_VISUALOFFSETTO);
        assert(att);
        AttVisualOffsetTo *attTarget = target->GetAtt<AttVisualOffsetTo>(ATT_VISUALOFFSETTO);
        assert(attTarget);
        attTarget->SetTo(att->GetTo());
    }
    if (element->HasAttClass(ATT_VISUALOFFSETVO)) {
        const AttVisualOffsetVo *att = element->GetAtt<AttVisualOffsetVo>(ATT_VISUALOFFSETVO);
        assert(att);
        AttVisualOffsetVo *attTarget = target->GetAtt<AttVisualOffsetVo>(ATT_VISUALOFFSETVO);
        assert(attTarget);
        attTarget->SetVo(att->GetVo());
    }
    if (element->HasAttClass(ATT_VISUALOFFSET2HO)) {
        const AttVisualOffset2Ho *att = element->GetAtt<AttVisualOffset2Ho>(ATT_VISUALOFFSET2HO);
        assert(att);
        AttVisualOffset2Ho *attTarget = target->GetAtt<AttVisualOffset2Ho>(ATT_VISUALOFFSET2HO);
        assert(attTarget);
        attTarget->SetStartho(att->GetStartho());
        attTarget->SetEndho(att->GetEndho());
    }
    if (element->HasAttClass(ATT_VISUALOFFSET2TO)) {
        const AttVisualOffset2To *att = element->GetAtt<AttVisualOffset2To>(ATT_VISUALOFFSET2TO);
        assert(att);
        AttVisualOffset2To *attTarget = target->GetAtt<AttVisualOffset2To>(ATT_VISUALOFFSET2TO);
        assert(attTarget);
        attTarget->SetStartto(att->GetStartto());
        attTarget->SetEndto(att->GetEndto());
    }
    if (element->HasAttClass(ATT_VISUALOFFSET2VO)) {
        const AttVisualOffset2Vo *att = element->GetAtt<AttVisualOffset2Vo>(ATT_VISUALOFFSET2VO);
        assert(att);
        AttVisualOffset2Vo *attTarget = target->GetAtt<AttVisualOffset2Vo>(ATT_VISUALOFFSET2VO);
        assert(attTarget);
        attTarget->SetStartvo(att->GetStartvo());
        attTarget->SetEndvo(att->GetEndvo());
    }
    if (element->HasAttClass(ATT_VOLTAGROUPINGSYM)) {
        const AttVoltaGroupingSym *att = element->GetAtt<AttVoltaGroupingSym>(ATT_VOLTAGROUPINGSYM);
        assert(att);
        AttVoltaGroupingSym *attTarget = target->GetAtt<AttVoltaGroupingSym>(ATT_VOLTAGROUPINGSYM);
        assert(attTarget);
        attTarget->SetVoltasym(att->GetVoltasym());
    }
    if (element->HasAttClass(ATT_WHITESPACE)) {
        const AttWhitespace *att = element->GetAtt<AttWhitespace>(ATT_WHITESPACE);
        assert(att);
        AttWhitespace *attTarget = target->GetAtt<AttWhitespace>(ATT_WHITESPACE);
        assert(attTarget);
        attTarget->SetSpace(att->GetSpace());
    }
    if (element->HasAttClass(ATT_WIDTH)) {
        const AttWidth *att = element->GetAtt<AttWidth>(ATT_WIDTH);
        assert(att);
        AttWidth *attTarget = target->GetAtt<AttWidth>(ATT_WIDTH);
        assert(attTarget);
        attTarget->SetWidth(att->GetWidth());
    }
    if (element->HasAttClass(ATT_XY)) {
        const AttXy *att = element->GetAtt<AttXy>(ATT_XY);
        assert(att);
        AttXy *attTarget = target->GetAtt<AttXy>(ATT_XY);
        assert(attTarget);
        attTarget->SetX(att->GetX());
        attTarget->SetY(att->GetY());
    }
    if (element->HasAttClass(ATT_XY2)) {
        const AttXy2 *att = element->GetAtt<AttXy2>(ATT_XY2);
        assert(att);
        AttXy2 *attTarget = target->GetAtt<AttXy2>(ATT_XY2);
        assert(attTarget);
        attTarget->SetX2(att->GetX2());
        attTarget->SetY2(att->GetY2());
    }
}

} // namespace vrv

#include "atts_stringtab.h"

namespace vrv {

//----------------------------------------------------------------------------
// Stringtab
//----------------------------------------------------------------------------

bool AttModule::SetStringtab(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_STAFFDEFVISTABLATURE)) {
        AttStaffDefVisTablature *att = element->GetAtt<AttStaffDefVisTablature>(ATT_STAFFDEFVISTABLATURE);
        assert(att);
        if (attrType == "tab.align") {
            att->SetTabAlign(att->StrToVerticalalignment(attrValue));
            return true;
        }
        if (attrType == "tab.anchorline") {
            att->SetTabAnchorline(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STRINGTAB)) {
        AttStringtab *att = element->GetAtt<AttStringtab>(ATT_STRINGTAB);
        assert(att);
        if (attrType == "tab.fing") {
            att->SetTabFing(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "tab.fret") {
            att->SetTabFret(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "tab.line") {
            att->SetTabLine(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "tab.string") {
            att->SetTabString(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "tab.course") {
            att->SetTabCourse(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STRINGTABPOSITION)) {
        AttStringtabPosition *att = element->GetAtt<AttStringtabPosition>(ATT_STRINGTABPOSITION);
        assert(att);
        if (attrType == "tab.pos") {
            att->SetTabPos(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STRINGTABTUNING)) {
        AttStringtabTuning *att = element->GetAtt<AttStringtabTuning>(ATT_STRINGTABTUNING);
        assert(att);
        if (attrType == "tab.strings") {
            att->SetTabStrings(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "tab.courses") {
            att->SetTabCourses(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetStringtab(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_STAFFDEFVISTABLATURE)) {
        const AttStaffDefVisTablature *att = element->GetAtt<AttStaffDefVisTablature>(ATT_STAFFDEFVISTABLATURE);
        assert(att);
        if (att->HasTabAlign()) {
            attributes->push_back({ "tab.align", att->VerticalalignmentToStr(att->GetTabAlign()) });
        }
        if (att->HasTabAnchorline()) {
            attributes->push_back({ "tab.anchorline", att->IntToStr(att->GetTabAnchorline()) });
        }
    }
    if (element->HasAttClass(ATT_STRINGTAB)) {
        const AttStringtab *att = element->GetAtt<AttStringtab>(ATT_STRINGTAB);
        assert(att);
        if (att->HasTabFing()) {
            attributes->push_back({ "tab.fing", att->StrToStr(att->GetTabFing()) });
        }
        if (att->HasTabFret()) {
            attributes->push_back({ "tab.fret", att->IntToStr(att->GetTabFret()) });
        }
        if (att->HasTabLine()) {
            attributes->push_back({ "tab.line", att->IntToStr(att->GetTabLine()) });
        }
        if (att->HasTabString()) {
            attributes->push_back({ "tab.string", att->StrToStr(att->GetTabString()) });
        }
        if (att->HasTabCourse()) {
            attributes->push_back({ "tab.course", att->IntToStr(att->GetTabCourse()) });
        }
    }
    if (element->HasAttClass(ATT_STRINGTABPOSITION)) {
        const AttStringtabPosition *att = element->GetAtt<AttStringtabPosition>(ATT_STRINGTABPOSITION);
        assert(att);
        if (att->HasTabPos()) {
            attributes->push_back({ "tab.pos", att->IntToStr(att->GetTabPos()) });
        }
    }
    if (element->HasAttClass(ATT_STRINGTABTUNING)) {
        const AttStringtabTuning *att = element->GetAtt<AttStringtabTuning>(ATT_STRINGTABTUNING);
        assert(att);
        if (att->HasTabStrings()) {
            attributes->push_back({ "tab.strings", att->StrToStr(att->GetTabStrings()) });
        }
        if (att->HasTabCourses()) {
            attributes->push_back({ "tab.courses", att->StrToStr(att->GetTabCourses()) });
        }
    }
}

void AttModule::CopyStringtab(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_STAFFDEFVISTABLATURE)) {
        const AttStaffDefVisTablature *att = element->GetAtt<AttStaffDefVisTablature>(ATT_STAFFDEFVISTABLATURE);
        assert(att);
        AttStaffDefVisTablature *attTarget = target->GetAtt<AttStaffDefVisTablature>(ATT_STAFFDEFVISTABLATURE);
        assert(attTarget);
        attTarget->SetTabAlign(att->GetTabAlign());
        attTarget->SetTabAnchorline(att->GetTabAnchorline());
    }
    if (element->HasAttClass(ATT_STRINGTAB)) {
        const AttStringtab *att = element->GetAtt<AttStringtab>(ATT_STRINGTAB);
        assert(att);
        AttStringtab *attTarget = target->GetAtt<AttStringtab>(ATT_STRINGTAB);
        assert(attTarget);
        attTarget->SetTabFing(att->GetTabFing());
        attTarget->SetTabFret(att->GetTabFret());
        attTarget->SetTabLine(att->GetTabLine());
        attTarget->SetTabString(att->GetTabString());
        attTarget->SetTabCourse(att->GetTabCourse());
    }
    if (element->HasAttClass(ATT_STRINGTABPOSITION)) {
        const AttStringtabPosition *att = element->GetAtt<AttStringtabPosition>(ATT_STRINGTABPOSITION);
        assert(att);
        AttStringtabPosition *attTarget = target->GetAtt<AttStringtabPosition>(ATT_STRINGTABPOSITION);
        assert(attTarget);
        attTarget->SetTabPos(att->GetTabPos());
    }
    if (element->HasAttClass(ATT_STRINGTABTUNING)) {
        const AttStringtabTuning *att = element->GetAtt<AttStringtabTuning>(ATT_STRINGTABTUNING);
        assert(att);
        AttStringtabTuning *attTarget = target->GetAtt<AttStringtabTuning>(ATT_STRINGTABTUNING);
        assert(attTarget);
        attTarget->SetTabStrings(att->GetTabStrings());
        attTarget->SetTabCourses(att->GetTabCourses());
    }
}

} // namespace vrv

#include "atts_usersymbols.h"

namespace vrv {

//----------------------------------------------------------------------------
// Usersymbols
//----------------------------------------------------------------------------

bool AttModule::SetUsersymbols(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_ALTSYM)) {
        AttAltSym *att = element->GetAtt<AttAltSym>(ATT_ALTSYM);
        assert(att);
        if (attrType == "altsym") {
            att->SetAltsym(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ANCHOREDTEXTLOG)) {
        AttAnchoredTextLog *att = element->GetAtt<AttAnchoredTextLog>(ATT_ANCHOREDTEXTLOG);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CURVELOG)) {
        AttCurveLog *att = element->GetAtt<AttCurveLog>(ATT_CURVELOG);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LINELOG)) {
        AttLineLog *att = element->GetAtt<AttLineLog>(ATT_LINELOG);
        assert(att);
        if (attrType == "func") {
            att->SetFunc(att->StrToStr(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetUsersymbols(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_ALTSYM)) {
        const AttAltSym *att = element->GetAtt<AttAltSym>(ATT_ALTSYM);
        assert(att);
        if (att->HasAltsym()) {
            attributes->push_back({ "altsym", att->StrToStr(att->GetAltsym()) });
        }
    }
    if (element->HasAttClass(ATT_ANCHOREDTEXTLOG)) {
        const AttAnchoredTextLog *att = element->GetAtt<AttAnchoredTextLog>(ATT_ANCHOREDTEXTLOG);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->StrToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_CURVELOG)) {
        const AttCurveLog *att = element->GetAtt<AttCurveLog>(ATT_CURVELOG);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->StrToStr(att->GetFunc()) });
        }
    }
    if (element->HasAttClass(ATT_LINELOG)) {
        const AttLineLog *att = element->GetAtt<AttLineLog>(ATT_LINELOG);
        assert(att);
        if (att->HasFunc()) {
            attributes->push_back({ "func", att->StrToStr(att->GetFunc()) });
        }
    }
}

void AttModule::CopyUsersymbols(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_ALTSYM)) {
        const AttAltSym *att = element->GetAtt<AttAltSym>(ATT_ALTSYM);
        assert(att);
        AttAltSym *attTarget = target->GetAtt<AttAltSym>(ATT_ALTSYM);
        assert(attTarget);
        attTarget->SetAltsym(att->GetAltsym());
    }
    if (element->HasAttClass(ATT_ANCHOREDTEXTLOG)) {
        const AttAnchoredTextLog *att = element->GetAtt<AttAnchoredTextLog>(ATT_ANCHOREDTEXTLOG);
        assert(att);
        AttAnchoredTextLog *attTarget = target->GetAtt<AttAnchoredTextLog>(ATT_ANCHOREDTEXTLOG);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_CURVELOG)) {
        const AttCurveLog *att = element->GetAtt<AttCurveLog>(ATT_CURVELOG);
        assert(att);
        AttCurveLog *attTarget = target->GetAtt<AttCurveLog>(ATT_CURVELOG);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
    if (element->HasAttClass(ATT_LINELOG)) {
        const AttLineLog *att = element->GetAtt<AttLineLog>(ATT_LINELOG);
        assert(att);
        AttLineLog *attTarget = target->GetAtt<AttLineLog>(ATT_LINELOG);
        assert(attTarget);
        attTarget->SetFunc(att->GetFunc());
    }
}

} // namespace vrv

#include "atts_visual.h"

namespace vrv {

//----------------------------------------------------------------------------
// Visual
//----------------------------------------------------------------------------

bool AttModule::SetVisual(Object *element, const std::string &attrType, const std::string &attrValue)
{
    if (element->HasAttClass(ATT_ANNOTVIS)) {
        AttAnnotVis *att = element->GetAtt<AttAnnotVis>(ATT_ANNOTVIS);
        assert(att);
        if (attrType == "place") {
            att->SetPlace(att->StrToPlacement(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_ARPEGVIS)) {
        AttArpegVis *att = element->GetAtt<AttArpegVis>(ATT_ARPEGVIS);
        assert(att);
        if (attrType == "arrow") {
            att->SetArrow(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "arrow.shape") {
            att->SetArrowShape(att->StrToLinestartendsymbol(attrValue));
            return true;
        }
        if (attrType == "arrow.size") {
            att->SetArrowSize(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "arrow.color") {
            att->SetArrowColor(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "arrow.fillcolor") {
            att->SetArrowFillcolor(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BARLINEVIS)) {
        AttBarLineVis *att = element->GetAtt<AttBarLineVis>(ATT_BARLINEVIS);
        assert(att);
        if (attrType == "len") {
            att->SetLen(att->StrToDbl(attrValue));
            return true;
        }
        if (attrType == "method") {
            att->SetMethod(att->StrToBarmethod(attrValue));
            return true;
        }
        if (attrType == "place") {
            att->SetPlace(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BEAMINGVIS)) {
        AttBeamingVis *att = element->GetAtt<AttBeamingVis>(ATT_BEAMINGVIS);
        assert(att);
        if (attrType == "beam.color") {
            att->SetBeamColor(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "beam.rend") {
            att->SetBeamRend(att->StrToBeamingVisBeamrend(attrValue));
            return true;
        }
        if (attrType == "beam.slope") {
            att->SetBeamSlope(att->StrToDbl(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_BEATRPTVIS)) {
        AttBeatRptVis *att = element->GetAtt<AttBeatRptVis>(ATT_BEATRPTVIS);
        assert(att);
        if (attrType == "slash") {
            att->SetSlash(att->StrToBeatrptRend(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CHORDVIS)) {
        AttChordVis *att = element->GetAtt<AttChordVis>(ATT_CHORDVIS);
        assert(att);
        if (attrType == "cluster") {
            att->SetCluster(att->StrToCluster(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CLEFFINGVIS)) {
        AttCleffingVis *att = element->GetAtt<AttCleffingVis>(ATT_CLEFFINGVIS);
        assert(att);
        if (attrType == "clef.color") {
            att->SetClefColor(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "clef.visible") {
            att->SetClefVisible(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_CURVATUREDIRECTION)) {
        AttCurvatureDirection *att = element->GetAtt<AttCurvatureDirection>(ATT_CURVATUREDIRECTION);
        assert(att);
        if (attrType == "curve") {
            att->SetCurve(att->StrToCurvatureDirectionCurve(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_EPISEMAVIS)) {
        AttEpisemaVis *att = element->GetAtt<AttEpisemaVis>(ATT_EPISEMAVIS);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToEpisemaVisForm(attrValue));
            return true;
        }
        if (attrType == "place") {
            att->SetPlace(att->StrToEventrel(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_FTREMVIS)) {
        AttFTremVis *att = element->GetAtt<AttFTremVis>(ATT_FTREMVIS);
        assert(att);
        if (attrType == "beams") {
            att->SetBeams(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "beams.float") {
            att->SetBeamsFloat(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "float.gap") {
            att->SetFloatGap(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_FERMATAVIS)) {
        AttFermataVis *att = element->GetAtt<AttFermataVis>(ATT_FERMATAVIS);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToFermataVisForm(attrValue));
            return true;
        }
        if (attrType == "shape") {
            att->SetShape(att->StrToFermataVisShape(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_FINGGRPVIS)) {
        AttFingGrpVis *att = element->GetAtt<AttFingGrpVis>(ATT_FINGGRPVIS);
        assert(att);
        if (attrType == "orient") {
            att->SetOrient(att->StrToFingGrpVisOrient(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_GUITARGRIDVIS)) {
        AttGuitarGridVis *att = element->GetAtt<AttGuitarGridVis>(ATT_GUITARGRIDVIS);
        assert(att);
        if (attrType == "grid.show") {
            att->SetGridShow(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_HAIRPINVIS)) {
        AttHairpinVis *att = element->GetAtt<AttHairpinVis>(ATT_HAIRPINVIS);
        assert(att);
        if (attrType == "opening") {
            att->SetOpening(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "closed") {
            att->SetClosed(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "opening.vertical") {
            att->SetOpeningVertical(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "angle.optimize") {
            att->SetAngleOptimize(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_HARMVIS)) {
        AttHarmVis *att = element->GetAtt<AttHarmVis>(ATT_HARMVIS);
        assert(att);
        if (attrType == "rendgrid") {
            att->SetRendgrid(att->StrToHarmVisRendgrid(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_HISPANTICKVIS)) {
        AttHispanTickVis *att = element->GetAtt<AttHispanTickVis>(ATT_HISPANTICKVIS);
        assert(att);
        if (attrType == "place") {
            att->SetPlace(att->StrToEventrel(attrValue));
            return true;
        }
        if (attrType == "tilt") {
            att->SetTilt(att->StrToCompassdirection(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_KEYSIGVIS)) {
        AttKeySigVis *att = element->GetAtt<AttKeySigVis>(ATT_KEYSIGVIS);
        assert(att);
        if (attrType == "cancelaccid") {
            att->SetCancelaccid(att->StrToCancelaccid(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_KEYSIGDEFAULTVIS)) {
        AttKeySigDefaultVis *att = element->GetAtt<AttKeySigDefaultVis>(ATT_KEYSIGDEFAULTVIS);
        assert(att);
        if (attrType == "keysig.cancelaccid") {
            att->SetKeysigCancelaccid(att->StrToCancelaccid(attrValue));
            return true;
        }
        if (attrType == "keysig.visible") {
            att->SetKeysigVisible(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LIGATUREVIS)) {
        AttLigatureVis *att = element->GetAtt<AttLigatureVis>(ATT_LIGATUREVIS);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToLigatureform(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LINEVIS)) {
        AttLineVis *att = element->GetAtt<AttLineVis>(ATT_LINEVIS);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToLineform(attrValue));
            return true;
        }
        if (attrType == "width") {
            att->SetWidth(att->StrToLinewidth(attrValue));
            return true;
        }
        if (attrType == "endsym") {
            att->SetEndsym(att->StrToLinestartendsymbol(attrValue));
            return true;
        }
        if (attrType == "endsym.size") {
            att->SetEndsymSize(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "startsym") {
            att->SetStartsym(att->StrToLinestartendsymbol(attrValue));
            return true;
        }
        if (attrType == "startsym.size") {
            att->SetStartsymSize(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_LIQUESCENTVIS)) {
        AttLiquescentVis *att = element->GetAtt<AttLiquescentVis>(ATT_LIQUESCENTVIS);
        assert(att);
        if (attrType == "looped") {
            att->SetLooped(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MENSURVIS)) {
        AttMensurVis *att = element->GetAtt<AttMensurVis>(ATT_MENSURVIS);
        assert(att);
        if (attrType == "dot") {
            att->SetDot(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "form") {
            att->SetForm(att->StrToMensurVisForm(attrValue));
            return true;
        }
        if (attrType == "orient") {
            att->SetOrient(att->StrToOrientation(attrValue));
            return true;
        }
        if (attrType == "sign") {
            att->SetSign(att->StrToMensurationsign(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MENSURALVIS)) {
        AttMensuralVis *att = element->GetAtt<AttMensuralVis>(ATT_MENSURALVIS);
        assert(att);
        if (attrType == "mensur.color") {
            att->SetMensurColor(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "mensur.dot") {
            att->SetMensurDot(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "mensur.form") {
            att->SetMensurForm(att->StrToMensuralVisMensurform(attrValue));
            return true;
        }
        if (attrType == "mensur.loc") {
            att->SetMensurLoc(att->StrToInt(attrValue));
            return true;
        }
        if (attrType == "mensur.orient") {
            att->SetMensurOrient(att->StrToOrientation(attrValue));
            return true;
        }
        if (attrType == "mensur.sign") {
            att->SetMensurSign(att->StrToMensurationsign(attrValue));
            return true;
        }
        if (attrType == "mensur.size") {
            att->SetMensurSize(att->StrToFontsize(attrValue));
            return true;
        }
        if (attrType == "mensur.slash") {
            att->SetMensurSlash(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_METERSIGVIS)) {
        AttMeterSigVis *att = element->GetAtt<AttMeterSigVis>(ATT_METERSIGVIS);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToMeterform(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_METERSIGDEFAULTVIS)) {
        AttMeterSigDefaultVis *att = element->GetAtt<AttMeterSigDefaultVis>(ATT_METERSIGDEFAULTVIS);
        assert(att);
        if (attrType == "meter.form") {
            att->SetMeterForm(att->StrToMeterform(attrValue));
            return true;
        }
        if (attrType == "meter.showchange") {
            att->SetMeterShowchange(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "meter.visible") {
            att->SetMeterVisible(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_MULTIRESTVIS)) {
        AttMultiRestVis *att = element->GetAtt<AttMultiRestVis>(ATT_MULTIRESTVIS);
        assert(att);
        if (attrType == "block") {
            att->SetBlock(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PBVIS)) {
        AttPbVis *att = element->GetAtt<AttPbVis>(ATT_PBVIS);
        assert(att);
        if (attrType == "folium") {
            att->SetFolium(att->StrToPbVisFolium(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PEDALVIS)) {
        AttPedalVis *att = element->GetAtt<AttPedalVis>(ATT_PEDALVIS);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToPedalstyle(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_PLICAVIS)) {
        AttPlicaVis *att = element->GetAtt<AttPlicaVis>(ATT_PLICAVIS);
        assert(att);
        if (attrType == "dir") {
            att->SetDir(att->StrToStemdirectionBasic(attrValue));
            return true;
        }
        if (attrType == "len") {
            att->SetLen(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_QUILISMAVIS)) {
        AttQuilismaVis *att = element->GetAtt<AttQuilismaVis>(ATT_QUILISMAVIS);
        assert(att);
        if (attrType == "waves") {
            att->SetWaves(att->StrToInt(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SBVIS)) {
        AttSbVis *att = element->GetAtt<AttSbVis>(ATT_SBVIS);
        assert(att);
        if (attrType == "form") {
            att->SetForm(att->StrToSbVisForm(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SCOREDEFVIS)) {
        AttScoreDefVis *att = element->GetAtt<AttScoreDefVis>(ATT_SCOREDEFVIS);
        assert(att);
        if (attrType == "vu.height") {
            att->SetVuHeight(att->StrToStr(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SECTIONVIS)) {
        AttSectionVis *att = element->GetAtt<AttSectionVis>(ATT_SECTIONVIS);
        assert(att);
        if (attrType == "restart") {
            att->SetRestart(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SIGNIFLETVIS)) {
        AttSignifLetVis *att = element->GetAtt<AttSignifLetVis>(ATT_SIGNIFLETVIS);
        assert(att);
        if (attrType == "place") {
            att->SetPlace(att->StrToEventrel(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_SPACEVIS)) {
        AttSpaceVis *att = element->GetAtt<AttSpaceVis>(ATT_SPACEVIS);
        assert(att);
        if (attrType == "compressable") {
            att->SetCompressable(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STAFFDEFVIS)) {
        AttStaffDefVis *att = element->GetAtt<AttStaffDefVis>(ATT_STAFFDEFVIS);
        assert(att);
        if (attrType == "layerscheme") {
            att->SetLayerscheme(att->StrToLayerscheme(attrValue));
            return true;
        }
        if (attrType == "lines.color") {
            att->SetLinesColor(att->StrToStr(attrValue));
            return true;
        }
        if (attrType == "lines.visible") {
            att->SetLinesVisible(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "spacing") {
            att->SetSpacing(att->StrToMeasurementsigned(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STAFFGRPVIS)) {
        AttStaffGrpVis *att = element->GetAtt<AttStaffGrpVis>(ATT_STAFFGRPVIS);
        assert(att);
        if (attrType == "bar.thru") {
            att->SetBarThru(att->StrToBoolean(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_STEMVIS)) {
        AttStemVis *att = element->GetAtt<AttStemVis>(ATT_STEMVIS);
        assert(att);
        if (attrType == "pos") {
            att->SetPos(att->StrToStemposition(attrValue));
            return true;
        }
        if (attrType == "len") {
            att->SetLen(att->StrToMeasurementunsigned(attrValue));
            return true;
        }
        if (attrType == "form") {
            att->SetForm(att->StrToStemformMensural(attrValue));
            return true;
        }
        if (attrType == "dir") {
            att->SetDir(att->StrToStemdirection(attrValue));
            return true;
        }
        if (attrType == "flag.pos") {
            att->SetFlagPos(att->StrToFlagposMensural(attrValue));
            return true;
        }
        if (attrType == "flag.form") {
            att->SetFlagForm(att->StrToFlagformMensural(attrValue));
            return true;
        }
    }
    if (element->HasAttClass(ATT_TUPLETVIS)) {
        AttTupletVis *att = element->GetAtt<AttTupletVis>(ATT_TUPLETVIS);
        assert(att);
        if (attrType == "bracket.place") {
            att->SetBracketPlace(att->StrToStaffrelBasic(attrValue));
            return true;
        }
        if (attrType == "bracket.visible") {
            att->SetBracketVisible(att->StrToBoolean(attrValue));
            return true;
        }
        if (attrType == "num.format") {
            att->SetNumFormat(att->StrToTupletVisNumformat(attrValue));
            return true;
        }
    }

    return false;
}

void AttModule::GetVisual(const Object *element, ArrayOfStrAttr *attributes)
{
    if (element->HasAttClass(ATT_ANNOTVIS)) {
        const AttAnnotVis *att = element->GetAtt<AttAnnotVis>(ATT_ANNOTVIS);
        assert(att);
        if (att->HasPlace()) {
            attributes->push_back({ "place", att->PlacementToStr(att->GetPlace()) });
        }
    }
    if (element->HasAttClass(ATT_ARPEGVIS)) {
        const AttArpegVis *att = element->GetAtt<AttArpegVis>(ATT_ARPEGVIS);
        assert(att);
        if (att->HasArrow()) {
            attributes->push_back({ "arrow", att->BooleanToStr(att->GetArrow()) });
        }
        if (att->HasArrowShape()) {
            attributes->push_back({ "arrow.shape", att->LinestartendsymbolToStr(att->GetArrowShape()) });
        }
        if (att->HasArrowSize()) {
            attributes->push_back({ "arrow.size", att->IntToStr(att->GetArrowSize()) });
        }
        if (att->HasArrowColor()) {
            attributes->push_back({ "arrow.color", att->StrToStr(att->GetArrowColor()) });
        }
        if (att->HasArrowFillcolor()) {
            attributes->push_back({ "arrow.fillcolor", att->StrToStr(att->GetArrowFillcolor()) });
        }
    }
    if (element->HasAttClass(ATT_BARLINEVIS)) {
        const AttBarLineVis *att = element->GetAtt<AttBarLineVis>(ATT_BARLINEVIS);
        assert(att);
        if (att->HasLen()) {
            attributes->push_back({ "len", att->DblToStr(att->GetLen()) });
        }
        if (att->HasMethod()) {
            attributes->push_back({ "method", att->BarmethodToStr(att->GetMethod()) });
        }
        if (att->HasPlace()) {
            attributes->push_back({ "place", att->IntToStr(att->GetPlace()) });
        }
    }
    if (element->HasAttClass(ATT_BEAMINGVIS)) {
        const AttBeamingVis *att = element->GetAtt<AttBeamingVis>(ATT_BEAMINGVIS);
        assert(att);
        if (att->HasBeamColor()) {
            attributes->push_back({ "beam.color", att->StrToStr(att->GetBeamColor()) });
        }
        if (att->HasBeamRend()) {
            attributes->push_back({ "beam.rend", att->BeamingVisBeamrendToStr(att->GetBeamRend()) });
        }
        if (att->HasBeamSlope()) {
            attributes->push_back({ "beam.slope", att->DblToStr(att->GetBeamSlope()) });
        }
    }
    if (element->HasAttClass(ATT_BEATRPTVIS)) {
        const AttBeatRptVis *att = element->GetAtt<AttBeatRptVis>(ATT_BEATRPTVIS);
        assert(att);
        if (att->HasSlash()) {
            attributes->push_back({ "slash", att->BeatrptRendToStr(att->GetSlash()) });
        }
    }
    if (element->HasAttClass(ATT_CHORDVIS)) {
        const AttChordVis *att = element->GetAtt<AttChordVis>(ATT_CHORDVIS);
        assert(att);
        if (att->HasCluster()) {
            attributes->push_back({ "cluster", att->ClusterToStr(att->GetCluster()) });
        }
    }
    if (element->HasAttClass(ATT_CLEFFINGVIS)) {
        const AttCleffingVis *att = element->GetAtt<AttCleffingVis>(ATT_CLEFFINGVIS);
        assert(att);
        if (att->HasClefColor()) {
            attributes->push_back({ "clef.color", att->StrToStr(att->GetClefColor()) });
        }
        if (att->HasClefVisible()) {
            attributes->push_back({ "clef.visible", att->BooleanToStr(att->GetClefVisible()) });
        }
    }
    if (element->HasAttClass(ATT_CURVATUREDIRECTION)) {
        const AttCurvatureDirection *att = element->GetAtt<AttCurvatureDirection>(ATT_CURVATUREDIRECTION);
        assert(att);
        if (att->HasCurve()) {
            attributes->push_back({ "curve", att->CurvatureDirectionCurveToStr(att->GetCurve()) });
        }
    }
    if (element->HasAttClass(ATT_EPISEMAVIS)) {
        const AttEpisemaVis *att = element->GetAtt<AttEpisemaVis>(ATT_EPISEMAVIS);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->EpisemaVisFormToStr(att->GetForm()) });
        }
        if (att->HasPlace()) {
            attributes->push_back({ "place", att->EventrelToStr(att->GetPlace()) });
        }
    }
    if (element->HasAttClass(ATT_FTREMVIS)) {
        const AttFTremVis *att = element->GetAtt<AttFTremVis>(ATT_FTREMVIS);
        assert(att);
        if (att->HasBeams()) {
            attributes->push_back({ "beams", att->IntToStr(att->GetBeams()) });
        }
        if (att->HasBeamsFloat()) {
            attributes->push_back({ "beams.float", att->IntToStr(att->GetBeamsFloat()) });
        }
        if (att->HasFloatGap()) {
            attributes->push_back({ "float.gap", att->MeasurementunsignedToStr(att->GetFloatGap()) });
        }
    }
    if (element->HasAttClass(ATT_FERMATAVIS)) {
        const AttFermataVis *att = element->GetAtt<AttFermataVis>(ATT_FERMATAVIS);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->FermataVisFormToStr(att->GetForm()) });
        }
        if (att->HasShape()) {
            attributes->push_back({ "shape", att->FermataVisShapeToStr(att->GetShape()) });
        }
    }
    if (element->HasAttClass(ATT_FINGGRPVIS)) {
        const AttFingGrpVis *att = element->GetAtt<AttFingGrpVis>(ATT_FINGGRPVIS);
        assert(att);
        if (att->HasOrient()) {
            attributes->push_back({ "orient", att->FingGrpVisOrientToStr(att->GetOrient()) });
        }
    }
    if (element->HasAttClass(ATT_GUITARGRIDVIS)) {
        const AttGuitarGridVis *att = element->GetAtt<AttGuitarGridVis>(ATT_GUITARGRIDVIS);
        assert(att);
        if (att->HasGridShow()) {
            attributes->push_back({ "grid.show", att->BooleanToStr(att->GetGridShow()) });
        }
    }
    if (element->HasAttClass(ATT_HAIRPINVIS)) {
        const AttHairpinVis *att = element->GetAtt<AttHairpinVis>(ATT_HAIRPINVIS);
        assert(att);
        if (att->HasOpening()) {
            attributes->push_back({ "opening", att->MeasurementunsignedToStr(att->GetOpening()) });
        }
        if (att->HasClosed()) {
            attributes->push_back({ "closed", att->BooleanToStr(att->GetClosed()) });
        }
        if (att->HasOpeningVertical()) {
            attributes->push_back({ "opening.vertical", att->BooleanToStr(att->GetOpeningVertical()) });
        }
        if (att->HasAngleOptimize()) {
            attributes->push_back({ "angle.optimize", att->BooleanToStr(att->GetAngleOptimize()) });
        }
    }
    if (element->HasAttClass(ATT_HARMVIS)) {
        const AttHarmVis *att = element->GetAtt<AttHarmVis>(ATT_HARMVIS);
        assert(att);
        if (att->HasRendgrid()) {
            attributes->push_back({ "rendgrid", att->HarmVisRendgridToStr(att->GetRendgrid()) });
        }
    }
    if (element->HasAttClass(ATT_HISPANTICKVIS)) {
        const AttHispanTickVis *att = element->GetAtt<AttHispanTickVis>(ATT_HISPANTICKVIS);
        assert(att);
        if (att->HasPlace()) {
            attributes->push_back({ "place", att->EventrelToStr(att->GetPlace()) });
        }
        if (att->HasTilt()) {
            attributes->push_back({ "tilt", att->CompassdirectionToStr(att->GetTilt()) });
        }
    }
    if (element->HasAttClass(ATT_KEYSIGVIS)) {
        const AttKeySigVis *att = element->GetAtt<AttKeySigVis>(ATT_KEYSIGVIS);
        assert(att);
        if (att->HasCancelaccid()) {
            attributes->push_back({ "cancelaccid", att->CancelaccidToStr(att->GetCancelaccid()) });
        }
    }
    if (element->HasAttClass(ATT_KEYSIGDEFAULTVIS)) {
        const AttKeySigDefaultVis *att = element->GetAtt<AttKeySigDefaultVis>(ATT_KEYSIGDEFAULTVIS);
        assert(att);
        if (att->HasKeysigCancelaccid()) {
            attributes->push_back({ "keysig.cancelaccid", att->CancelaccidToStr(att->GetKeysigCancelaccid()) });
        }
        if (att->HasKeysigVisible()) {
            attributes->push_back({ "keysig.visible", att->BooleanToStr(att->GetKeysigVisible()) });
        }
    }
    if (element->HasAttClass(ATT_LIGATUREVIS)) {
        const AttLigatureVis *att = element->GetAtt<AttLigatureVis>(ATT_LIGATUREVIS);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->LigatureformToStr(att->GetForm()) });
        }
    }
    if (element->HasAttClass(ATT_LINEVIS)) {
        const AttLineVis *att = element->GetAtt<AttLineVis>(ATT_LINEVIS);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->LineformToStr(att->GetForm()) });
        }
        if (att->HasWidth()) {
            attributes->push_back({ "width", att->LinewidthToStr(att->GetWidth()) });
        }
        if (att->HasEndsym()) {
            attributes->push_back({ "endsym", att->LinestartendsymbolToStr(att->GetEndsym()) });
        }
        if (att->HasEndsymSize()) {
            attributes->push_back({ "endsym.size", att->IntToStr(att->GetEndsymSize()) });
        }
        if (att->HasStartsym()) {
            attributes->push_back({ "startsym", att->LinestartendsymbolToStr(att->GetStartsym()) });
        }
        if (att->HasStartsymSize()) {
            attributes->push_back({ "startsym.size", att->IntToStr(att->GetStartsymSize()) });
        }
    }
    if (element->HasAttClass(ATT_LIQUESCENTVIS)) {
        const AttLiquescentVis *att = element->GetAtt<AttLiquescentVis>(ATT_LIQUESCENTVIS);
        assert(att);
        if (att->HasLooped()) {
            attributes->push_back({ "looped", att->BooleanToStr(att->GetLooped()) });
        }
    }
    if (element->HasAttClass(ATT_MENSURVIS)) {
        const AttMensurVis *att = element->GetAtt<AttMensurVis>(ATT_MENSURVIS);
        assert(att);
        if (att->HasDot()) {
            attributes->push_back({ "dot", att->BooleanToStr(att->GetDot()) });
        }
        if (att->HasForm()) {
            attributes->push_back({ "form", att->MensurVisFormToStr(att->GetForm()) });
        }
        if (att->HasOrient()) {
            attributes->push_back({ "orient", att->OrientationToStr(att->GetOrient()) });
        }
        if (att->HasSign()) {
            attributes->push_back({ "sign", att->MensurationsignToStr(att->GetSign()) });
        }
    }
    if (element->HasAttClass(ATT_MENSURALVIS)) {
        const AttMensuralVis *att = element->GetAtt<AttMensuralVis>(ATT_MENSURALVIS);
        assert(att);
        if (att->HasMensurColor()) {
            attributes->push_back({ "mensur.color", att->StrToStr(att->GetMensurColor()) });
        }
        if (att->HasMensurDot()) {
            attributes->push_back({ "mensur.dot", att->BooleanToStr(att->GetMensurDot()) });
        }
        if (att->HasMensurForm()) {
            attributes->push_back({ "mensur.form", att->MensuralVisMensurformToStr(att->GetMensurForm()) });
        }
        if (att->HasMensurLoc()) {
            attributes->push_back({ "mensur.loc", att->IntToStr(att->GetMensurLoc()) });
        }
        if (att->HasMensurOrient()) {
            attributes->push_back({ "mensur.orient", att->OrientationToStr(att->GetMensurOrient()) });
        }
        if (att->HasMensurSign()) {
            attributes->push_back({ "mensur.sign", att->MensurationsignToStr(att->GetMensurSign()) });
        }
        if (att->HasMensurSize()) {
            attributes->push_back({ "mensur.size", att->FontsizeToStr(att->GetMensurSize()) });
        }
        if (att->HasMensurSlash()) {
            attributes->push_back({ "mensur.slash", att->IntToStr(att->GetMensurSlash()) });
        }
    }
    if (element->HasAttClass(ATT_METERSIGVIS)) {
        const AttMeterSigVis *att = element->GetAtt<AttMeterSigVis>(ATT_METERSIGVIS);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->MeterformToStr(att->GetForm()) });
        }
    }
    if (element->HasAttClass(ATT_METERSIGDEFAULTVIS)) {
        const AttMeterSigDefaultVis *att = element->GetAtt<AttMeterSigDefaultVis>(ATT_METERSIGDEFAULTVIS);
        assert(att);
        if (att->HasMeterForm()) {
            attributes->push_back({ "meter.form", att->MeterformToStr(att->GetMeterForm()) });
        }
        if (att->HasMeterShowchange()) {
            attributes->push_back({ "meter.showchange", att->BooleanToStr(att->GetMeterShowchange()) });
        }
        if (att->HasMeterVisible()) {
            attributes->push_back({ "meter.visible", att->BooleanToStr(att->GetMeterVisible()) });
        }
    }
    if (element->HasAttClass(ATT_MULTIRESTVIS)) {
        const AttMultiRestVis *att = element->GetAtt<AttMultiRestVis>(ATT_MULTIRESTVIS);
        assert(att);
        if (att->HasBlock()) {
            attributes->push_back({ "block", att->BooleanToStr(att->GetBlock()) });
        }
    }
    if (element->HasAttClass(ATT_PBVIS)) {
        const AttPbVis *att = element->GetAtt<AttPbVis>(ATT_PBVIS);
        assert(att);
        if (att->HasFolium()) {
            attributes->push_back({ "folium", att->PbVisFoliumToStr(att->GetFolium()) });
        }
    }
    if (element->HasAttClass(ATT_PEDALVIS)) {
        const AttPedalVis *att = element->GetAtt<AttPedalVis>(ATT_PEDALVIS);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->PedalstyleToStr(att->GetForm()) });
        }
    }
    if (element->HasAttClass(ATT_PLICAVIS)) {
        const AttPlicaVis *att = element->GetAtt<AttPlicaVis>(ATT_PLICAVIS);
        assert(att);
        if (att->HasDir()) {
            attributes->push_back({ "dir", att->StemdirectionBasicToStr(att->GetDir()) });
        }
        if (att->HasLen()) {
            attributes->push_back({ "len", att->MeasurementunsignedToStr(att->GetLen()) });
        }
    }
    if (element->HasAttClass(ATT_QUILISMAVIS)) {
        const AttQuilismaVis *att = element->GetAtt<AttQuilismaVis>(ATT_QUILISMAVIS);
        assert(att);
        if (att->HasWaves()) {
            attributes->push_back({ "waves", att->IntToStr(att->GetWaves()) });
        }
    }
    if (element->HasAttClass(ATT_SBVIS)) {
        const AttSbVis *att = element->GetAtt<AttSbVis>(ATT_SBVIS);
        assert(att);
        if (att->HasForm()) {
            attributes->push_back({ "form", att->SbVisFormToStr(att->GetForm()) });
        }
    }
    if (element->HasAttClass(ATT_SCOREDEFVIS)) {
        const AttScoreDefVis *att = element->GetAtt<AttScoreDefVis>(ATT_SCOREDEFVIS);
        assert(att);
        if (att->HasVuHeight()) {
            attributes->push_back({ "vu.height", att->StrToStr(att->GetVuHeight()) });
        }
    }
    if (element->HasAttClass(ATT_SECTIONVIS)) {
        const AttSectionVis *att = element->GetAtt<AttSectionVis>(ATT_SECTIONVIS);
        assert(att);
        if (att->HasRestart()) {
            attributes->push_back({ "restart", att->BooleanToStr(att->GetRestart()) });
        }
    }
    if (element->HasAttClass(ATT_SIGNIFLETVIS)) {
        const AttSignifLetVis *att = element->GetAtt<AttSignifLetVis>(ATT_SIGNIFLETVIS);
        assert(att);
        if (att->HasPlace()) {
            attributes->push_back({ "place", att->EventrelToStr(att->GetPlace()) });
        }
    }
    if (element->HasAttClass(ATT_SPACEVIS)) {
        const AttSpaceVis *att = element->GetAtt<AttSpaceVis>(ATT_SPACEVIS);
        assert(att);
        if (att->HasCompressable()) {
            attributes->push_back({ "compressable", att->BooleanToStr(att->GetCompressable()) });
        }
    }
    if (element->HasAttClass(ATT_STAFFDEFVIS)) {
        const AttStaffDefVis *att = element->GetAtt<AttStaffDefVis>(ATT_STAFFDEFVIS);
        assert(att);
        if (att->HasLayerscheme()) {
            attributes->push_back({ "layerscheme", att->LayerschemeToStr(att->GetLayerscheme()) });
        }
        if (att->HasLinesColor()) {
            attributes->push_back({ "lines.color", att->StrToStr(att->GetLinesColor()) });
        }
        if (att->HasLinesVisible()) {
            attributes->push_back({ "lines.visible", att->BooleanToStr(att->GetLinesVisible()) });
        }
        if (att->HasSpacing()) {
            attributes->push_back({ "spacing", att->MeasurementsignedToStr(att->GetSpacing()) });
        }
    }
    if (element->HasAttClass(ATT_STAFFGRPVIS)) {
        const AttStaffGrpVis *att = element->GetAtt<AttStaffGrpVis>(ATT_STAFFGRPVIS);
        assert(att);
        if (att->HasBarThru()) {
            attributes->push_back({ "bar.thru", att->BooleanToStr(att->GetBarThru()) });
        }
    }
    if (element->HasAttClass(ATT_STEMVIS)) {
        const AttStemVis *att = element->GetAtt<AttStemVis>(ATT_STEMVIS);
        assert(att);
        if (att->HasPos()) {
            attributes->push_back({ "pos", att->StempositionToStr(att->GetPos()) });
        }
        if (att->HasLen()) {
            attributes->push_back({ "len", att->MeasurementunsignedToStr(att->GetLen()) });
        }
        if (att->HasForm()) {
            attributes->push_back({ "form", att->StemformMensuralToStr(att->GetForm()) });
        }
        if (att->HasDir()) {
            attributes->push_back({ "dir", att->StemdirectionToStr(att->GetDir()) });
        }
        if (att->HasFlagPos()) {
            attributes->push_back({ "flag.pos", att->FlagposMensuralToStr(att->GetFlagPos()) });
        }
        if (att->HasFlagForm()) {
            attributes->push_back({ "flag.form", att->FlagformMensuralToStr(att->GetFlagForm()) });
        }
    }
    if (element->HasAttClass(ATT_TUPLETVIS)) {
        const AttTupletVis *att = element->GetAtt<AttTupletVis>(ATT_TUPLETVIS);
        assert(att);
        if (att->HasBracketPlace()) {
            attributes->push_back({ "bracket.place", att->StaffrelBasicToStr(att->GetBracketPlace()) });
        }
        if (att->HasBracketVisible()) {
            attributes->push_back({ "bracket.visible", att->BooleanToStr(att->GetBracketVisible()) });
        }
        if (att->HasNumFormat()) {
            attributes->push_back({ "num.format", att->TupletVisNumformatToStr(att->GetNumFormat()) });
        }
    }
}

void AttModule::CopyVisual(const Object *element, Object *target)
{
    if (element->HasAttClass(ATT_ANNOTVIS)) {
        const AttAnnotVis *att = element->GetAtt<AttAnnotVis>(ATT_ANNOTVIS);
        assert(att);
        AttAnnotVis *attTarget = target->GetAtt<AttAnnotVis>(ATT_ANNOTVIS);
        assert(attTarget);
        attTarget->SetPlace(att->GetPlace());
    }
    if (element->HasAttClass(ATT_ARPEGVIS)) {
        const AttArpegVis *att = element->GetAtt<AttArpegVis>(ATT_ARPEGVIS);
        assert(att);
        AttArpegVis *attTarget = target->GetAtt<AttArpegVis>(ATT_ARPEGVIS);
        assert(attTarget);
        attTarget->SetArrow(att->GetArrow());
        attTarget->SetArrowShape(att->GetArrowShape());
        attTarget->SetArrowSize(att->GetArrowSize());
        attTarget->SetArrowColor(att->GetArrowColor());
        attTarget->SetArrowFillcolor(att->GetArrowFillcolor());
    }
    if (element->HasAttClass(ATT_BARLINEVIS)) {
        const AttBarLineVis *att = element->GetAtt<AttBarLineVis>(ATT_BARLINEVIS);
        assert(att);
        AttBarLineVis *attTarget = target->GetAtt<AttBarLineVis>(ATT_BARLINEVIS);
        assert(attTarget);
        attTarget->SetLen(att->GetLen());
        attTarget->SetMethod(att->GetMethod());
        attTarget->SetPlace(att->GetPlace());
    }
    if (element->HasAttClass(ATT_BEAMINGVIS)) {
        const AttBeamingVis *att = element->GetAtt<AttBeamingVis>(ATT_BEAMINGVIS);
        assert(att);
        AttBeamingVis *attTarget = target->GetAtt<AttBeamingVis>(ATT_BEAMINGVIS);
        assert(attTarget);
        attTarget->SetBeamColor(att->GetBeamColor());
        attTarget->SetBeamRend(att->GetBeamRend());
        attTarget->SetBeamSlope(att->GetBeamSlope());
    }
    if (element->HasAttClass(ATT_BEATRPTVIS)) {
        const AttBeatRptVis *att = element->GetAtt<AttBeatRptVis>(ATT_BEATRPTVIS);
        assert(att);
        AttBeatRptVis *attTarget = target->GetAtt<AttBeatRptVis>(ATT_BEATRPTVIS);
        assert(attTarget);
        attTarget->SetSlash(att->GetSlash());
    }
    if (element->HasAttClass(ATT_CHORDVIS)) {
        const AttChordVis *att = element->GetAtt<AttChordVis>(ATT_CHORDVIS);
        assert(att);
        AttChordVis *attTarget = target->GetAtt<AttChordVis>(ATT_CHORDVIS);
        assert(attTarget);
        attTarget->SetCluster(att->GetCluster());
    }
    if (element->HasAttClass(ATT_CLEFFINGVIS)) {
        const AttCleffingVis *att = element->GetAtt<AttCleffingVis>(ATT_CLEFFINGVIS);
        assert(att);
        AttCleffingVis *attTarget = target->GetAtt<AttCleffingVis>(ATT_CLEFFINGVIS);
        assert(attTarget);
        attTarget->SetClefColor(att->GetClefColor());
        attTarget->SetClefVisible(att->GetClefVisible());
    }
    if (element->HasAttClass(ATT_CURVATUREDIRECTION)) {
        const AttCurvatureDirection *att = element->GetAtt<AttCurvatureDirection>(ATT_CURVATUREDIRECTION);
        assert(att);
        AttCurvatureDirection *attTarget = target->GetAtt<AttCurvatureDirection>(ATT_CURVATUREDIRECTION);
        assert(attTarget);
        attTarget->SetCurve(att->GetCurve());
    }
    if (element->HasAttClass(ATT_EPISEMAVIS)) {
        const AttEpisemaVis *att = element->GetAtt<AttEpisemaVis>(ATT_EPISEMAVIS);
        assert(att);
        AttEpisemaVis *attTarget = target->GetAtt<AttEpisemaVis>(ATT_EPISEMAVIS);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
        attTarget->SetPlace(att->GetPlace());
    }
    if (element->HasAttClass(ATT_FTREMVIS)) {
        const AttFTremVis *att = element->GetAtt<AttFTremVis>(ATT_FTREMVIS);
        assert(att);
        AttFTremVis *attTarget = target->GetAtt<AttFTremVis>(ATT_FTREMVIS);
        assert(attTarget);
        attTarget->SetBeams(att->GetBeams());
        attTarget->SetBeamsFloat(att->GetBeamsFloat());
        attTarget->SetFloatGap(att->GetFloatGap());
    }
    if (element->HasAttClass(ATT_FERMATAVIS)) {
        const AttFermataVis *att = element->GetAtt<AttFermataVis>(ATT_FERMATAVIS);
        assert(att);
        AttFermataVis *attTarget = target->GetAtt<AttFermataVis>(ATT_FERMATAVIS);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
        attTarget->SetShape(att->GetShape());
    }
    if (element->HasAttClass(ATT_FINGGRPVIS)) {
        const AttFingGrpVis *att = element->GetAtt<AttFingGrpVis>(ATT_FINGGRPVIS);
        assert(att);
        AttFingGrpVis *attTarget = target->GetAtt<AttFingGrpVis>(ATT_FINGGRPVIS);
        assert(attTarget);
        attTarget->SetOrient(att->GetOrient());
    }
    if (element->HasAttClass(ATT_GUITARGRIDVIS)) {
        const AttGuitarGridVis *att = element->GetAtt<AttGuitarGridVis>(ATT_GUITARGRIDVIS);
        assert(att);
        AttGuitarGridVis *attTarget = target->GetAtt<AttGuitarGridVis>(ATT_GUITARGRIDVIS);
        assert(attTarget);
        attTarget->SetGridShow(att->GetGridShow());
    }
    if (element->HasAttClass(ATT_HAIRPINVIS)) {
        const AttHairpinVis *att = element->GetAtt<AttHairpinVis>(ATT_HAIRPINVIS);
        assert(att);
        AttHairpinVis *attTarget = target->GetAtt<AttHairpinVis>(ATT_HAIRPINVIS);
        assert(attTarget);
        attTarget->SetOpening(att->GetOpening());
        attTarget->SetClosed(att->GetClosed());
        attTarget->SetOpeningVertical(att->GetOpeningVertical());
        attTarget->SetAngleOptimize(att->GetAngleOptimize());
    }
    if (element->HasAttClass(ATT_HARMVIS)) {
        const AttHarmVis *att = element->GetAtt<AttHarmVis>(ATT_HARMVIS);
        assert(att);
        AttHarmVis *attTarget = target->GetAtt<AttHarmVis>(ATT_HARMVIS);
        assert(attTarget);
        attTarget->SetRendgrid(att->GetRendgrid());
    }
    if (element->HasAttClass(ATT_HISPANTICKVIS)) {
        const AttHispanTickVis *att = element->GetAtt<AttHispanTickVis>(ATT_HISPANTICKVIS);
        assert(att);
        AttHispanTickVis *attTarget = target->GetAtt<AttHispanTickVis>(ATT_HISPANTICKVIS);
        assert(attTarget);
        attTarget->SetPlace(att->GetPlace());
        attTarget->SetTilt(att->GetTilt());
    }
    if (element->HasAttClass(ATT_KEYSIGVIS)) {
        const AttKeySigVis *att = element->GetAtt<AttKeySigVis>(ATT_KEYSIGVIS);
        assert(att);
        AttKeySigVis *attTarget = target->GetAtt<AttKeySigVis>(ATT_KEYSIGVIS);
        assert(attTarget);
        attTarget->SetCancelaccid(att->GetCancelaccid());
    }
    if (element->HasAttClass(ATT_KEYSIGDEFAULTVIS)) {
        const AttKeySigDefaultVis *att = element->GetAtt<AttKeySigDefaultVis>(ATT_KEYSIGDEFAULTVIS);
        assert(att);
        AttKeySigDefaultVis *attTarget = target->GetAtt<AttKeySigDefaultVis>(ATT_KEYSIGDEFAULTVIS);
        assert(attTarget);
        attTarget->SetKeysigCancelaccid(att->GetKeysigCancelaccid());
        attTarget->SetKeysigVisible(att->GetKeysigVisible());
    }
    if (element->HasAttClass(ATT_LIGATUREVIS)) {
        const AttLigatureVis *att = element->GetAtt<AttLigatureVis>(ATT_LIGATUREVIS);
        assert(att);
        AttLigatureVis *attTarget = target->GetAtt<AttLigatureVis>(ATT_LIGATUREVIS);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
    if (element->HasAttClass(ATT_LINEVIS)) {
        const AttLineVis *att = element->GetAtt<AttLineVis>(ATT_LINEVIS);
        assert(att);
        AttLineVis *attTarget = target->GetAtt<AttLineVis>(ATT_LINEVIS);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
        attTarget->SetWidth(att->GetWidth());
        attTarget->SetEndsym(att->GetEndsym());
        attTarget->SetEndsymSize(att->GetEndsymSize());
        attTarget->SetStartsym(att->GetStartsym());
        attTarget->SetStartsymSize(att->GetStartsymSize());
    }
    if (element->HasAttClass(ATT_LIQUESCENTVIS)) {
        const AttLiquescentVis *att = element->GetAtt<AttLiquescentVis>(ATT_LIQUESCENTVIS);
        assert(att);
        AttLiquescentVis *attTarget = target->GetAtt<AttLiquescentVis>(ATT_LIQUESCENTVIS);
        assert(attTarget);
        attTarget->SetLooped(att->GetLooped());
    }
    if (element->HasAttClass(ATT_MENSURVIS)) {
        const AttMensurVis *att = element->GetAtt<AttMensurVis>(ATT_MENSURVIS);
        assert(att);
        AttMensurVis *attTarget = target->GetAtt<AttMensurVis>(ATT_MENSURVIS);
        assert(attTarget);
        attTarget->SetDot(att->GetDot());
        attTarget->SetForm(att->GetForm());
        attTarget->SetOrient(att->GetOrient());
        attTarget->SetSign(att->GetSign());
    }
    if (element->HasAttClass(ATT_MENSURALVIS)) {
        const AttMensuralVis *att = element->GetAtt<AttMensuralVis>(ATT_MENSURALVIS);
        assert(att);
        AttMensuralVis *attTarget = target->GetAtt<AttMensuralVis>(ATT_MENSURALVIS);
        assert(attTarget);
        attTarget->SetMensurColor(att->GetMensurColor());
        attTarget->SetMensurDot(att->GetMensurDot());
        attTarget->SetMensurForm(att->GetMensurForm());
        attTarget->SetMensurLoc(att->GetMensurLoc());
        attTarget->SetMensurOrient(att->GetMensurOrient());
        attTarget->SetMensurSign(att->GetMensurSign());
        attTarget->SetMensurSize(att->GetMensurSize());
        attTarget->SetMensurSlash(att->GetMensurSlash());
    }
    if (element->HasAttClass(ATT_METERSIGVIS)) {
        const AttMeterSigVis *att = element->GetAtt<AttMeterSigVis>(ATT_METERSIGVIS);
        assert(att);
        AttMeterSigVis *attTarget = target->GetAtt<AttMeterSigVis>(ATT_METERSIGVIS);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
    if (element->HasAttClass(ATT_METERSIGDEFAULTVIS)) {
        const AttMeterSigDefaultVis *att = element->GetAtt<AttMeterSigDefaultVis>(ATT_METERSIGDEFAULTVIS);
        assert(att);
        AttMeterSigDefaultVis *attTarget = target->GetAtt<AttMeterSigDefaultVis>(ATT_METERSIGDEFAULTVIS);
        assert(attTarget);
        attTarget->SetMeterForm(att->GetMeterForm());
        attTarget->SetMeterShowchange(att->GetMeterShowchange());
        attTarget->SetMeterVisible(att->GetMeterVisible());
    }
    if (element->HasAttClass(ATT_MULTIRESTVIS)) {
        const AttMultiRestVis *att = element->GetAtt<AttMultiRestVis>(ATT_MULTIRESTVIS);
        assert(att);
        AttMultiRestVis *attTarget = target->GetAtt<AttMultiRestVis>(ATT_MULTIRESTVIS);
        assert(attTarget);
        attTarget->SetBlock(att->GetBlock());
    }
    if (element->HasAttClass(ATT_PBVIS)) {
        const AttPbVis *att = element->GetAtt<AttPbVis>(ATT_PBVIS);
        assert(att);
        AttPbVis *attTarget = target->GetAtt<AttPbVis>(ATT_PBVIS);
        assert(attTarget);
        attTarget->SetFolium(att->GetFolium());
    }
    if (element->HasAttClass(ATT_PEDALVIS)) {
        const AttPedalVis *att = element->GetAtt<AttPedalVis>(ATT_PEDALVIS);
        assert(att);
        AttPedalVis *attTarget = target->GetAtt<AttPedalVis>(ATT_PEDALVIS);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
    if (element->HasAttClass(ATT_PLICAVIS)) {
        const AttPlicaVis *att = element->GetAtt<AttPlicaVis>(ATT_PLICAVIS);
        assert(att);
        AttPlicaVis *attTarget = target->GetAtt<AttPlicaVis>(ATT_PLICAVIS);
        assert(attTarget);
        attTarget->SetDir(att->GetDir());
        attTarget->SetLen(att->GetLen());
    }
    if (element->HasAttClass(ATT_QUILISMAVIS)) {
        const AttQuilismaVis *att = element->GetAtt<AttQuilismaVis>(ATT_QUILISMAVIS);
        assert(att);
        AttQuilismaVis *attTarget = target->GetAtt<AttQuilismaVis>(ATT_QUILISMAVIS);
        assert(attTarget);
        attTarget->SetWaves(att->GetWaves());
    }
    if (element->HasAttClass(ATT_SBVIS)) {
        const AttSbVis *att = element->GetAtt<AttSbVis>(ATT_SBVIS);
        assert(att);
        AttSbVis *attTarget = target->GetAtt<AttSbVis>(ATT_SBVIS);
        assert(attTarget);
        attTarget->SetForm(att->GetForm());
    }
    if (element->HasAttClass(ATT_SCOREDEFVIS)) {
        const AttScoreDefVis *att = element->GetAtt<AttScoreDefVis>(ATT_SCOREDEFVIS);
        assert(att);
        AttScoreDefVis *attTarget = target->GetAtt<AttScoreDefVis>(ATT_SCOREDEFVIS);
        assert(attTarget);
        attTarget->SetVuHeight(att->GetVuHeight());
    }
    if (element->HasAttClass(ATT_SECTIONVIS)) {
        const AttSectionVis *att = element->GetAtt<AttSectionVis>(ATT_SECTIONVIS);
        assert(att);
        AttSectionVis *attTarget = target->GetAtt<AttSectionVis>(ATT_SECTIONVIS);
        assert(attTarget);
        attTarget->SetRestart(att->GetRestart());
    }
    if (element->HasAttClass(ATT_SIGNIFLETVIS)) {
        const AttSignifLetVis *att = element->GetAtt<AttSignifLetVis>(ATT_SIGNIFLETVIS);
        assert(att);
        AttSignifLetVis *attTarget = target->GetAtt<AttSignifLetVis>(ATT_SIGNIFLETVIS);
        assert(attTarget);
        attTarget->SetPlace(att->GetPlace());
    }
    if (element->HasAttClass(ATT_SPACEVIS)) {
        const AttSpaceVis *att = element->GetAtt<AttSpaceVis>(ATT_SPACEVIS);
        assert(att);
        AttSpaceVis *attTarget = target->GetAtt<AttSpaceVis>(ATT_SPACEVIS);
        assert(attTarget);
        attTarget->SetCompressable(att->GetCompressable());
    }
    if (element->HasAttClass(ATT_STAFFDEFVIS)) {
        const AttStaffDefVis *att = element->GetAtt<AttStaffDefVis>(ATT_STAFFDEFVIS);
        assert(att);
        AttStaffDefVis *attTarget = target->GetAtt<AttStaffDefVis>(ATT_STAFFDEFVIS);
        assert(attTarget);
        attTarget->SetLayerscheme(att->GetLayerscheme());
        attTarget->SetLinesColor(att->GetLinesColor());
        attTarget->SetLinesVisible(att->GetLinesVisible());
        attTarget->SetSpacing(att->GetSpacing());
    }
    if (element->HasAttClass(ATT_STAFFGRPVIS)) {
        const AttStaffGrpVis *att = element->GetAtt<AttStaffGrpVis>(ATT_STAFFGRPVIS);
        assert(att);
        AttStaffGrpVis *attTarget = target->GetAtt<AttStaffGrpVis>(ATT_STAFFGRPVIS);
        assert(attTarget);
        attTarget->SetBarThru(att->GetBarThru());
    }
    if (element->HasAttClass(ATT_STEMVIS)) {
        const AttStemVis *att = element->GetAtt<AttStemVis>(ATT_STEMVIS);
        assert(att);
        AttStemVis *attTarget = target->GetAtt<AttStemVis>(ATT_STEMVIS);
        assert(attTarget);
        attTarget->SetPos(att->GetPos());
        attTarget->SetLen(att->GetLen());
        attTarget->SetForm(att->GetForm());
        attTarget->SetDir(att->GetDir());
        attTarget->SetFlagPos(att->GetFlagPos());
        attTarget->SetFlagForm(att->GetFlagForm());
    }
    if (element->HasAttClass(ATT_TUPLETVIS)) {
        const AttTupletVis *att = element->GetAtt<AttTupletVis>(ATT_TUPLETVIS);
        assert(att);
        AttTupletVis *attTarget = target->GetAtt<AttTupletVis>(ATT_TUPLETVIS);
        assert(attTarget);
        attTarget->SetBracketPlace(att->GetBracketPlace());
        attTarget->SetBracketVisible(att->GetBracketVisible());
        attTarget->SetNumFormat(att->GetNumFormat());
    }
}

} // namespace vrv
