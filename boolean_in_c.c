#include<stdio.h>
#include<stdlib.h>

// # is called the preprocessor operator

int main() {
    int x;
    x = 1 == 1;
    printf("x = %d\n", x);
    x = 1 != 1;
    printf("x = %d\n", x);

    if (500) {
        printf("500 is also true\n");
    }
    if (-500) {
        printf("-500 is also true\n");
    }
    if (0.003) {
        printf("0.003 is also true\n");
    }
    char *p = malloc(100); //Just allocate 100 bytes and store the address of the first byte to p
    if (p) {
        printf("Any pointer value is true\n");
    }

    int *q = NULL;
    if (q) {
        printf("Null is also true\n");
    } else {
        printf("Null is false\n");
    }

    if (NULL == 0) {
        printf("NULL is nothing but 0\n");
    }

    // According to C compiler only 0 is considered as false, everything else is True
}