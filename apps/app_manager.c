#include "notepad.h"
#include "calculator.h"
#include "../drivers/screen.h"

void open_app(const char* name) {
    if (str_cmp(name, "notepad") == 0) {
        launch_notepad();
    } else if (str_cmp(name, "calculator") == 0) {
        launch_calculator();
    } else {
        print_str_color("Uygulama bulunamadi.", 0, 20, 0x04);
    }
}
