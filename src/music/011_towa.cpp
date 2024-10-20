#include <sound/pomf.h>

extern "C" const POMFHeader POMF_HEAD = {
    POMF_MAGIC_FILE,
    POMF_CURVER,
    "Towa ni tsuzuku gosenfu",
    "deadballP - Towa ni tsuzuku gosenfu"
};

extern "C" const melody_item_t POMF_TUNE[] = {
    {FREQ_SET, 0, 415},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 466},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 494},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 466},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 494},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 554},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 370},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 698},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 698},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 554},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 284},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 284},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 759},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 415},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 466},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 494},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 466},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 494},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 554},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 370},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 698},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 698},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 554},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 1518},
    {FREQ_SET, 0, 1661},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 1480},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1318},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 1760},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 1708},
    /* LOOP */
    {LOOP_POINT_SET, 0, LOOP_POINT_TYPE_LOOP},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 554},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 759},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 949},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 554},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 759},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 113},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 75},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 3},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 205},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 550},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 759},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 1518},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 142},
    {FREQ_SET, 0, 466},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 659},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 569},
    /* HOOK */
    {LOOP_POINT_SET, 0, LOOP_POINT_TYPE_HOOK_START},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 659},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 784},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 759},
    {FREQ_SET, 0, 0},
    /* HOOKEND */
    {LOOP_POINT_SET, 0, LOOP_POINT_TYPE_HOOK_END},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 659},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 1108},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 379},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 415},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 659},
    {DELAY, 0, 332},
    {FREQ_SET, 0, 466},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 332},
    {FREQ_SET, 0, 494},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 332},
    {FREQ_SET, 0, 554},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 332},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 332},
    {FREQ_SET, 0, 554},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 332},
    {FREQ_SET, 0, 466},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 332},
    {FREQ_SET, 0, 494},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 522},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 142},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 47},
    {FREQ_SET, 0, 1244},
    {DELAY, 0, 712},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 569},
    {FREQ_SET, 0, 988},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 189},
    {FREQ_SET, 0, 740},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 622},
    {DELAY, 0, 284},
    {FREQ_SET, 0, 932},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 830},
    {DELAY, 0, 94},
    {FREQ_SET, 0, 0},
    {DELAY, 0, 284},
};
