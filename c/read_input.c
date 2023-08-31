#include<stdio.h>

int main() {
    // A value that cannot be deduced at compile time are called dynamic value
    int x;
    scanf("%d", &x);
    printf("The value read is %d\n", x);
}