/*
 * tmpdir.h:
 * Temporary directory helpers.
 *
 * Copyright (c) 2012 David Suárez.
 * Email: david.sephirot@gmail.com
 *
 */

#ifndef __TMPDIR_H__
#define __TMPDIR_H__

#ifdef HAVE_CONFIG_H
    #include <config.h>
#endif

/* max filename length for a temp file */
#define TMPNAMELEN 64

typedef enum { TMPDIR_APP_OWNED = 0, TMPDIR_USER_OWNED = 1 } tmpdir_type_t;

const char* get_sys_tmpdir(void);

void set_tmpdir(const char *dir, tmpdir_type_t type, int max_files, int preserve_files);
const char* get_tmpdir(void);
void clean_tmpdir(void);

const char* make_tmpdir(void);
int check_dir_is_rw(const char* tmpdir);

int tmpfiles_limit_reached(void);

const char* tmpfile_write_mediaffile(const char* mname, const unsigned char *data, const size_t len);
void tmpfile_write_file(char* filename, const unsigned char *file_data, const size_t data_len);
void tmpfile_delete_file(char* filename);

#endif /* __TMPDIR_H__ */
