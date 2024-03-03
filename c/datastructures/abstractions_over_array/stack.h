#define STACK_SIZE 1024 // 2^10

typedef struct stack {
    int arr[STACK_SIZE];
    int head;
} stack_t;

// If the size of the array is too small for the user then
// the user will not be able to use the stack as they intended.
// If the size is too big but the user only uses a small fraction of
// the allocated array then you are wasting the memory.

stack_t create_stack();

void push(stack_t *stack, int val);

int pop(stack_t *stack);

int peek(stack_t *stack);

void print_stack(stack_t *stack);
