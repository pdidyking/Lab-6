#define MAX 100


typedef struct  
{
    int     data[MAX];
    int     size;
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
    if (s.size < MAX)
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