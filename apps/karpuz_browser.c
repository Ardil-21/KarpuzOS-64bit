#include "karpuz_browser.h"
#include "../drivers/screen.h"

void launch_karpuz_browser() {
    clear_screen_color(0x1F); // Açık mavi ekran
    print_str_color("🌐 Karpuz Tarayici - v0.1", 0, 0, 0x0F);
    print_str_color("Adres: https://karpuzweb.local", 0, 2, 0x07);

    print_str_color("[Ana Sayfa]  [Oyunlar]  [Hakkında]  [Cikis]", 0, 4, 0x0E);
    print_str_color("------------------------------------------", 0, 5, 0x08);
    print_str_color("Bu sayfa internetle bagli degil.", 0, 7, 0x0F);
    print_str_color("Ama bu tarayici KarpuzOS icin ozel tasarlandi!", 0, 8, 0x07);
}
