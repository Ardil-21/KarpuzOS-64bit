#ifndef VGA_H
#define VGA_H

#include <stdint.h>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768
#define FRAMEBUFFER_ADDRESS 0xE0000000

void vga_init();
void put_pixel(int x, int y, uint32_t color);
void clear_screen(uint32_t color);

#endif
