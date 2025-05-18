#include "fs.h"
#include "file_table.h"
#include "../lib/string.h"
#include "../drivers/screen.h"

void fs_init() {
    init_file_table();
}

int fs_create(const char* name, const char* content) {
    return add_file(name, content);
}

const char* fs_read(const char* name) {
    return get_file_content(name);
}

int fs_delete(const char* name) {
    return delete_file(name);
}

void fs_list() {
    list_files();
}
