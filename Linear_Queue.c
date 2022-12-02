#include<stdio.h>
#include<stdlib.h>
#define QSIZE 5
void insert_rear(int q[5],int item,int *r)
{
    if(*r==QSIZE-1)
       printf("Queue overflow\n");
    else
       {
           (*r)++;
           q[*r]=item;
       }
}

int delete_front(int q[5],int *f,int *r)
{
    if (*f>*r)
      printf("Queue underflow\n");
    else 
       return q[*f++];
}

void display(int q[5],int *f,int *r)
{
    int i;
    if (*f>*r)
      printf("Queue is empty\n");
    else
      {
          for(i=0;i<=*r;i++)
          printf("%d\t",q[i]);
      }
}
 
 
 void main()
 {
    int q[QSIZE],item,r=-1,f=0,choice,val_del;
    while(1)
    {
        printf("\n Enter your choice\n");
        printf("\n1.insert 2.delete 3.display\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the value to be inserted\n");
                   scanf("%d",&item);
                   insert_rear(q,item,&r);
                   break;
                   
            case 2:val_del=delete_front(q,&f,&r);
                   printf("Item deleted=%d",val_del);
                   break;
                   
            case 3:display(q,&f,&r);
                   break;
                   
             default:exit(0);
        }
    }
 }