#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;

void insert(int value) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
    } else {
        struct node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
}

void delete(int value) {
    if (head == NULL) {
        return;
    }
    if (head->data == value) {
        head = head->next;
        return;
    }
    struct node* current = head;
    while (current->next != NULL) {
        if (current->next->data == value) {
            current->next = current->next->next;
            return;
        }
        current = current->next;
    }
}

void display() {
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void main() 
{
    int choice, value;
    while (1) {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                delete(value);
                break;
            case 3:
                printf("The elements of the list are: ");
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
   }
