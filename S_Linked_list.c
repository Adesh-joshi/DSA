#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct SinglyLinkedList {
    struct Node* head;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct SinglyLinkedList* createList() {
    struct SinglyLinkedList* list = (struct SinglyLinkedList*)malloc(sizeof(struct SinglyLinkedList));
    list->head = NULL;
    return list;
}

void insert(struct SinglyLinkedList* list, int data) {
    struct Node* newNode = createNode(data);
    if (list->head == NULL) {
        list->head = newNode;
    } else {
        struct Node* current = list->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    printf("%d inserted successfully.\n", data);
}

void delete(struct SinglyLinkedList* list, int data) {
    if (list->head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node* current = list->head;
    struct Node* prev = NULL;

    if (current != NULL && current->data == data) {
        list->head = current->next;
        free(current);
        printf("%d deleted successfully.\n", data);
        return;
    }

    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("%d not found in the list. Cannot delete.\n", data);
    } else {
        prev->next = current->next;
        free(current);
        printf("%d deleted successfully.\n", data);
    }
}

// Function to display the linked list
void displayList(struct SinglyLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
    } else {
        struct Node* current = list->head;
        printf("List elements: ");
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

int main() {
    struct SinglyLinkedList* list = createList();
    insert(list, 55);
    insert(list, 65);
    insert(list, 69);
    displayList(list);
    delete(list, 65);
    displayList(list);
    while (list->head != NULL) {
        struct Node* temp = list->head;
        list->head = list->head->next;
        free(temp);
    }
    free(list);
    return 0;
}
