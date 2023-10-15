#include<stdio.h>
#include<math.h>

// short_int, 4 bits -> 1010 -> -ve number
// 0110 + 0110 -> 1100


int main() {
    int bit_size = sizeof(int) * 8;
    // 2 ^ 2 = 4
    int x = pow(2, bit_size - 2);
    printf("x = %d\n", x);
    x = x + x;
    printf("x = %d\n", x);
}