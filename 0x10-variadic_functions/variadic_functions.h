#ifndef HEADER__FILE
#define HEADER__FILE

int _putchar(char c);

void print_int(va_list arg);

void print_char(va_list arg);

void print_float(va_list arg);

void print_string(va_list arg);

int sum_them_all(const unsigned int n, ...);

void print_number(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
