#include "calculator.h"
#include "../drivers/screen.h"

void launch_calculator() {
    clear_screen_color(0x1E); // sarımsı arka plan
    print_str_color("KarpuzOS Hesap Makinesi", 0, 0, 0x00);
    print_str_color("Henüz interaktif değil, ama buradayız!", 0, 2, 0x00);
}
