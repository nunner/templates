#pragma once

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define logger(fmt, ...) logger_tag(NAME " " VERSION, fmt, ##__VA_ARGS__)

#define logger_success(fmt, ...) logger(ANSI_COLOR_GREEN fmt ANSI_COLOR_RESET, ##__VA_ARGS__)
#define logger_warning(fmt, ...) logger(ANSI_COLOR_YELLOW fmt ANSI_COLOR_RESET, ##__VA_ARGS__)
#define logger_fatal(fmt, ...) logger(ANSI_COLOR_RED fmt ANSI_COLOR_RESET, ##__VA_ARGS__)

void
toggle_logging();

void
logging_on();

void
logging_off();

void
logger_tag(char *tag, char *format, ...);
