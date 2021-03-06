/*
 * log.h:
 * Logging functions.
 *
 * Copyright (c) 2012 David Suárez.
 * Email: david.sephirot@gmail.com
 *
 */

#ifndef __LOG_H__
#define __LOG_H__

#ifdef HAVE_CONFIG_H
    #include <config.h>
#endif

typedef enum {LOG_SIMPLY = 0, LOG_ERROR, LOG_WARNING, LOG_INFO} loglevel_t;

loglevel_t get_loglevel(void);
void set_loglevel(loglevel_t level);

void log_msg(loglevel_t level, const char *fmt, ...);

#endif /* __LOG_H__ */
