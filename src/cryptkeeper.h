#ifndef _CRYPTKEEPER_H
#define _CRYPTKEEPER_H

#include "defines.h"
#include "../config.h"

bool encfs_stash_change_password (const char *stash_dir, const char *old_password, const char *new_password);
void add_crypt_point (const char *stash_dir, const char *mount_dir);
void write_config ();
void spawn_filemanager (const char *dir);
void add_crypt_point (const char *stash_dir, const char *mount_dir);

extern char *config_filemanager;
extern int config_idletime;
extern bool config_keep_mountpoints;
extern bool config_allow_other;

#endif /* _CRYPTKEEPER_H */
