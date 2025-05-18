#ifndef FILE_TABLE_H
#define FILE_TABLE_H

#define MAX_FILES 64
#define MAX_FILE_NAME 32
#define MAX_FILE_CONTENT 256

void init_file_table();
int add_file(const char* name, const char* content);
const char* get_file_content(const char* name);
int delete_file(const char* name);
void list_files();

#endif
