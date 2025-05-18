TARGET = karpuzos
ISO = $(TARGET).iso

CC = x86_64-elf-gcc
LD = x86_64-elf-ld
CFLAGS = -ffreestanding -O2 -Wall -Wextra
AS = nasm

KERNEL_OBJS = boot.o kernel/kernel.o drivers/vga.o

all: $(ISO)

boot.o: boot.asm
	$(AS) -f elf64 boot.asm -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET).bin: $(KERNEL_OBJS)
	$(LD) -T linker.ld -o $@ $(KERNEL_OBJS)

$(ISO): $(TARGET).bin grub.cfg
	mkdir -p isodir/boot/grub
	cp $< isodir/boot/$(TARGET).bin
	cp grub.cfg isodir/boot/grub/
	grub-mkrescue -o $@ isodir

clean:
	rm -rf *.o $(TARGET).bin $(ISO) isodir
