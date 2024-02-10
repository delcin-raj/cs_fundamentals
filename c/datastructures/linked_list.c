#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>

// Recursive data structure
typedef struct SinglyNode {
    int val;
    struct SinglyNode * next;
} SinglyNode;

typedef struct DoublyNode {
    int val;
    struct DoublyNode * next;
    struct DoublyNode * prev;
} DoublyNode;

typedef struct DoublyList {
    DoublyNode *head;
} DoublyList;



typedef struct SinglyListOne {
    SinglyNode *head;
} SinglyListOne;
typedef struct SinglyListTwo {
    SinglyNode *head;
    SinglyNode *tail;
} SinglyListTwo;

void insertFront(SinglyListOne *l, int val) {
    // initializing new node
    SinglyNode *node = malloc(sizeof(SinglyNode));
    node->val = val;
    node->next = l->head;

    // Updating the existing head
    l->head = node;
}

void insertBack(SinglyListOne *l, int val) {
    SinglyNode *node = malloc(sizeof(SinglyNode));
    node->val = val;
    node->next = NULL;

    SinglyNode *x = l->head;

    while (x->next != NULL) {
        x = x->next;
    }
    x->next = node;
}


/**
 * Singly linked list with only head pointer
 * Singly linked list with head and tail pointers
*/

// Let's understand the shortcomings of c programming language
// How to use this structure?
// Create a linked list with only one member ex., [1]

void printLinkedSinglyListOne(SinglyListOne l) {
    // TODO: implement this
}

int main() {
    SinglyListOne empty = {NULL};

    SinglyNode one = {1, NULL};
    SinglyListOne singleton = {&one};
    // We will use a sentinel value to specify the end of the linked list
    // How to print the linked list?
    insertFront(&singleton, 2);
    insertFront(&singleton, 2);
    insertFront(&singleton, 2);
    insertFront(&singleton, 2);
    insertFront(&singleton, 2);
    insertFront(&singleton, 2);
    insertFront(&singleton, 2);
    insertFront(&singleton, 2);
    insertFront(&singleton, 2);
    insertFront(&singleton, 2);
    printf("%d\n", singleton.head->next->val);
    insertFront(&singleton, 3);
    insertFront(&singleton, 3);
    printf("%d\n", singleton.head->next->next->next->next->val);
    return 0;
}