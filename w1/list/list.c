#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* node_create(int d){
    Node *n = malloc(sizeof(Node));
    if(n == NULL) return NULL;
    n->data = d;
    n->next = NULL;
    return n;
}

void push_front(Node **head, int d){
    Node *n = node_create(d);
    n->next = *head;
    *head = n;
}

void list_print(Node *head){
    for(Node *p = head; p != NULL; p = p->next){
        printf("%d -> ", p->data);
    }
    printf("NULL\n");
}

void list_free(Node *head){
    Node *p = head;
    while(p){
        Node *t = p->next;
        free(p);
        p = t;
    }
}

int main(void){
    Node *head = NULL;
    push_front(&head, 3);
    push_front(&head, 2);
    push_front(&head, 1);
    list_print(head);
    list_free(head);
    return 0;
}