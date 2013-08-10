/*
  CLI generator input/output support functions.
  CVS Version: $Id: cligen_io.h,v 1.10 2013/04/12 10:59:52 olof Exp $ 

  Copyright (C) 2001-2013 Olof Hagsand

  This file is part of CLIgen.

  CLIgen is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  CLIgen is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with CLIgen; see the file COPYING.
 */

#ifndef _CLIGEN_IO_H_
#define _CLIGEN_IO_H_

/*
 * Constants
 */

#define COLUMN_WIDTH  24 /* For column formatting how many chars for command/var */

/*
 * Prototypes
 */
int cli_output_reset(void);
int cligen_output(FILE *f, char *template, ... );
int cligen_regfd(int fd, int (*cb)(int, void*), void *arg);
int cligen_unregfd(int fd);
void cligen_redraw(cligen_handle h);
int cligen_susp_hook(cligen_handle h, cligen_susp_cb_t *fn);
void cligen_exitchar_add(cligen_handle h, char c);
int cligen_help(FILE *f, parse_tree pt);

#endif /* _CLIGEN_IO_H_ */