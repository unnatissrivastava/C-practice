#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
int main() {

    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    // Add data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Subtraction
    int result = head->data - second->data - third->data;

    printf("Subtraction = %d", result);

    return 0;
}
