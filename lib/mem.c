#include "mem.h"

void* memcpy(void* dest, const void* src, int n) {
    char* d = (char*)dest;
    const char* s = (const char*)src;
    for (int i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}

void* memset(void* dest, int val, int count) {
    unsigned char* ptr = (unsigned char*)dest;
    for (int i = 0; i < count; i++) {
        ptr[i] = (unsigned char)val;
    }
    return dest;
}
