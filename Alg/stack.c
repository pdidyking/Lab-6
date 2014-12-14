#include <stdio.h>

#define STACK_SIZE 100
#define PLUS push
#define MINUS pop

#include "datastruct.h"


typedef struct
{
	int data[STACK_SIZE];
	int size;
} stack;

stack s;


int initstack()
{
    s.size = 0;
}


int top()
{
    if (s.size == 0) 
        return -1;
    return s.data[s.size - 1];
}


int push(int x)
{
    if (s.size < STACK_SIZE)
        s.data[s.size++] = x;
}


int pop()
{
    if (s.size == 0)
        printf("Empty!\n");
    else
        s.size--;
return 0;
}


void print_datastructure()
{
    printf("%d\n", top());
    while (s.size - 1)
    {
        pop();
        printf("%d\n", top());
    }
}


int main()
{   
    initstack();

    parse_exec();
    print_datastructure();
    return 0;
}