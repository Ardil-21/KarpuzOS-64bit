#ifndef FS_H
#define FS_H

void fs_init();
int fs_create(const char* name, const char* content);
const char* fs_read(const char* name);
int fs_delete(const char* name);
void fs_list();

#endif
