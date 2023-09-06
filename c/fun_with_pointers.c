#include<stdio.h>

void swap(int *a, int *b) {
    int t = *a; // dereference the value pointed by the pointer variable a
    *a = *b;
    *b = t;
}


int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p = arr;
    for (int i = 0; i < 10; i++) {
        printf("p = %p, *p = %d\n", p, *p);
        p++;
    }

    // Task
    // write a function to swap two variables
    int a = 5, b = 90;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
}