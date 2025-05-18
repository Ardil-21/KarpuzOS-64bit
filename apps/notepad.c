#include "notepad.h"
#include "../drivers/screen.h"
#include "../lib/string.h"

void launch_notepad() {
    clear_screen_color(0x07); // beyaz arka plan
    print_str_color("Not Defteri - KarpuzOS", 0, 0, 0x00);

    print_str_color("Yazmaya başla (örnek):", 0, 2, 0x00);
    print_str_color("Merhaba dünya!", 0, 4, 0x00);
}
