#include "../drivers/vga.h"

void kernel_main() {
    vga_init(); // Grafik ekranı başlat

    // Basit bir karpuz simgesi çiz (örnek piksel)
    put_pixel(512, 384, 0x00FF0000); // Ortada kırmızı piksel (karpuz gibi)
    
    while (1);
}
