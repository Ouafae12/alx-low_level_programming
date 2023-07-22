#ifndef HEADER_FILE
#define HEADER_FILE
#include <stddef.h>

int main(void);
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif
