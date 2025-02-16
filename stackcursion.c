#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Stack structure
struct Stack {
    int arr[MAX];
    int top;
};

// Function to initialize the stack
void initStack(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++(stack->top)] = value;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->arr[(stack->top)--];
}

// Function to get the top element of the stack
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->arr[stack->top];
}

// Recursive function to insert an element at the bottom of the stack
void insertAtBottom(struct Stack* stack, int value) {
    if (isEmpty(stack)) {
        push(stack, value);
        return;
    }
    
    int topElement = pop(stack);
    insertAtBottom(stack, value);
    push(stack, topElement);
}

// Recursive function to reverse the stack
void reverseStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        return;
    }
    
    // Pop the top element
    int topElement = pop(stack);
    
    // Recursively reverse the rest of the stack
    reverseStack(stack);
    
    // Insert the popped element at the bottom
    insertAtBottom(stack, topElement);
}

// Function to display the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initStack(&stack);
    
    // Push elements onto the stack
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    
    printf("Original Stack: ");
    display(&stack);
    
    // Reverse the stack
    reverseStack(&stack);
    
    printf("Reversed Stack: ");
    display(&stack);
    
    return 0;
}
