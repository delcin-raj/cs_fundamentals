#include<stdio.h>

int main() {
    /*
    Operating system manages how to run a program.
    It virtualizes the underlying computing resources like 
    CPU, RAM and cache to run multiple programs as if each
    program untilizes the whole computing system for themselves.
    **/ 
    int c = 0;
    char *str = "some string";

    printf("%c int format = %d\n", str[0], str[0]);
    printf("the value stored in str = %p\n", str);
    printf("num 115 is seen as char %c\n", 115);

    // Intro to pointer arithmetic
    printf("the value stored in str + 1 = %p\n", str + 1);

    int *p = str;

    printf("p + 1, str + 1 = %p, %p\n", p + 1 ,str + 1);

    long long p_1 = p + 1;
    long long p_0 = p;

    if (p_1 - p_0 == sizeof(int)) {
        printf("In pointer arithmentic p + 1 is interpreted as p + sizeof(int)\n");
    }

    long *q = str;
    p_1 = q + 1;
    p_0 = q;

    if (p_1 - p_0 == sizeof(int)) {
        printf("In pointer arithmentic p + 1 is interpreted as p + sizeof(int)\n");
    } else if (p_1 - p_0 == sizeof(long)) {
        printf("long pointer arithmetic is bigger than int %d\n", sizeof(long));
    }

    return 0;
}