#include <stdio.h>

#define MAX 5
int stack[MAX];
int top = -1;


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
  int main(void)
  {
      push(10);
      push(20);
      
      pop(10);
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