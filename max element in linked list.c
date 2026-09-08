#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int val){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode -> data = val;
    newNode -> next = NULL;
    return newNode;
}
int maxElement(struct Node* head){
    int max = INT_MIN;
    struct Node* temp = head;
    while(temp != NULL){
        if(temp -> data > max){
            max = temp -> data;
        }
        temp = temp -> next;
    }
    return max;
}
void display(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ->", temp -> data);
        temp = temp -> next;
    }
}
int main(){
    struct Node* head = createNode(10);
    head -> next = createNode(20);
    head -> next -> next = createNode(30);
    display(head);
    printf("the maximum node is: %d", maxElement(head));
    return 0;
}
