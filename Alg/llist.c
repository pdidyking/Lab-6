#include <stdio.h>
#include <stdlib.h>

#define PLUS  insert
#define MINUS delete

#include "datastructll.h"


struct node
{
    int data;
    struct node *next;
};


int insert(struct node** head, int data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = (*head);
    (*head) = new_node;
}


int delete(struct node **head, int key)
{
    struct node* temp = *head, *prev;
    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}


void print_datastructure(struct node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main()
{
    struct node* head = NULL;
 
    parse_exec();
  	print_datastructure(head);
  	return 0;
}