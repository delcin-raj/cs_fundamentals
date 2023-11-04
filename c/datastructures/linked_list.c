#include<stddef.h>
// Recursive data structure
typedef struct IntLinkedList {
    int val;
    struct InLinkedList * next;
} list;

// Let's understand the shortcomings of c programming language
// How to use this structure?
// Create a linked list with only one member ex., [1]

void printLinkedList(list l) {
    // TODO: implement this
}

int main() {
    list l = {1, NULL};
    // We will use a sentinel value to specify the end of the linked list
    // How to print the linked list?
    return 0;
}