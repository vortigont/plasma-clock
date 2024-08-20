#pragma once
#include <views/framework.h>

class WeatherChartCommon: public Screen {
public:
    void prepare() override;
    void render(FantaManipulator* fb) override;
    void step() override;

protected:
    WeatherChartCommon() {}

    struct DataPoint {
        int annotation;
        int value;
    };

    const char * hint = nullptr;

    bool autoscale = true;
    int minimum = 0;
    int maximum = 100;

    int cursor_index = -1;
    std::vector<DataPoint> points = {};

    bool show_minimum = true;
    bool show_maximum = true;
    bool filled = true;

    void update_minmax_if_needed();

private:
    uint8_t cursor_framecounter = 0;
    uint8_t hint_framecounter = 0;
    bool cursor_phase = false;
    int reveal_index = 0;
    bool show_hint = true;
    bool show_legend = true;
};
