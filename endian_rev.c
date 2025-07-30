#include <stdio.h>
#include <stdint.h>

uint32_t reverse_endian(uint32_t num) {
    return ((num >> 24) & 0xFF)        |
           ((num >> 8)  & 0xFF00)      |
           ((num << 8)  & 0xFF0000)    |
           ((num << 24) & 0xFF000000);
}

int main() {
    uint32_t num = 0x12345678;
    uint32_t reversed = reverse_endian(num);

    printf("Original : 0x%08X\n", num);      // 0x12345678
    printf("Reversed : 0x%08X\n", reversed); // 0x78563412

    return 0;
}
