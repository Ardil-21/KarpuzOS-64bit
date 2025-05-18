#include "ctype.h"

int isdigit(char c) {
    return c >= '0' && c <= '9';
}

int isalpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
