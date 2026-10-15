#include <stdio.h>
#include "utils.h"

int main(void){
    uint8_t reg = 0x00;          // 假装这是一个寄存器的值
    reg = bit_set(reg, 0);
    reg = bit_set(reg, 3);
    print_bits(reg);             // 00001001
    reg = bit_toggle(reg, 0);
    print_bits(reg);             // 00001000
    reg = bit_clear(reg, 3);
    print_bits(reg);             // 00000000
    printf("sizeof(reg) = %zu\n", sizeof(reg));
    return 0;
}
