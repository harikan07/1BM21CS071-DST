#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 5
int st[10],top,item;
void push()
 {
  if (top==STACK_SIZE)
  printf("stack overflow\n");
  else
  {
   top++;
   st[top]=item;
  }
}


int pop()
{
 int del_item;
 if(top==-1)
 printf("stack underflow\n");
 else
 {
  del_item = st[top];
  top--;
  return del_item;
 }
}

void display()
{
 int i;
 if(top==-1)
 printf("stack is empty,nothing to display\n");
 for(i=0;i<=top;i++)
 printf("%d\t",st[i]);
}


void main()
{ 
 int choice,d;
 top=-1;
 while(1)
 {
  printf("\n 1.PUSH 2.POP 3.DISPLAY \n");
  printf("enter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("enter the vaue to be pushed\n");
          scanf("%d",&item);
          push();
          break;
    
   case 2:d=pop();
          printf("\nthe deleted item is %d",d);
          break;
   
   case 3:display();
          break;
   
   default:exit(0);
           
  }
 }
} 
