#include <stdio.h>

int main(void){
    int a = 42;
    int *p = &a;

    printf("a 的值      = %d\n", a);
    printf("a 的地址    = %p\n", (void*)&a);
    printf("p 里存的    = %p\n", (void*)p);
    printf("*p 读出来   = %d\n", *p);

    *p = 100;
    printf("改后 a      = %d\n", a);

    printf("p+1 的地址  = %p\n", (void*)(p + 1));
    printf("sizeof(int) = %zu\n", sizeof(int));

    struct Sensor {
        unsigned char id;
        unsigned int  value;
        unsigned char flag;
    };
    struct Sensor s;
    s.id = 1; s.value = 3000; s.flag = 0;
    printf("sizeof(struct Sensor) = %zu\n", sizeof(struct Sensor));
    printf("s.value = %u\n", s.value);

    return 0;
}