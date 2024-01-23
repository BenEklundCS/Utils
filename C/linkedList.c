#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
}

int main(int argc, char** argv) {
    struct node *head;
    struct node *one;
    struct node *two;
    struct node *three;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    printLinkedlist(head);
}