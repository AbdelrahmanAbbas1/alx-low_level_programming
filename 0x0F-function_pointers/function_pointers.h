#ifndef FUNCTION_POINTER_H

#define FUNCTION_POINTER_H

typedef unsigned long int size_t;

int _putchar(int c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
