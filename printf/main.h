#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - check code
 * @id: type of char pointer
 * @f: type aknno
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);



#endif
