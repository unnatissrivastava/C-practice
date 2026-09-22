#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;          
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

struct Node* createNode(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;  
    newNode->next = NULL;
    return newNode;
}

void enqueue(int val) {
    struct Node* newNode = createNode(val);
    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueued: %d\n", val);
}

void dequeue() {
    if (front == NULL) {
        printf("Underflow condition!!\n");
        return;
    }
    
    printf("Dequeued: %d\n", front->data);
    struct Node* temp = front; 
    front = front->next;
    
    if (front == NULL) {
        rear = NULL;
    }
    
    free(temp);
}

void display() {   
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    display();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display(); 
    dequeue();
    display(); 
    dequeue();
    dequeue();
    dequeue();
    return 0;
}

