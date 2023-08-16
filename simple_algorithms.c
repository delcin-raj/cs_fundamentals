#include<stdio.h>
int find_max_index(int *arr, int len) {
    // TODO
    // [-1, -2, -3]
    // [] -> it does not exist
    if (len < 1) {
        printf("Error: maximum does not exist for empty array\n");
        return -1;
    }
    int _max = arr[0]; 
    int _max_index = 0;

    for (int i = 1; i < len; i++) {
        if (arr[i] > _max) {
            _max = arr[i];
            _max_index = i;
        }
    }
    return _max_index;
}

int find_min_index(int *arr, int len) {
    // TODO
    // [-1, -2, -3]
    // [] -> it does not exist
    if (len < 1) {
        printf("Error: minimum does not exist for empty array\n");
        return -1;
    }
    int _min = arr[0]; 
    int _min_index = 0;

    for (int i = 1; i < len; i++) {
        if (arr[i] < _min) {
            _min = arr[i];
            _min_index = i;
        }
    }
    return _min_index;
}

void swap(int *arr, int i, int j) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void selection_sort(int *arr, int len) {
    for (int start = 0; start < len - 1; start++) {
        int min_index = find_min_index(arr + start, len - start);
        swap(arr, start, start + min_index);
    }
}



long fact(int n) {
    if (n <= 1) return 1;
    long res = 1;
    for (int i = 2; i < n; i++) {
        res *= i;
    }
    return res;
}
long fact(int n) {
    if (n <= 1) return 1;
    long res = 1;
    for (int i = 2; i < n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    printf("%ld\n", fact(10));
    printf("%ld\n", fact(20));
}