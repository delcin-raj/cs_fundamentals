#include<stdio.h>
#include "stack.h"

int main() { 
    stack_t stack = create_stack();
    print_stack(&stack);

    push(&stack, 10);
    print_stack(&stack);

    push(&stack, 10);
    print_stack(&stack);

    int val = pop(&stack);
    printf("Popped val = %d\n", val);
    print_stack(&stack);

    return 0;
}