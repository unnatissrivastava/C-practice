#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;
int isFull(void) {
    return (rear + 1) % SIZE == front;
}
int isEmpty(void) {
    return front == -1;
}
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }

    if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    printf("%d inserted\n", value);
}
void dequeue(void) {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("%d deleted\n", queue[front]);
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}
void display(void) {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
}
int main(void) {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    dequeue();
    enqueue(50);
    enqueue(60);
    display();
    return 0;
}
