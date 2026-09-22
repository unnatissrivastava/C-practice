#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* top = NULL;
struct Node* createNode(int val){
    struct Node* newNode;
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next = top;
    top = newNode;
    printf("%d pushed into stack \n", val);
}
void push(int val){
    struct Node* newNode = createNode(val);
    newNode -> next = top;
    top = newNode;
}
int pop(){
    if(top ==NULL){
        printf("underflow condition!!");
        return;
    }
    int val = top ->data;
    struct Node* temp = top;
    top = top -> next;
    free(temp);
    return val;
}
int peek(){
    if(top == NULL){
        printf("stack is empty!!");
        return -1;
    }
    return top -> data;
}
void display(){
    struct Node* temp{
        printf("%d", temp -> data);
        temp = temp -> next;

    }
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    printf("popped element is %d", pop());
    display();
    return 0;
}
