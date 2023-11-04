#include<stdio.h>

char *global_string = "some_string";
int y = 0;

int f(int y) {
    static int x = 0; //static lifetime, but local scope
    x++;
    return x + y;
    /**
     store x in static lifetime, meaning as long the program runs.
     x++;
     return x;
    */
}

int g(int y) {
    int x = 0; // local liftime and local scope.
    // Local scope means the variable is accessed only within this function
    x++;
    return x + y;
    /**
    int x = 0;
    x++;
    x = 0;
    x++; // x = 1
    */
}

int main() {
    printf("f(1) = %d\n", f(1)); // f(1) = 2
    printf("g(1) = %d\n", g(1)); // g(1) = 2
    printf("f(1) = %d\n", f(1)); // f(1) = 3
    printf("g(1) = %d\n", g(1)); // g(1) 
    y++;
    y--;
}


/**
 * generate binary for main, g and f.
 * But the code to initialize the static variable x is to be stored in static scope.
 * That code is not generated inside the function f.
*/