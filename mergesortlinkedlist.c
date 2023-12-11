#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtFront(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

struct Node* merge(struct Node* left, struct Node* right) {
    if (left == NULL) return right;
    if (right == NULL) return left;

    struct Node* result = NULL;

    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }

    return result;
}
void mergeSort(struct Node** head) {
    struct Node* current = *head;
    struct Node* left;
    struct Node* right;

    if (current == NULL || current->next == NULL) {
        return; 
    }
    splitList(current, &left, &right);
    mergeSort(&left);
    mergeSort(&right);
    *head = merge(left, right);
}
void splitList(struct Node* source, struct Node** front, struct Node** back) {
    struct Node* slow;
    struct Node* fast;

    if (source == NULL || source->next == NULL) {
        *front = source;
        *back = NULL;
    } else {
        slow = source;
        fast = source->next;

        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        *front = source;
        *back = slow->next;
        slow->next = NULL;
    }
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    insertAtFront(&head, 4);
    insertAtFront(&head, 2);
    insertAtFront(&head, 7);
    insertAtFront(&head, 1);
    insertAtFront(&head, 9);
    insertAtFront(&head, 5);
    printf("Original Linked List: ");
    printList(head);
    mergeSort(&head);

    printf("Sorted Linked List: ");
    printList(head);

    return 0;
}
