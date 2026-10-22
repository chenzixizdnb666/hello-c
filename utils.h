#ifndef UTILS_H
#define UTILS_H
#include <stdint.h>

uint8_t bit_set(uint8_t v, int n);
uint8_t bit_clear(uint8_t v, int n);
uint8_t bit_toggle(uint8_t v, int n);
int bit_read(uint8_t v, int n);
void    print_bits(uint8_t v);

#endif

