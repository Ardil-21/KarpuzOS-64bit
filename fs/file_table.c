#include "file_table.h"
#include "../lib/string.h"
#include "../drivers/screen.h"

typedef struct {
    char name[MAX_FILE_NAME];
    char content[MAX_FILE_CONTENT];
    int used;
} FileEntry;

static FileEntry file_table[MAX_FILES];

void init_file_table() {
    for (int i = 0; i < MAX_FILES; i++) {
        file_table[i].used = 0;
    }
}

int add_file(const char* name, const char* content) {
    for (int i = 0; i < MAX_FILES; i++) {
        if (!file_table[i].used) {
            str_copy(file_table[i].name, name);
            str_copy(file_table[i].content, content);
            file_table[i].used = 1;
            return 1; // başarı
        }
    }
    return 0; // başarısız
}

const char* get_file_content(const char* name) {
    for (int i = 0; i < MAX_FILES; i++) {
        if (file_table[i].used && str_cmp(file_table[i].name, name) == 0) {
            return file_table[i].content;
        }
    }
    return "Dosya bulunamadı.";
}

int delete_file(const char* name) {
    for (int i = 0; i < MAX_FILES; i++) {
        if (file_table[i].used && str_cmp(file_table[i].name, name) == 0) {
            file_table[i].used = 0;
            return 1;
        }
    }
    return 0;
}

void list_files() {
    print_str_color("Dosyalar:", 0, 12, 0x0E);
    int y = 14;
    for (int i = 0; i < MAX_FILES; i++) {
        if (file_table[i].used) {
            print_str_color(file_table[i].name, 2, y++, 0x07);
        }
    }
}
