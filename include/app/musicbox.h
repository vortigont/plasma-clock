#pragma once
#include <views/overlays/rain_ovl.h>
#include <views/overlays/thunder_ovl.h>
#include <sound/sequencer.h>
#include <sound/melodies.h>
#include <views/weather/chart_common.h>

class AppShimMusicbox : public WeatherChartCommon {
public:
    AppShimMusicbox(NewSequencer * s);
    void prepare() override;
    void step() override;
    void cleanup() override;

private:
    void load_and_play();

    NewSequencer * seq;
    RainOverlay * rain;
    ThunderOverlay * thunder;
    int decay = 2;
    int rise = 4;
    int min_freq = 250;
    int max_freq = 3500;
    int minTrackNo = 4;
    int maxTrackNo = all_chime_count - 1;
    int trackNo = minTrackNo;
};