#include<stdlib.h>
#include<stdio.h>

int main() {
    //int n;
    //scanf("%d", &n);
    //int arr[n];
    int *arr = malloc(sizeof(10000000)*4);
    free(arr);
}