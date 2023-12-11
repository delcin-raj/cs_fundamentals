#include <stddef.h>
// Recursive data structure
typedef struct Node {
    int val;
    struct Node * next;
} Node;

typedef struct List {
    Node *head;
} List;

// Let's understand the shortcomings of c programming language
// How to use this structure?
// Create a linked list with only one member ex., [1]

void printLinkedList(List l) {
    // TODO: implement this
}

int main() {
    List empty = {NULL};

    Node one = {1, NULL};
    List singleton = {&one};
    // We will use a sentinel value to specify the end of the linked list
    // How to print the linked list?
    return 0;
}