#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;

void push(int element)
{
    if(top>MAX-1)
    {
        printf("\n stack overflow,we cant push more elements %d onto the stack \n ",element);
    }
    else
    {
        stack[++top]=element;
        printf("\n element %d has been pushed onto the stack \n",element);
    }
}
int pop()

{
    if(top==-1)
    {
        printf("stack underflow \n");
    }
    else
    {
        int x= stack[top];
         stack[top]=-1;
         top--;
         printf("element %d has been popped \n",x);
        
    }
    
    
}
void peek()
{
    if(top==-1)
    {
        printf("stack underflow,there is no element in the stack");
    }
    else
    {
        printf("\n %d is on the top of the stack",stack[top]);
    }
}
void isfull()
{
    if(top==MAX-1)
    {
        printf("stack is full");
    }
    else{
        printf("not full");
    }
}
void isempty()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("not empty");
    }
}

void display()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else{
        for(int i=0;i<=top;i++)
    {
    printf("\ndisplaying element  %d the stack %d \n",i+1,stack[i]);
        
    }

    }
    

}
int main(void)
{
    push(10);
    push(20);
    push(30);
    push(50);
    display();
}