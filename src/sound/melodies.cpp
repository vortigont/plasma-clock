#include <sound/sequencer.h>
#include <sound/melodies.h>
#include <bits/stl_algobase.h>

melody_sequence_t melody_from_no(int melody_no) {
    int no = std::min(melody_no, all_chime_count);
    no  = std::max(no, 0);
    if(no == all_chime_count) {
        no = esp_random() % all_chime_count;
    }
    
    melody_sequence_t melody = all_chime_list[no];
    return melody;
}

#define MELODY_OF(x) {\
    .array = x,\
    .count = sizeof(x)/sizeof(melody_item_t)\
}

static const melody_item_t just_beep_data[] = {
    {1000, 250},
};
const melody_sequence_t just_beep = MELODY_OF(just_beep_data);

static const melody_item_t pc98_pipo_data[] = {
    {2000, 125},
    {1000, 125}
};
const melody_sequence_t pc98_pipo = MELODY_OF(pc98_pipo_data);

static const melody_item_t tulula_fvu_data[] = {
    {392, 125},
    {392, 125},
    {392, 125},
    {293, 250}
};
const melody_sequence_t tulula_fvu = MELODY_OF(tulula_fvu_data);

static const melody_item_t oelutz_fvu_data[] = {
    {587, 250},
    {698, 250},
    {880, 250},
    {1046, 125},
    {988, 500},
};
const melody_sequence_t oelutz_fvu = MELODY_OF(oelutz_fvu_data);

// A.M. - Arise
static const melody_item_t arise_data[] = {
    {622, 692}, 
    {932, 1153},
    {554, 692}, 
    {830, 634},
    {0, 57},
    {830, 230},
    {739, 230},
    {698, 1269},
    {0, 115},
    {698, 230},
    {622, 230},
    {415, 692},
    {466, 692},
    {554, 461},
    {622, 519},
    {0, 115},
    {932, 1153},
    {554, 692},
    {830, 634},
    {0, 57},
    {830, 230},
    {739, 230},
    {698, 1269},
    {0, 115},
    {698, 230},
    {739, 230},
    {830, 692},
    {932, 692},
    {1108, 519},
};
const melody_sequence_t arise = MELODY_OF(arise_data);

