#include <stddef.h>
#include <stdio.h>

typedef struct IntLinkedList {
    int val;
    struct IntLinkedList* next;
} list;


void printLinkedList(list* l) {
    list* current = l;

    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }

    printf("NULL\n");
}

int main() {
    
    list node1 = {1, NULL};
    printLinkedList(&node1);

    return 0;
}