#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned int long n , unsigned int index);
int set_bit(unsigned int long *n, unsigned int indext);
int clear_bit(unsigned long int *n, unsigned int index);

#endif /* MAIN_H */
