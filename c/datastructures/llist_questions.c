#include<stddef.h>
#include<stdio.h>
typedef struct Node {
    int val;
    struct Node * next;
} Node;

typedef struct List {
    Node *head;
} List;

int main() {
    Node x = {1, NULL};
    Node y = {2, &x};
    Node empty = {};
    Node zero = {0, NULL};
    printf("empty.val = %d\n", empty.val);
    printf("zero.val = %d\n", zero.val);

    List l = {&y};

    List empty_list = {NULL};
    printf("%d\n",empty_list.head->val);

    printf("first element = %d\n", (*l.head).val);
    printf("second element = %d\n", l.head->next->val);
}