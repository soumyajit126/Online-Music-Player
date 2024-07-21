#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack->data[++stack->top] = value;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack->data[stack->top--];
}

int evaluateOperation(int operand1, int operand2, char operator) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
    }
    return 0; // Handle invalid operators
}

int evaluatePrefixExpression(char *expression) {
    Stack stack;
    initialize(&stack);

    int length = strlen(expression);
    for (int i = length - 1; i >= 0; i--) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            int operand1 = pop(&stack);
            int operand2 = pop(&stack);
            int result = evaluateOperation(operand1, operand2, expression[i]);
            push(&stack, result);
        }
    }

    return pop(&stack);
}

int main() {
    char expression[MAX_SIZE];
    printf("Enter the prefix expression: ");
    scanf("%s", expression);

    int result = evaluatePrefixExpression(expression);
    printf("Result: %d\n", result);

    return 0;
}