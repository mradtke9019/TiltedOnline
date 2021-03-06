#pragma once

#if TP_SKYRIM

#include <Games/Skyrim/Components/BaseFormComponent.h>

struct TESForm;

struct TESContainer : BaseFormComponent
{
    struct Entry
    {
        uint32_t count;
        TESForm* form;
        void* data;
    };

    Entry** entries;
    uint32_t count;
};

#endif
