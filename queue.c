#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int front = -1;
int rear = -1;
int arr[MAX];

void enqueue(int val){
    if(rear = MAX -1){
        printf("overflow condition");
        return ;
    }
    else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        arr[rear] = val;
    }
    else{
        rear++;
        arr[rear] = val;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        printf("underflow condition");
        return;
    }
    else if(front == rear){
        printf("%d", arr[front]);
        front = rear = -1;
    }
    else{
        printf("popped element is %d", arr[front]);
        front ++;
    }
}
void f(){
    if(front == -1 && rear == -1){
    printf("queue is empty");
    return ;
}
printf("%d", arr[front]);
}

void display(){
    for(int i = front; i<=rear; i++){
        printf("%d", arr[i]);
    }
    if(front == -1 && rear == -1){
        printf("queue is empty");
        return;
    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    return 0;
}
