; boot.asm - Multiboot2 compliant bootloader entry

section .multiboot_header
align 8
    dd 0xe85250d6           ; multiboot2 magic number
    dd 0                   ; architecture (0 for i386)
    dd multiboot_end - multiboot_header ; header length
    dd -(0xe85250d6 + 0 + (multiboot_end - multiboot_header)) ; checksum

multiboot_header:
    ; Required end tag
    dw 0
    dw 0
    dd 8
multiboot_end:

section .text
global _start
_start:
    extern kernel_main
    call kernel_main
    cli
.halt:
    hlt
    jmp .halt
