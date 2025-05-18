#include "vga.h"

void put_pixel(int x, int y, uint32_t color) {
    uint32_t* framebuffer = (uint32_t*) FRAMEBUFFER_ADDRESS;
    framebuffer[y * SCREEN_WIDTH + x] = color;
}

void clear_screen(uint32_t color) {
    for (int y = 0; y < SCREEN_HEIGHT; y++) {
        for (int x = 0; x < SCREEN_WIDTH; x++) {
            put_pixel(x, y, color);
        }
    }
}

void vga_init() {
    clear_screen(0x004488FF); // Mavi ton arka plan
}
