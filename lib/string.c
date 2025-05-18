#include "string.h"

int strlen(const char* str) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

void strcpy(char* dest, const char* src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
}
