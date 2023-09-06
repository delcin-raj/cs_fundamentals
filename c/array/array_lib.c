#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct int_array {
    int *p;
    int len;
} int_array;

void fill(int_array arr, int v) {
    for (int i = 0; i < arr.len; i++) {
        arr.p[i] = v;
    }
} 

int_array init(int len) {
    int_array arr;
    arr.p = malloc(sizeof(int) * len);
    arr.len = len;

    fill(arr, 0);
    return arr;
}

void print_array(int_array arr) {
    // [1,2,3]
    printf("[");

    for (int i = 0; i < arr.len; i++) {
        printf("%d", arr.p[i]);

        if (i < arr.len - 1) {
            printf(", ");
        }
    }

    printf("]\n");
}

void swap_i_j(int_array arr, int i, int j) {
    assert(i < arr.len && i > -1);
    assert(j < arr.len && j > -1);

    int t = arr.p[i];
    arr.p[i] = arr.p[j];
    arr.p[j] = t;
}

int main() {
    int_array arr = init(6);

    arr.p[1] = 2;
    arr.p[2] = 3;
    print_array(arr);
    swap_i_j(arr, 1, 2);
    print_array(arr);
}