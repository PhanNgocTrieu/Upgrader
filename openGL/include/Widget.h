#ifndef _WIDGET_H_
#define _WIDGET_H_

#include "gui_common.h"

namespace gui {

    typedef struct 
    {
        uint32_t width;
        uint32_t height;
    } Size;

    typedef struct {
        uint32_t x;
        uint32_t y;
    } Point;
    
    struct Rect {
        int x;
        int y;
        int width;
        int height;
    };

    class Widget;
    typedef boost::shared_ptr<Widget> WidgetPtr;

    class Widget : private boost::noncopyable {

        public:
            typedef enum {
                Transparent,
                FillColor,
                FillImage
            } BackgroundMode;

            typedef void OnPressHandle(Widget& widget);

            typedef boost::signals2::signal<OnPressHandle> OnPressSignal;

            typedef OnPressSignal::slot_type OnPressSlot;

            typedef void OnLongPressHandle(Widget& widget, bool firstTrigger);

            typedef boost::signals2::signal<OnLongPressHandle> OnLongPressSignal;

            typedef OnLongPressSignal::slot_type OnLongPressSlot;

            typedef void OnReleaseHandle(Widget& widget);

            typedef boost::signals2::signal<OnReleaseHandle> OnReleaseSignal;

            typedef OnReleaseSignal::slot_type OnReleaseSlot;
    };
};

#endif // _WIDGET_H_