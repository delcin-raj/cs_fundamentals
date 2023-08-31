#include<stdio.h>
#include "recursion.h"

long fact(int n) {
    // f(n) = n * f(n-1), f(0) = 1, not defined for -ve values
    if (n < 0) {
        printf("Error: factorial not defined for -ve values\n");
        return -1;
    }
    if (n == 0) {
        return 1;
    }
    return n * fact(n-1); // this is where recursion is happening
    // Calling the same function with a smaller problem
} 