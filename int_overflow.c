#include<stdio.h>
#include<math.h>


int main() {
    int bit_size = sizeof(int) * 8;
    // 2 ^ 2 = 4
    int x = pow(2, bit_size - 2);
    printf("x = %d\n", x);
    x = x + x;
    printf("x = %d\n", x);

    x = -1;
    x = x + x;
    printf("x = %d\n", x);
}