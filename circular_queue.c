#include<stdio.h>
#include<stdlib.h>
#define QSIZE 3
int count=0;
void insert_rear(int q[3],int item,int *r)
{
    if(count==QSIZE)
       printf("Queue overflow\n");
    else
       {
           *r=*r+1;
           *r=(*r)% QSIZE;
           q[*r]=item;
           count++;
       }
}

int delete_front(int q[3],int *f,int *r)
{
    int del_item;
    if (count==0)
      printf("Queue underflow\n");
    else 
    {
        del_item=q[*f];
        *f=*f+1;
        *f=((*f)% QSIZE);
        count--;
        return del_item;
    }
}


void display(int q[3],int *f)
{
    int temp,i;
    temp=*f;
    for(i=0;i<count;i++)
      {
          printf("%d\t",q[temp]);
          temp=(temp+1)% QSIZE;
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
                   
            case 3:display(q,&f);
                   break;
                   
             default:exit(0);
        }
    }
 }