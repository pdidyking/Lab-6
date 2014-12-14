#include <stdio.h>

#define QUEUE_SIZE 100
#define PLUS  enqueue
#define MINUS dequeue

#include "datastruct.h"


typedef struct 
{
    int q[QUEUE_SIZE];
    int first;
    int last;
    int count;
} queue;

queue q;


void initqueue()
{
    q.first = 0;
    q.last = QUEUE_SIZE - 1;
    q.count = 0;
}


int enqueue(int x)
{
    if (q.count <= 100)
    {
        q.last = (q.last + 1) % QUEUE_SIZE;
        q.q[ q.last ] = x;
        q.count = q.count + 1;
    }
    
    else
    	printf("Overflow!");
}


int dequeue()
{
    if (q.count != 0)
    {
	    int x = q.q[ q.first ];
	    q.first = (q.first + 1) % QUEUE_SIZE;
	    q.count = q.count - 1; return x;
	}
return 0;
}


void print_datastructure()
{
    while (q.count)
        printf("%d\n", dequeue());
}


int main()
{   
    initqueue();
    
    parse_exec();
    print_datastructure();
    return 0;
}