#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1) {
        printf("Overflow condition\n");
        return;
    }

    top++;
    stack[top] = val;
}

int pop() {
    if (top == -1) {
        printf("Underflow condition\n");
        return -1;
    }

    int val = stack[top];
    top--;
    return val;
}

int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }

    return stack[top];
}

void display() {
    if (top == -1) {
        printf("Empty stack\n");
        return;
    }

    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    printf("Popped element is %d\n", pop());
    printf("Peek element is %d\n", peek());

    return 0;
}
