#include <stdio.h>
#include <stdlib.h>


struct node
{
  int data;
  struct node *next;
}*first = NULL;


int initllist()
{
	struct node *temp;
	struct node *ll = (struct node*)malloc(sizeof(struct node));
  	
}


int insert(int x, int y)
{ 
	&ll.data = x;
  	if(first != NULL)
  	{
    	temp = first;
      	while(temp.next != first)
        	temp = temp.next;
    	temp.next = ll;
  	}

    else
      	first = ll;
    ll.next = NULL;
}


int delete(int x)
{
  	struct  node  *temp;
  	temp = first;
  	first = first.next;
  	temp.next = NULL;
  	free(temp);
}