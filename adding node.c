#include <stdio.h>
#include <stdlib.h>
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
void insertnode(struct Node* head, int val){
    struct Node* newNode = createNode(val);
    struct Node* temp = head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
    temp -> next = newNode;
}
void display(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ->", temp -> data);
        temp = temp -> next;
    }
}
