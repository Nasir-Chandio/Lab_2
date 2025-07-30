// main.c
#include <stdio.h>
#include "m.h" 

int main() {
    printf("int is signed: %d\n", IS_SIGNED(int));             // 1
    printf("unsigned int is signed: %d\n", IS_SIGNED(unsigned int)); // 0
    return 0;
}
