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
  printf("\n");
}

void addToEnd(struct node *p, int data) {
  while (p->next != NULL) {
    p = p->next;
  }
  
  struct node *new;
  new = malloc(sizeof(struct node));
  new->data = data;
  new->next = NULL;
  p->next = new;

}

void addToFront(struct node *head, int data) {
  struct node *new, *temp;
  // Allocate the new node
  new = malloc(sizeof(struct node));
  // Move the heads data to the new node, and move the new data to the head node
  new->data = head->data;
  head->data = data;
  // Connect the nodes together
  temp = head->next;
  head->next = new;
  new->next = temp;
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

    printf("\n");
    printLinkedlist(head);
    addToEnd(head, 10);
    printLinkedlist(head);
    addToFront(head, 100);
    printLinkedlist(head);
}