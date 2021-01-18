#include <stdbool.h>
#include <stdio.h>
#include <stdarg.h>

#include "logging.h"

static bool logging = false;

void
toggle_logging()
{
	logging = !logging;
}

void
logging_on()
{
	logging = true;
}

void
logging_off()
{
	logging = false;
}

void
logger_tag(char *tag, char *format, ...)
{
	if(logging) 
	{
		va_list args;
		va_start(args, format);

		printf("%s[%s%10s%s] ", ANSI_COLOR_RESET, ANSI_COLOR_BLUE, tag, ANSI_COLOR_RESET);
		vprintf(format, args);
		printf("\n");

		va_end(args);
	}
}
