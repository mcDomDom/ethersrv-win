#ifndef __DIRENT_H__
#define __DIRENT_H__

#include <windows.h>

struct dirent {
  DWORD          d_type;
  char           d_name[_MAX_PATH];
};

typedef struct {
  HANDLE h;
  WIN32_FIND_DATAA *fd;
  BOOL has_next;
  struct dirent entry;
} DIR;

DIR *opendir(const char *name);
struct dirent *readdir(DIR *dir);
int closedir(DIR *dir);

#endif
