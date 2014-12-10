#include <stdio.h>

// Stack: 
//#define PLUS push
//#define MINUS pop

// Queue:
//#define PLUS  enqueue
//#define MINUS dequeue

// Linked List:
#define PLUS  insert
#define MINUS delete

//#include "stack.c"
//#include "queue.c"
#include "llist.c"

//#include "datastruct.h"
#include "datastructll.h"


void print_datastructure()
{/* Stack:
    printf("%d\n", top());
    while (s.size - 1)
    {
    	pop();
    	printf("%d\n", top());
    }*/
   
    //Queue:
    //while (q.count)
        //printf("%d\n", dequeue());

    //Linked List:
    struct node *temp;
    temp = first;
    while(temp != NULL)
    printf("%d\n",temp.data);
    temp = temp.next;
}


int main()
{	
    //initque();
    //initstack();
    initllist();
	
    parse_exec();
	print_datastructure();
	return 0;
}



































/*
    initstack();
        push(1);
        push(2);
        push(3);
        while (s.size)
            printf("%d\n", pop(s));
    return 0;
    */