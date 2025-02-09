// 5. Create a program to implement a simple linked list using pointers.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* new_node;
    int num;
    printf("Enter number of nodes: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        new_node = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    printf("Linked list: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}
