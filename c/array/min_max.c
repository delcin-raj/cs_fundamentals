#include<stdlib.h>
int find_min_or_max(int *arr, int len, int flag) {
    if (len <= 0) {
        printf("Minimum or maximum of an empty array is undefined\n");
        return -1;
    }
    int m = flag * arr[0]; // We are assuming 1st element of the array to be the minimum or maximum.
    for (int i = 1; i < len; i++) {
        if (flag * arr[i] < m) {
            // When our assumption is known to be wrong, then we update
            // We rectify our mistake
            m = arr[i] * flag;
        }
    }
    return m * flag;
}

int min(int *arr, int len) {
    return find_min_or_max(arr, len, 1);
}

int max(int *arr, int len) {
    return find_min_or_max(arr, len, -1);
}

/**
 * [9,3,1,10,12,5]
 * m = -9
 * 
*/