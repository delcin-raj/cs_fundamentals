/**
 * [1,2,3,4,5]
 * Write a function to parse these values into a c array
*/
#include <stdio.h>
#include <stdlib.h>


typedef struct int_array {
    int *p; // All pointers are 8 bytes
    int len; // 4 bytes
} int_array;
// sizeof(int_array) = ?

typedef union OptionIntArr {
    int_array arr;
    short error; // 2 or 4 bytes
} OptionIntArr;

int *parse_int_array(char *str) {

}

void print_union(OptionIntArr u) {

}

void main() {
    int x = atoi("[132, 4]");
    printf("x = %d\n", x);
    printf("sizeof(int_array) = %ld\n", sizeof(int_array));
    printf("sizeof(OptionIntArr) = %ld\n", sizeof(OptionIntArr));
    OptionIntArr op;
    op.error = 1;
    print_union(op);
}

/**
 * Memory Alignment problem
 * byte addressed means every byte (8 bits combined) has a unique name
 * [x][y] x occupies mem 1 to 12, y occupies from 13 to 24
 * x + y, 
*/