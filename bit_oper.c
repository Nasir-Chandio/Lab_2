#include <stdio.h>

// Function to set the nth bit of a number
int set_bit(int num, int n) {
    return num | (1 << n);
}

// Function to clear the nth bit of a number
int clear_bit(int num, int n) {
    return num & ~(1 << n);
}

// Function to toggle the nth bit of a number
int toggle_bit(int num, int n) {
    return num ^ (1 << n);
}

int main() {
    int num = 5;  // Binary: 0101
    int bit_pos = 1;
    
    printf("Original number: %d\n", num);
    
    // Set bit
    num = set_bit(num, bit_pos);
    printf("After setting bit %d: %d\n", bit_pos, num);
    
    // Clear bit
    num = clear_bit(num, bit_pos);
    printf("After clearing bit %d: %d\n", bit_pos, num);
    
    // Toggle bit
    num = toggle_bit(num, bit_pos);
    printf("After toggling bit %d: %d\n", bit_pos, num);
    
    return 0;
}