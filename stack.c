#include <stdio.h>

#define MAX 5
int stack[MAX];
int top = -1;
// 1. push
// 2. pop
// 3. isEmpty
// 4. isFull
// 5. display
// 6. peek : to view the top element without removing

void push(int element){

  if(top >=MAX-1){
    printf("\nstack overflow, we can't push more elements (%d) onto the stack\n",element);   
  }else{
      stack[++top] = element;
      printf("\nelement %d has been pushed onto the stack\n",element);
  }
}
int x;
int pop()

{
    if(top==-1)
    {
        printf("\n stack underflow");
    }
    else 
    {
        x=stack[top];
        stack[top]=-1;
        top--;
        printf("element %d has been popped",x);
        return x;
        
    }
}

void peek()
{
    // display the top element
    if(top==-1)
    {
        printf("\nstack underflow,there is no element in the stack\n");
    }else{
    printf( "\n%d is on the top of the stack.\n",stack[top]);

    }


}
  int main(void)
  {
      push(10);
      push(20);
      peek();
      
      pop(); 

     peek();
      pop(); 
      peek();

  }
//   git add .
//  git commit -m "stack code added"
// git push


// to run c program
// 1. gcc -o main stack.c
// 2. ./main

// to run c++ programss
// 1. g++ -o main stack.cpp
// 2. ./main
