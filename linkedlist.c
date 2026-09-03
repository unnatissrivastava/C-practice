#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = val;
    newNode->next = NULL;

    return newNode;
}

void display(struct Node* head) {
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {
    struct Node* head = createNode(10);

    head->next = createNode(20);
    head->next->next = createNode(30);

    display(head);

    return 0;
}