// Caramell - Caramelldansen
static const melody_item_t caramell_data[] = {
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {880, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {293, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1479, 181},
    {1318, 181},
    {1174, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {293, 181},
    {0, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1318, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {220, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1174, 181},
    {1318, 181},
    {1174, 181},
    {1318, 181},
    {1318, 181},
    {1479, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {220, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {987, 181},
    {0, 181},
    {1479, 181},
    {1318, 181},
    {1174, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {246, 181},
    {246, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1318, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {195, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1174, 181},
    {1318, 181},
    {1479, 181},
    {1318, 181},
    {1318, 181},
    {1174, 181}, 
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {195, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {880, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {293, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1479, 181},
    {1318, 181},
    {1174, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {293, 181},
    {0, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1318, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {220, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1174, 181},
    {1318, 181},
    {1174, 181},
    {1318, 181},
    {1318, 181},
    {1479, 363},
    {1760, 181},
    {0, 181},
    {1567, 181},
    {1479, 181},
    {1174, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {293, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1174, 181},
    {1318, 181},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {293, 181},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1174, 181},
    {1479, 181},
    {1479, 181},
    {1318, 363},
    {1174, 181},
    {0, 181},
};
const melody_sequence_t caramell = MELODY_OF(caramell_data);

// BoA - Duvet (Serial Experiments Lain OP)
static const melody_item_t duvet_data[] = {
    {783, 575},
    {0, 69},
    {698, 284},
    {0, 37},
    {523, 284},
    {0, 37},
    {523, 575},
    {0, 69},
    {523, 284},
    {0, 682},
    {783, 284},
    {0, 37},
    {698, 284},
    {0, 37},
    {523, 284},
    {0, 37},
    {523, 575},
    {0, 69},
    {523, 284},
    {0, 682},
    {783, 284},
    {0, 37},
    {698, 284},
    {0, 37},
    {523, 284},
    {0, 37},
    {523, 575},
    {0, 69},
    {523, 284},
    {0, 37},
    {523, 575}, 
    {0, 69},
    {466, 284},
    {0, 37},
    {466, 284},
    {0, 37},
    {523, 284},
    {0, 37},
    {698, 575},
    {587, 634},
    {0, 1693},
};
const melody_sequence_t duvet = MELODY_OF(duvet_data);

// T-Square - Truth
static const melody_item_t truth_data[] = {
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {932, 371},
    {0, 12},
    {698, 182},
    {0, 9},
    {1046, 374},
    {0, 9},
    {698, 371},
    {0, 12},
    {1108, 374},
    {0, 9},
    {698, 371},
    {0, 12},
    {1244, 374}, 
    {0, 9},
    {1108, 182},
    {0, 9},
    {1046, 57},
    {0, 6},
    {1108, 57},
    {0, 6},
    {1046, 57},
    {0, 6},
    {932, 182},
    {0, 9},
    {830, 371},
    {0, 12},
    {622, 182},
    {0, 9},
    {932, 374},
    {0, 9},
    {622, 371},
    {0, 12},
    {1046, 374},
    {0, 9},
    {622, 371},
    {0, 12},
    {1108, 374},
    {0, 9},
    {1046, 182},
    {0, 9},
    {932, 57},
    {0, 6},
    {1046, 57},
    {0, 6},
    {932, 57},
    {0, 6},
    {830, 182},
    {0, 9},
    {739, 371},
    {0, 12},
    {554, 182},
    {0, 9},
    {830, 374},
    {0, 9},
    {554, 371},
    {0, 12},
    {932, 374},
    {0, 9},
    {554, 371},
    {0, 12},
    {1046, 374},
    {0, 9},
    {932, 182},
    {0, 9},
    {830, 57},
    {0, 6},
    {932, 57},
    {0, 6},
    {830, 57},
    {0, 6}, 
    {739, 182},
    {0, 9},
    {698, 951},
    {0, 9},
    {739, 182},
    {0, 9},
    {698, 182},
    {0, 9},
    {622, 182},
    {0, 9},
    {554, 182},
    {0, 9},
    {622, 182},
    {0, 9},
    {698, 182},
    {0, 9},
    {739, 374},
    {0, 9},
    {622, 182},
    {0, 9},
    {830, 182},
    {0, 201},
};
const melody_sequence_t truth = MELODY_OF(truth_data);

// Kosaki Satoru - Haruhi no omoi
static const melody_item_t haruhi_no_omoi_data[] = {
    {466, 681},
    {622, 1363},
    {587, 681},
    {932, 1363},
    {932, 681},
    {830, 1363},
    {932, 681},
    {698, 1363},
    {783, 340},
    {830, 340},
    {932, 1363},
    {622, 681},
    {830, 1363},
    {783, 681},
    {698, 2045},
};
const melody_sequence_t haruhi_no_omoi = MELODY_OF(haruhi_no_omoi_data);

static const melody_item_t wpip_data[] = {
    {659, 625},
    {0, 75},
    {659, 291},
    {0, 8},
    {830, 416},
    {0, 91},
    {987, 404},
    {0, 87},
    {1318, 483},
    {0, 12},
    {1244, 462},
    {0, 37},
    {1108, 475},
    {0, 12},
    {987, 370},
    {0, 141},
    {554, 275},
    {0, 12},
    {622, 225},
    {0, 245},
    {622, 754},
    {0, 508},
    {830, 241},
    {0, 8},
    {932, 441},
    {0, 58},
    {783, 720},
    {0, 33},
    {622, 441},
    {0, 50},
    {659, 516},
    {0, 220},
    {659, 216},
    {0, 33},
    {830, 500},
    {987, 479},
    {0, 29},
    {1479, 225},
    {0, 12},
    {1318, 483},
    {0, 4},
    {1244, 225},
    {0, 41},
    {1318, 475},
    {0, 33},
    {1108, 466},
    {0, 20},
    {1244, 1025},
    {0, 3041},
};
const melody_sequence_t wpip = MELODY_OF(wpip_data);

static const melody_item_t hishoku_data[] = {
    {1046, 214},
    {1108, 214},
    {1244, 428},
    {1244, 428},
    {1396, 214},
    {1244, 642},
    {0, 857},
    {1661, 428},
    {1567, 428},
    {1244, 428},
    {1046, 857},
    {0, 428},
    {932, 214},
    {1046, 642},
    {0, 428},
    {1046, 214},
    {1108, 214},
    {1244, 214},
    {1244, 428},
    {830, 214},
    {830, 428},
    {0, 428},
    {830, 214},
    {1244, 428},
    {830, 214},
    {830, 428},
    {0, 428},
    {830, 214},
    {1244, 214},
    {1567, 857},
    {0, 428},
    {1396, 214},
    {1661, 857},
    {0, 214},
};
const melody_sequence_t hishoku = MELODY_OF(hishoku_data);

static const melody_item_t bouken_data[] = {
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {880, 392},
    {987, 196},
    {1046, 196},
    {1174, 196},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1318, 294},
    {0, 98},
    {880, 294},
    {0, 98},
    {1318, 392},
    {880, 196},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1318, 392},
    {1174, 196},
    {1318, 196},
    {1567, 392},
    {1174, 196},
    {1046, 196},
    {987, 196},
    {0, 392},
    {1174, 294},
    {0, 98},
    {987, 294},
    {0, 98},
    {783, 196},
    {1174, 392},
    {1108, 196},
    {1174, 196},
    {1318, 392},
    {987, 196},
    {1046, 196},
    {1174, 196},
    {1318, 294},
    {0, 98},
    {880, 294},
    {0, 98},
    {1318, 392},
    {880, 196},
    {1318, 392},
    {1174, 196},
    {1318, 196},
    {1567, 392},
    {1174, 196},
    {1046, 196},
    {987, 196},
    {0, 392},
    {1174, 294},
    {0, 98},
    {987, 294},
    {0, 98},
    {783, 196},
    {1174, 392},
    {1318, 196},
    {1174, 196},
    {1108, 392},
    {880, 588},
    {0, 1372},
};
const melody_sequence_t bouken = MELODY_OF(bouken_data);

static const melody_item_t gentle_jena_data[] = {
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {932, 775},
    {0, 66},
    {1479, 845},
    {0, 58},
    {1396, 445},
    {0, 29},
    {1244, 400},
    {0, 25},
    {1108, 395},
    {0, 54},
    {1244, 433},
    {1396, 400},
    {0, 479},
    {830, 441},
    {987, 291},
    {0, 154},
    {987, 404},
    {0, 237},
    {932, 54},
    {0, 50},
    {830, 75},
    {0, 50},
    {932, 616},
    {0, 325},
    {932, 641},
    {0, 237},
    {1479, 741},
    {0, 150},
    {1661, 400},
    {0, 41},
    {1479, 387},
    {0, 54},
    {1396, 395},
    {0, 37},
    {1479, 275},
    {0, 175},
    {1396, 1020},
    {0, 2508},
    {932, 829},
    {0, 50},
    {1479, 829},
    {0, 58},
    {1396, 441},
    {0, 12},
    {1244, 400},
    {0, 25},
    {1108, 408},
    {0, 37},
    {1244, 387},
    {0, 37},
    {1396, 450},
    {0, 450},
    {830, 429},
    {0, 16},
    {987, 258},
    {0, 179},
    {987, 416},
    {0, 233},
    {932, 45},
    {0, 20},
    {830, 120},
    {0, 16},
    {932, 608},
    {0, 275},
    {932, 620},
    {0, 262},
    {1479, 758},
    {0, 158},
    {1661, 400},
    {0, 54},
    {1479, 358},
    {0, 66},
    {1396, 412},
    {0, 45},
    {1479, 279},
    {0, 170},
    {1661, 1762},
    {0, 16},
    {1396, 1925},
    {0, 125},
};
const melody_sequence_t gentle_jena = MELODY_OF(gentle_jena_data);

static const melody_item_t gammapolisz_data[] = {
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {880, 1299},
    {0, 293},
    {1046, 779},
    {0, 19},
    {659, 799},
    {669, 10},
    {709, 10},
    {719, 10},
    {729, 10},
    {739, 1559},
    {0, 799},
    {739, 199},
    {783, 199},
    {880, 406},
    {783, 1506},
    {0, 93},
    {932, 773},
    {0, 19},
    {587, 799},
    {598, 10},
    {609, 10},
    {625, 10},
    {638, 10},
    {659, 1559},
    {0, 799},
    {659, 199},
    {698, 186},
    {783, 172},
    {0, 246},
    {698, 2059},
    {0, 333},
    {698, 186},
    {0, 13},
    {783, 199},
    {880, 46+333},
    {0, 26},
    {783, 2099},
    {0, 293},
    {783, 199},
    {880, 46+133},
    {0, 19},
    {987, 366},
    {0, 39},
    {1046, 1426},
    {0, 166},
    {1318, 399},
    {1174, 600},
    {0, 199},
    {1046, 399},
    {1046, 1599},
};
const melody_sequence_t gammapolisz = MELODY_OF(gammapolisz_data);

static const melody_item_t like_the_wind_data[] = {
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {783, 199},
    {0, 30},
    {783, 199},
    {0, 30},
    {783, 315},
    {0, 146},
    {0x2FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {523, 199},
    {0, 30},
    {523, 199},
    {0, 30},
    {523, 315},
    {0, 146},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {391, 199},
    {0, 30},
    {523, 199},
    {0, 30},
    {698, 430},
    {0, 30},
    {622, 430},
    {0, 30},
    {587, 430},
    {0, 30},
    {622, 430},
    {0, 30},
    {587, 923},
    {622, 115},
    {587, 115},
    {523, 892},
    {0, 261},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {783, 199},
    {0, 30},
    {783, 199},
    {0, 30},
    {783, 315},
    {0, 146},
    {0x2FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {523, 199},
    {0, 30},
    {523, 199},
    {0, 30},
    {523, 315},
    {0, 146},
    {0x1FF, SEQ_LEN_FLAG_TIMBRE_SET},
    {391, 199},
    {0, 30},
    {523, 199},
    {0, 30},
    {698, 430},
    {0, 30},
    {622, 430},
    {0, 30},
    {587, 430},
    {0, 30},
    {622, 430},
    {0, 30},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {587, 1123},
    {0, 1184},
};
const melody_sequence_t like_the_wind = MELODY_OF(like_the_wind_data);

static const melody_item_t waiting_freqs_data[] = {
    {493, 1017},
    {0, 21},
    {466, 2051},
    {0, 299},
    {415, 269},
    {0, 25},
    {369, 307},
    {0, 17},
    {311, 294},
    {0, 4},
    {277, 260},
    {0, 34},
    {311, 2230},
    {0, 59},
    {207, 2303},
    {0, 34},
    {329, 1136},
    {0, 17},
    {311, 2871},
    {0, 12},
    {493, 277},
    {0, 42},
    {466, 269},
    {0, 55},
    {493, 2290},
};
const melody_sequence_t waiting_freqs = MELODY_OF(waiting_freqs_data);

static const melody_item_t the_way_data[] = {
    {0xAA, SEQ_LEN_FLAG_TIMBRE_SET},

    {932, 100},
    {0, 20},
    {1244, 108},
    {0, 12},
    {1396, 100},
    {0, 20},
    {1479, 112},
    {0, 8},
    {1864, 2400},
    {0, 480},
    {2489, 480},
    {2793, 480},
    {2489, 24},
    {2217, 4},
    {0, 24},
    {2093, 28},
    {1864, 2304},
    {0, 16},
    {1661, 468},
    {0, 12},
    {1396, 2380},
    {0, 20},
    {932, 1908},
    {0, 12},
    {1864, 240},
    {1396, 480},
    {1864, 240},
    {1396, 480},
    {1864, 120},
    {1396, 120},
    {1864, 120},
    {1396, 120},
    {1661, 240},
    {1244, 480},
    {1661, 240},
    {1244, 480},
    {1661, 120},
    {1244, 120},
    {1661, 120},
    {1244, 120},
    {1479, 240},
    {1244, 480},
    {1479, 240}, 
    {1244, 480},
    {1479, 120},
    {1244, 120},
    {1479, 120},
    {1244, 120},
    {1479, 240},
    {1244, 480},
    {1479, 120},
    {1244, 120},
    {1479, 120},
    {1244, 120},
    {1479, 120},
    {0, 120},
    {1244, 240},
    {0, 240},
    {1396, 240},
    {932, 480},
    {1396, 120},
    {932, 120},
    {1396, 120},
    {0, 120},
    {1396, 240},
    {932, 480},
    {1396, 240},
    {932, 480},
    {1396, 120},
    {932, 120},
    {1396, 120},
    {0, 120},
    {1396, 240},
    {932, 480},
    {1396, 240},
    {932, 480},
    {1396, 120},
    {932, 120},
    {1396, 120},
    {0, 120},
    {1396, 240},
    {932, 480},
    {1396, 240},
    {932, 480},
    {1396, 120},
    {932, 120},
    {1396, 120},
    {932, 120},
    {1396, 240},
    {932, 480},
};
const melody_sequence_t the_way = MELODY_OF(the_way_data);

static const melody_item_t guitar_hero_data[] = {
    {0x90, SEQ_LEN_FLAG_TIMBRE_SET},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1864, 86},

    // LOOP
    {0x90, SEQ_LEN_FLAG_TIMBRE_SET},
    {0, SEQ_LEN_FLAG_THE_LOOPAH},
    {1661, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1864, 167},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1567, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1567, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1567, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1567, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {2093, 167},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {2217, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1661, 80},
    {0, 5}, 
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1108, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1864, 167},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1567, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1567, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1567, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {1567, 80},
    {0, 5},
    {1244, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {2093, 167},
    {0, 5},
    {1396, 80},
    {0, 5},
    {1661, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {2217, 80},
    {0, 5},
    {2093, 80},
    {0, 5},
    {1864, 80},
    {0, 5},
    {2093, 80},

    // BRIDGE
    {0xAA, SEQ_LEN_FLAG_TIMBRE_SET},
    {830, 341},
    {0, 179},
    {830, 167},
    {0, 5},
    {1396, 231},
    {0, 115},
    {554, 86},
    {0, 86},
    {1396, 80},
    {0, 92},
    {1244, 80},
    {0, 92},
    {1396, 80},
    {0, 92},
    {1244, 80},
    {0, 92},
    {1396, 341},
    {0, 179},
    {1244, 341},
    {0, 5},
    {932, 341},
    {0, 5},
    {622, 173},
    {932, 167},
    {0, 5},
    {1567, 341},
    {0, 5},
    {698, 173},
    {1567, 80},
    {0, 92},
    {1046, 80},
    {0, 92},
    {1567, 80},
    {0, 92},
    {1046, 80},
    {0, 92},
    {1661, 341},
    {0, 5},
    {1661, 167},
    {0, 5},
    {1567, 167},
    {0, 5},
    {1244, 86},
    {0, 86},
};
const melody_sequence_t guitar_hero = MELODY_OF(guitar_hero_data);

static const melody_item_t syabon_data[] = {
    {739, 254},
    {1108, 127},
    {0, 127},
    {987, 127},
    {1108, 127}, 
    {0, 127},
    {1108, 127},
    {987, 127},
    {0, 127},
    {880, 127},
    {880, 381},
    {0, 254},
    {739, 254},
    {1108, 127},
    {0, 127},
    {987, 127},
    {1108, 127},
    {0, 127},
    {1108, 127},
    {987, 127},
    {0, 127},
    {880, 127},
    {1108, 127},
    {0, 381},
    {0, 127},
    {554, 254},
    {659, 127},
    {0, 127},
    {739, 127},
    {0, 254},
    {0, 127},
    {739, 254},
    {880, 127},
    {0, 127},
    {830, 127},
    {0, 127},
    {739, 127},
    {0, 127},
    {659, 127},
    {0, 127},
    {554, 127},
    {0, 127},
    {1108, 127},
    {0, 127},
    {987, 127},
    {0, 127},
    {987, 254},
    {880, 127},
    {0, 508},
    {0, 127},
    {739, 254},
    {1108, 127},
    {0, 127},
    {987, 127},
    {987, 127},
    {1108, 127},
    {1108, 127},
    {987, 127},
    {987, 127},
    {880, 127},
    {880, 381},
    {739, 127},
    {0, 127},
    {739, 254},
    {1108, 127},
    {0, 127},
    {987, 127},
    {0, 127},
    {1108, 127},
    {0, 127},
    {987, 127},
    {0, 127},
    {880, 127},
    {739, 127},
    {0, 381},
    {0, 127},
    {880, 254},
    {739, 127},
    {0, 127},
    {1108, 127},
    {0, 254},
    {880, 127},
    {0, 254},
    {739, 127},
    {659, 127},
    {739, 127},
    {880, 127},
    {1108, 127},
    {0, 127},
    {987, 127},
    {0, 127},
    {880, 127},
    {739, 127},
    {0, 381},
    {0, 889},
    {659, 254},
    {880, 127},
    {0, 127},
    {987, 127},
    {0, 127},
    {1108, 127},
    {0, 381},
    {880, 127},
    {0, 381},
    {1108, 127},
    {0, 381},
    {880, 127},
    {0, 254},
    {987, 127},
    {1108, 127},
    {0, 381},
    {987, 127},
    {987, 127},
    {880, 127},
    {739, 127},
    {0, 127},
    {0, 127},
    {739, 254},
    {880, 127},
    {0, 127},
    {987, 127},
    {0, 127},
    {1108, 127},
    {1174, 127},
    {0, 127},
    {1108, 254},
    {1174, 127},
    {0, 127},
    {1108, 127},
    {0, 254},
    {987, 127},
    {880, 127},
    {659, 127},
    {739, 127},
    {739, 254},
    {659, 127},
    {0, 127},
    {739, 127},
    {0, 127},
    {880, 127},
    {0, 127},
    {739, 127},
    {0, 127},
    {830, 127},
    {0, 127},
    {880, 127},
    {0, 127},
    {987, 127},
    {0, 127},
    {880, 127},
    {0, 127},
    {1108, 127},
    {0, 381},
    {880, 127},
    {0, 381},
    {1108, 127},
    {0, 381},
    {880, 127},
    {0, 254},
    {987, 127},
    {1108, 127},
    {0, 381},
    {987, 127},
    {987, 127},
    {880, 127},
    {739, 127},
    {0, 127},
    {0, 127},
    {739, 254},
    {880, 127},
    {0, 127},
    {987, 127},
    {0, 127},
    {1108, 127},
    {1108, 127},
    {880, 127},
    {880, 127},
    {739, 127},
    {739, 127},
    {830, 127},
    {739, 127},
    {659, 127},
    {0, 42},
    {739, 127},
    {0, 42},
    {880, 127},
    {0, 42},
    {830, 127},
    {0, 42}, 
    {739, 127},
    {0, 42},
    {659, 127},
    {0, 42},
    {739, 127},
    {2793, 127},
    {2959, 42},
    {0, 84},
    {2959, 127},
    {0, 127},
    {2217, 127},
    {1975, 127},
    {2093, 127},
    {0, 127},
    {1760, 127},
    {0, 127},
    {1479, 127},
    {0, 2033},
};
const melody_sequence_t syabon = MELODY_OF(syabon_data);

static const melody_item_t steiner_data[] = {
    {0x2AA, SEQ_LEN_FLAG_TIMBRE_SET},
    {1108, 576},
    {830, 961},
    {277, 576},
    {415, 384},
    {1108, 192},
    {830, 192},
    {1108, 192},
    {1244, 576},
    {830, 961},
    {415, 576},
    {622, 384},
    {1244, 192},
    {830, 192},
    {1244, 192},
    {1318, 576},
    {659, 384},
    {1318, 192},
    {1479, 192},
    {1318, 192},
    {1244, 576},
    {739, 384},
    {1244, 192},
    {1975, 192},
    {1661, 769},
    {622, 576},
    {739, 192},
    {830, 192},
    {207, 576},
    {622, 961},
    {622, 64},
    {0, 12},
    {830, 51},
    {1108, 544},
    {830, 865},
    {277, 576},
    {415, 384},
    {1108, 192},
    {830, 192},
    {1108, 192},
    {1244, 384},
    {1318, 192},
    {1244, 384},
    {830, 576},
    {415, 576},
    {622, 384},
    {830, 192},
    {1244, 192},
    {1318, 192},
    {1479, 576},
    {987, 384},
    {1661, 192},
    {1318, 192},
    {1244, 192},
    {246, 576},
    {987, 384},
    {1108, 192},
    {1244, 192},
    {1108, 769},
    {830, 576},
    {987, 384},
    {1108, 576},
    {1396, 576},
    {1479, 384},
    {1661, 576},
    {1479, 576},
    {1975, 384},
    {1661, 576},
    {1479, 576},
    {1244, 192},
    {1318, 192},
    {1479, 576},
    {1318, 576},
    {1975, 384},
    {1244, 576},
    {1318, 384},
    {622, 192},
    {659, 192},
    {622, 192},
    {1661, 576},
    {1479, 576},
    {1975, 384},
    {2217, 576},
    {1975, 384},
    {2637, 192},
    {2489, 192},
    {1661, 384},
    {5274, 192},
    {4978, 192},
    {3322, 576},
    {987, 358},
    {0, 25},
    {880, 576},
    {739, 384},
    {622, 192},
    {493, 384},
    {1661, 384},
    {1108, 192},
    {1479, 384},
    {880, 192},
    {1975, 192},
    {987, 192},
    {1661, 384},
    {880, 192},
    {1479, 576},
    {1244, 192},
    {1318, 192},
    {1479, 384},
    {830, 192},
    {1318, 384},
    {622, 192},
    {1975, 384},
    {1244, 576},
    {1318, 384},
    {622, 192},
    {659, 192},
    {622, 192},
    {1479, 384},
    {1661, 192},
    {1760, 384},
    {1975, 384},
    {2217, 384},
    {880, 192},
    {1318, 192},
    {880, 192},
    {2217, 192},
    {739, 192},
    {2959, 192},
    {1479, 192},
    {2959, 576},
    {830, 576},
    {622, 384},
    {2793, 1538},
    {0, 3076},
};
const melody_sequence_t steiner = MELODY_OF(steiner_data);

static const melody_item_t towa_data[] = {
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {349, 94},
    {391, 94},
    {415, 569},
    {391, 94},
    {415, 94},
    {466, 379},
    {311, 379},
    {523, 379},
    {622, 379},
    {587, 189},
    {622, 189},
    {587, 189},
    {466, 189},
    {698, 379},
    {830, 379},
    {783, 284},
    {698, 284},
    {622, 189}, 
    {0xAA, SEQ_LEN_FLAG_TIMBRE_SET},
    {523, 759},
    {0, 569},

    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {349, 94},
    {391, 94},
    {415, 569},
    {391, 94},
    {415, 94},
    {466, 379},
    {311, 379},
    {523, 379},
    {622, 379},
    {587, 189},
    {622, 189},
    {587, 189},
    {466, 189},
    {698, 1518},
    {1396, 94},
    {0, 189},
    {0xAA, SEQ_LEN_FLAG_TIMBRE_SET},
    {932, 94},
    {0, 94},
    {0x55, SEQ_LEN_FLAG_TIMBRE_SET},
    {1244, 94},
    {0, 189},
    {0xAA, SEQ_LEN_FLAG_TIMBRE_SET},
    {830, 94},
    {0, 189},
    {0x55, SEQ_LEN_FLAG_TIMBRE_SET},
    {1108, 94},
    {0, 94},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1479, 94},
    {0, 189},
    {0, 1518},
    // LOOP
    {0, SEQ_LEN_FLAG_THE_LOOPAH},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {698, 189},
    {783, 189},
    {830, 189},
    {783, 189},
    {698, 189},
    {523, 189},
    {466, 189},
    {523, 379},
    {622, 189},
    {523, 569},
    {0, 569},
    {698, 189},
    {783, 189},
    {830, 189},
    {783, 189},
    {698, 189},
    {830, 189},
    {932, 189},
    {1046, 759},
    {0, 949},
    {698, 189},
    {783, 189},
    {830, 189},
    {783, 189},
    {698, 189},
    {523, 189},
    {466, 189},
    {523, 189},
    {523, 189},
    {622, 189},
    {523, 569},
    {0, 569},
    {1046, 189},
    {932, 189},
    {1046, 189},
    {932, 189},
    {830, 189},
    {783, 189},
    {622, 189},
    {698, 759},
    {0, 113},
    {0xAA, SEQ_LEN_FLAG_TIMBRE_SET},
    {830, 94},
    {0, 75},
    {830, 94},
    {0, 3},
    {783, 205},
    {0, 550},
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {830, 189},
    {783, 189},
    {698, 379},
    {783, 189},
    {830, 189},
    {783, 189},
    {783, 189},
    {830, 189},
    {783, 189},
    {0, 189},
    {830, 189},
    {783, 189},
    {783, 189},
    {830, 189},
    {0, 189},
    {783, 189},
    {830, 189},
    {0, 189},
    {783, 189},
    {0, 189},
    {830, 189},
    {0, 189},
    {783, 189},
    {830, 189},
    {783, 189},
    {830, 189},
    {830, 189},
    {932, 379},
    {0, 379},
    {830, 189},
    {783, 189},
    {698, 379},
    {783, 189},
    {830, 189},
    {783, 379},
    {830, 189},
    {783, 379},
    {698, 379},
    {622, 189},
    {698, 189},
    {1046, 189},
    {1046, 759},
    {0, 189},
    {622, 189},
    {698, 379},
    {1046, 189},
    {1046, 379},
    {932, 379},
    {830, 189},
    {783, 1518},
    {0, 142},
    {391, 47},
    {622, 189}, 
    {554, 189},
    {523, 189},
    {0, 569},
    {698, 94},
    {783, 94},
    {830, 569},
    {932, 189},
    {830, 189},
    {783, 189},
    {698, 189},
    {622, 189},
    {523, 379},
    {1046, 379},
    {932, 379},
    {0, 189},
    {622, 94},
    {698, 94},
    {783, 569},
    {830, 189},
    {783, 189},
    {698, 189},
    {622, 189},
    {554, 189},
    {523, 379},
    {932, 379},
    {830, 379},
    {783, 379},
    {698, 379},
    {0, 189},
    {523, 189},
    {830, 379},
    {0, 189},
    {523, 189},
    {783, 569},
    {783, 189},
    {783, 379},
    {0, 189},
    {698, 189},
    {698, 379},
    {659, 379},
    {698, 569},
    {783, 189},
    {783, 759},
    {0, 569},
    {698, 94},
    {783, 94},
    {830, 569},
    {932, 189},
    {830, 189},
    {783, 189},
    {698, 189},
    {622, 189},
    {523, 379},
    {1046, 379},
    {932, 379},
    {0, 189},
    {622, 94},
    {698, 94},
    {783, 379},
    {783, 189},
    {830, 189},
    {783, 189},
    {698, 189},
    {622, 189},
    {554, 189},
    {523, 379},
    {932, 379},
    {830, 379},
    {783, 379},
    {698, 189},
    {0, 189},
    {349, 47},
    {554, 332},
    {391, 47},
    {622, 332},
    {415, 47},
    {698, 332},
    {466, 47},
    {783, 332},
    {523, 47},
    {830, 332},
    {466, 47},
    {783, 332},
    {391, 47},
    {622, 332},
    {415, 47},
    {698, 522},
    {698, 47},
    {1046, 142},
    {698, 47},
    {1046, 712},
    {0, 569},
    {830, 189},
    {783, 189},
    {622, 94},
    {523, 284},
    {783, 94},
    {698, 94},
    {0, 1518},
};
const melody_sequence_t towa = MELODY_OF(towa_data);

static const melody_item_t mermgirl_data[] = {
    {1174, 199},
    {0, 14},
    {1318, 199},
    {0, 14},
    {1396, 199},
    {0, 14},
    {932, 99},
    {0, 7},
    {1396, 199},
    {0, 14},
    {880, 99},
    {0, 7},
    {1174, 199},
    {0, 14},
    {1567, 199},
    {0, 14},
    {2093, 199},
    {0, 14},
    {1318, 35},
    {1567, 367},
    {0, 24}, 
    {880, 35},
    {1318, 164},
    {0, 14},
    {1318, 199},
    {0, 14},
    {1046, 199},
    {0, 14},
    {1318, 199},
    {0, 14},
    {1396, 199},
    {0, 14},
    {1567, 199},
    {0, 14},
    {1396, 403},
    {0, 24},
    {1396, 199},
    {0, 14},
    {1396, 99},
    {0, 7},
    {1396, 199},
    {0, 14},
    {880, 99},
    {0, 7},
    {1174, 199},
    {0, 14},
    {1567, 199},
    {0, 14},
    {2093, 199},
    {0, 14},
    {1567, 403},
    {0, 24},
    {1318, 35},
    {1567, 164},
    {0, 14},
    {1760, 199},
    {0, 14},
    {2093, 199},
    {0, 14},
    {1864, 199},
    {0, 14},
    {1760, 403},
    {0, 24},
    {1174, 199},
    {0, 14},
    {1318, 199},
    {0, 14},
    {1396, 199},
    {0, 14},
    {932, 99},
    {0, 7},
    {1396, 199},
    {0, 14},
    {880, 99},
    {0, 7},
    {1174, 199},
    {0, 14},
    {1046, 35},
    {1567, 164},
    {0, 14},
    {2093, 199},
    {0, 14},
    {1318, 35},
    {1567, 367},
    {0, 24},
    {1318, 199},
    {0, 14},
    {1318, 199},
    {0, 14},
    {1046, 199},
    {0, 14},
    {1318, 199},
    {0, 14},
    {1396, 199},
    {0, 14},
    {1567, 199},
    {0, 14},
    {1396, 403},
    {0, 24},
    {1396, 199},
    {0, 14},
    {1396, 99},
    {0, 7},
    {1396, 199},
    {0, 14}, 
    {880, 99},
    {0, 7},
    {1174, 199},
    {0, 14},
    {1567, 199},
    {0, 14},
    {2093, 199},
    {0, 14},
    {1567, 403},
    {0, 24},
    {1760, 199}, 
    {0, 14},
    {1760, 99},
    {0, 7},
    {1760, 199},
    {0, 14},
    {1567, 99},
    {0, 7},
    {1760, 199},
    {0, 14},
    {3520, 35},
    {1760, 164},
    {0, 14},
    {4186, 35},
    {2093, 164},
    {0, 14},
    {4698, 35},
    {2349, 164},
    {0, 228},
};
const melody_sequence_t mermgirl = MELODY_OF(mermgirl_data);

static const melody_item_t eye_opener_data[] = {
    // Open your eyes
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1046, 29},
    {523, 147},
    {1174, 29},
    {587, 147},
    {1318, 29},
    {659, 147},
    {1174, 29}, 
    {587, 323},
    {0x2AA, SEQ_LEN_FLAG_TIMBRE_SET},
    {220, 174},
    {0, 178},
    {220, 174},

    // See all the love in me
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1396, 29},
    {698, 147},
    {1318, 29},
    {659, 147},
    {1174, 29},
    {587, 147},
    {1318, 29},
    {659, 499},
    {1046, 29},
    {523, 147},
    {1046, 29},
    {523, 323},
    {0x2AA, SEQ_LEN_FLAG_TIMBRE_SET},
    {174, 174},
    {0, 178},

    // I've got enough forever
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {783, 176},
    {698, 352},
    {659, 352},
    {587, 352},
    {523, 352},
    {587, 176},
    {659, 352},
    {0x2AA, SEQ_LEN_FLAG_TIMBRE_SET},
    {261, 176},

    // Don't be afraid
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1046, 29},
    {523, 147},
    {1174, 29},
    {587, 147},
    {1318, 29},
    {659, 147},
    {1174, 29}, 
    {587, 323},
    {0x2AA, SEQ_LEN_FLAG_TIMBRE_SET},
    {220, 174},
    {0, 178},
    {220, 174},

    // Take all you need from me
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {1396, 29},
    {698, 147},
    {1318, 29},
    {659, 147},
    {1174, 29},
    {587, 147},
    {1318, 29},
    {659, 499},
    {1046, 29},
    {523, 147},
    {1046, 29},
    {523, 323},
    {0x2AA, SEQ_LEN_FLAG_TIMBRE_SET},
    {174, 174},
    {0, 178},

    // And we'll be strong together
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},
    {440, 176},
    {523, 352},
    {587, 352},
    {698, 352},
    {659, 352},
    {587, 176},
    {523, 529},

    // RIFF
    {0xAA, SEQ_LEN_FLAG_TIMBRE_SET},
    {1318, 175},
    {880, 87},
    {1318, 175},
    {880, 87},
    {1318, 175},
    {1318, 175},
    {880, 87},
    {1318, 175},
    {880, 87},
    {1318, 175},
    {1396, 175},
    {1046, 87},
    {1396, 175},
    {1046, 87},
    {1396, 175},
    {1396, 175},
    {1046, 87},
    {1396, 175},
    {1046, 87},
    {1396, 175},
    {1567, 175},
    {1046, 87},
    {1567, 175},
    {1046, 87},
    {1567, 175},
    {1567, 175},
    {1046, 87},
    {1567, 175},
    {1046, 87},
    {1567, 175},
    {1174, 175},
    {1046, 87},
    {1174, 175},
    {1046, 87},
    {1174, 175},
    {1174, 175},
    {1046, 87},
    {1174, 175},
    {1046, 87},
    {1174, 175},
    {1318, 175},
    {880, 87},
    {1318, 175},
    {880, 87},
    {1318, 175},
    {1318, 175},
    {880, 87},
    {1318, 175}, 
    {880, 87},
    {1318, 175},
    {1396, 175},
    {1046, 87},
    {1396, 175},
    {1046, 87},
    {1396, 175},
    {1396, 175},
    {1046, 87},
    {1396, 175},
    {1046, 87},
    {1396, 175},
    {1567, 175},
    {1046, 87},
    {1567, 175},
    {1046, 87},
    {1567, 175},
    {1567, 175},
    {1046, 87},
    {1567, 175},
    {1046, 87},
    {1567, 175},
    {1174, 175},
    {1046, 87},
    {1174, 175},
    {1046, 87},
    {1174, 175},
    {1174, 175},
    {1046, 87},
    {1174, 175},
    {1046, 87},
    {1174, 174},
    {0, 707},
};
const melody_sequence_t eye_opener = MELODY_OF(eye_opener_data);

static const melody_item_t ark_data[] = {
    {0xFF, SEQ_LEN_FLAG_TIMBRE_SET},

    {880, 220},
    {987, 220},
    {1046, 220},
    {1174, 772},
    {0, 330},
    {783, 220},
    {880, 220},
    {987, 220},
    {880, 772},
    {0, 330},
    {880, 220},
    {987, 220},
    {1046, 220},
    {1174, 661},
    {1046, 220},
    {987, 330},
    {0, 110},
    {783, 36},
    {1567, 404},
    {659, 36},
    {1318, 735},
    {0, 330},
    {440, 36},
    {880, 183},
    {493, 36},
    {987, 183},
    {523, 36},
    {1046, 183},
    {587, 36},
    {1174, 735},
    {0, 330},
    {391, 36},
    {783, 183},
    {440, 36},
    {880, 183},
    {493, 36},
    {987, 183},
    {440, 36},
    {880, 735},
    {0, 551},
    {329, 36},
    {659, 183},
    {391, 36},
    {783, 183},
    {440, 36},
    {880, 1066},
    {0, 882},
    {493, 36},
    {987, 772},
    {0, 73},

    {0x2AA, SEQ_LEN_FLAG_TIMBRE_SET},
    {1046, 441},
    {1174, 441},
    {1318, 441},
    {659, 220},
    {1046, 441},
    {1567, 220},
    {1396, 220},
    {1318, 441},
    {1174, 661},
    {783, 36},
    {987, 404},
    {880, 36},
    {1046, 404},
    {987, 36},
    {1174, 404},
    {880, 220},
    {830, 441},
    {1396, 220},
    {1318, 220},
    {1174, 441},
    {1046, 661},
    {880, 441},
    {987, 441},
    {659, 36},
    {880, 36},
    {1046, 588},
    {1318, 36},
    {1567, 404},
    {0, 220},
    {1318, 36},
    {1567, 404},
    {1046, 441},
    {783, 220},
    {1567, 441},
    {0, 183},
    {783, 36},
    {1567, 441},
    {1174, 441},
    {739, 220},
    {1046, 661},
    {1174, 441},
    {1318, 661},
    {0, 220},
    {1046, 441},
    {1174, 441},
    {1318, 441},
    {523, 220},
    {880, 36},
    {1046, 404},
    {783, 36},
    {987, 36},
    {1567, 147},
    {698, 36},
    {880, 36},
    {1396, 147},
    {659, 36},
    {783, 36},
    {1318, 367},
    {698, 36},
    {1174, 624},
    {493, 36},
    {987, 404},
    {523, 36},
    {1046, 404},
    {587, 36},
    {1174, 404},
    {880, 220},
    {830, 441},
    {1396, 220},
    {1318, 220},
    {1174, 441},
    {1046, 661},
    {440, 36},
    {880, 404},
    {493, 36},
    {987, 404},
    {659, 36},
    {1046, 624},
    {783, 36},
    {1567, 404},
    {0, 220},
    {783, 36},
    {1567, 404},
    {523, 36},
    {1046, 624},
    {783, 36},
    {1567, 404},
    {0, 220},
    {783, 36},
    {1567, 404},
    {1396, 441},
    {698, 220},
    {1318, 441},
    {659, 110},
    {987, 110},
    {1174, 441},
    {1046, 294},
    {0, 36},
    {830, 110},
    {523, 220},
    {987, 661},
    {830, 441},
    {880, 1764},
};
const melody_sequence_t ark = MELODY_OF(ark_data);

const melody_sequence_t all_chime_list[] = {
    just_beep,
    pc98_pipo,
    tulula_fvu,
    oelutz_fvu,
    arise,
    caramell,
    duvet,
    truth,
    haruhi_no_omoi,
    wpip,
    hishoku,
    bouken,
    gentle_jena,
    gammapolisz,
    like_the_wind,
    waiting_freqs,
    the_way,
    guitar_hero,
    syabon,
    steiner,
    towa,
    mermgirl,
    eye_opener,
    ark,
};
const int all_chime_count = sizeof(all_chime_list)/sizeof(melody_sequence_t);

const char * all_chime_names_csv = "Just Beep,PC-98 Boot,Русь 28,Штрих-М,A.M. - Arise,Caramelldansen,BoA - Duvet,T-Square - Truth,Haruhi no Omoi,WAVE & DRAX - When Present Is Past,Hishoku no Sora,Bouken Desho Desho,Gentle Jena,Omega - Gammapolisz,Like The Wind (TMMS),NightRadio - Waiting Freqs,NightRadio - The Way,Dougal &amp; Gammer - Guitar Hero,Hachiya Nanashi - Shabon,Gate Of Steiner,deadballP - Towa ni tsuzuku gosenfu,Cream puff - Mermaid girl,Brisk &amp; Trixxy - Eye Opener,Hiroyuki Oshima - The Ark Awakes From The Sea Of Chaos,Random";
const std::vector<const char *> all_chime_names = {
    "Beep",
    "PC-98 Boot",
    "\x90\xE3\xE1\xEC 28",
    "\x98\xE2\xE0\xA8\xE5-M",
    "A.M. - Arise",
    "Caramelldansen",
    "BoA - Duvet",
    "T-Square - Truth",
    "Haruhi no Omoi",
    "When Present Is Past",
    "Hishoku no Sora",
    "Bouken Desho Desho",
    "Gentle Jena",
    "Gammapolisz",
    "Like The Wind (TMMS)",
    "Waiting Freqs",
    "The Way",
    "Guitar Hero",
    "Shabon",
    "Gate Of Steiner",
    "Towa ni tsuzuku gosenfu",
    "Mermaid girl",
    "Eye Opener",
    "The Ark Awakes From The Sea Of Chaos",
    "(Randomize)"
};