#include<stdio.h>

int printDigits(int x) {
    printf("Printing for x = %d\n", x);
    while (x > 0) {
        printf("%d\n", x % 10);
        x = x / 10;
    }
}

void printFirstAndLastDigit(int x) {
    if (x < 10) {
        printf("%d\n", x);
    } else {
        printf("Last digit of x = %d\n", x % 10);

        while (x / 10 > 0) x = x / 10;

        printf("First digit of x = %d\n", x % 10);
    }
}

int main() {
    printFirstAndLastDigit(9531238);
    printDigits(1);
    printDigits(0);
    printf("Enter the length\n");
    int length;
    scanf("%d", &length);
    int arr[length];

    printf("Enter the digits\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", arr+i);
    }
}