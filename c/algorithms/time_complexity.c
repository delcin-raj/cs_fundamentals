#include<stdlib.h>
#include<stdio.h>
int fib_few_lines(int n) {
    if (n <= 1) return 1;
    return fib_few_lines(n-1) + fib_few_lines(n-2);
}

int fib_many_lines(int n) {
    int *p = malloc(sizeof(int) * (n+1));
    p[0] = 1; p[1] = 1;
    for(int i = 2; i <= n; i++) {
        p[i] = p[i-1] + p[i-2];
    }
    return p[n];
}

int main() {
    printf("manylines = %d\n", fib_many_lines(50));
    printf("fewlines = %d\n", fib_few_lines(50));
}