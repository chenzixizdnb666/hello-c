#include "utils.h"
#include <stdio.h>

uint8_t bit_set(uint8_t v, int n)    { return v |  (uint8_t)(1 << n); }
uint8_t bit_clear(uint8_t v, int n)  { return v & (uint8_t)~(1 << n); }
uint8_t bit_toggle(uint8_t v, int n) { return v ^ (uint8_t)(1 << n); }

void print_bits(uint8_t v){
    for(int i = 7; i >= 0; i--) putchar((v & (1 << i)) ? '1' : '0');
    putchar('\n');
}

