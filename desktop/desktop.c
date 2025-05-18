#include "../drivers/screen.h"
#include "../lib/string.h"
#include "desktop.h"

void draw_desktop() {
    clear_screen_color(0x1F);  // Mavi arka plan (örnek renk)

    // Masaüstü başlığı
    print_str_color("KarpuzOS Masaüstü", 0, 0, 0x0F); // Beyaz yazı

    // Basit ikonlar
    print_str_color("[ Uygulamalar ]", 2, 3, 0x07); // Gri yazı
    print_str_color("[ Ayarlar     ]", 2, 5, 0x07);
    print_str_color("[ Market      ]", 2, 7, 0x07);
    print_str_color("[ Kapat       ]", 2, 9, 0x07);
}
