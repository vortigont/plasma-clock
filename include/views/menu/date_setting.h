#include <views/framework.h>
#include <sound/beeper.h>
#include <fonts.h>
#include <functional>

class MenuDateSettingView: public Renderable {
public:
    int year;
    int month;
    int day;

    MenuDateSettingView(Beeper * b, int initialYear, int initialMonth, int initialDay, std::function<void(int yrs, int mth, int dy)> onFinish): 
        year(initialYear),
        month(initialMonth),
        day(initialDay),
        prevYear(initialYear),
        prevMonth(initialMonth),
        prevDay(initialDay),
        animationPhase { -1 },
        cursorTimer { 0 },
        cursorPosition { YEAR },
        isShowingCursor { false },
        font { &xnu_font },
        onFinish(onFinish),
        beeper(b) {}

    void step();
    void render(FantaManipulator *fb);

protected:
    std::function<void(int yrs, int mth, int dy)> onFinish;
private:
    enum DateCursorPosition {
        YEAR,
        MONTH,
        DAY
    };
    int prevYear;
    int prevMonth;
    int prevDay;
    int animationPhase;
    uint8_t cursorTimer;
    DateCursorPosition cursorPosition;
    bool isShowingCursor;
    const font_definition_t * font;
    void draw_dropping_digit(FantaManipulator *, char, char, int, int);
    void draw_dropping_number(FantaManipulator *, int, int, int, int);
    void add_year(bool);
    void add_month(bool);
    void add_day(bool);
    void ensure_valid_day();
    int get_max_day_for_month();
    Beeper * beeper;
};