#pragma once
// Compatibility shim: map old libnds dir API to POSIX
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

#define DIR_ITER DIR

static inline DIR_ITER* diropen(const char* path) { return opendir(path); }
static inline void dirclose(DIR_ITER* dir) { closedir(dir); }

static inline int dirnext(DIR_ITER* dir, char* filename, struct stat* st)
{
    struct dirent* ent = readdir(dir);
    if (!ent) return -1;
    strcpy(filename, ent->d_name);
    memset(st, 0, sizeof(*st));
    if (ent->d_type == DT_DIR)
        st->st_mode = S_IFDIR;
    return 0;
}
