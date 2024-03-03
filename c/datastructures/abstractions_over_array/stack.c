#include<stdio.h>
#include<stdlib.h>

#include "stack.h"

stack_t create_stack() {
    stack_t stack;
    stack.head = -1;

    for (int i = 0; i < STACK_SIZE; i++) {
        stack.arr[i] = 0;
    }

    return stack;
}

void push(stack_t *stack, int val) {
    if (stack-> head >= STACK_SIZE - 1) {
        printf("ERROR, STACK is full\n");
        exit(1); // error codes in bash
    }
    stack->arr[stack->head + 1] = val;
    stack->head++; 
}

int pop(stack_t *stack) {
    if (stack->head <= 0) {
        printf("ERROR, stack is empty\n");
        exit(1);
    }
    int *top = &stack->arr[stack->head];
    int val = *top;
    *top = 0; // deleting the top element

    // Decrementing the head pointer
    stack->head--;

    return val;
}

int peek(stack_t *stack) {
    if (stack->head < 0) {
        printf("ERROR, stack is empty\n");
        exit(1);
    }
    return stack->head;
}

void print_stack(stack_t *stack) {
    printf("[");
    int i;
    for (i = stack->head; i > 0; i--) {
        printf("%d, ", stack->arr[i]);
    }

    if (i == 0) {
        printf("%d", stack->arr[0]);
    }
    printf("]\n");
}
