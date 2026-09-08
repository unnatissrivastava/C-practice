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
