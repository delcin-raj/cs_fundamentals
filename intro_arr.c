#include<stdio.h>
#include<stdlib.h>
int main() {
    int arr[500]; // static array, because the array is created in the stack
    printf("sizeof(arr) = %ld\n", sizeof arr);
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("len(arr) = %ld\n", sizeof(arr) / sizeof(int));


    int n;
    scanf("%d", &n);
    int arr1[n];
    printf("sizeof(arr1) = %ld\n", sizeof arr1);


    int *p = malloc(sizeof(int) * 500);

    const int y = 5;    
    printf("sizeof(p) = %ld\n", sizeof(p));

    if (sizeof(int) == sizeof(int*)) {
        printf("ABCD\n");
    }

    if (sizeof(int *) == sizeof(char*)) {
        printf("abracadabra\n");
        // The explanation for this rule that all pointer variables have same size
        // in a given computer computer architecture exists in chapter 4.6 of Null book
    }    
} 