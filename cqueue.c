#include <stdio.h>
#define MAX 5
int cqueue_arr[MAX],front=-1,rear=-1;
void insert(int item)
{
   if ((front==0&&rear==MAX-1)||(front==rear+1))
    {
      printf("queue over flow\n");
      return;
    }
   if(front==-1)
   {
     front=0;
     rear=0;
   }
   else
   {
     if(rear==MAX-1)
     {
       rear=0;
     }
     else
     {
       rear=rear+1;
     }
   }
   cqueue_arr[rear]=item;
 }
 void deletion()
 {
   if(front==-1)
   {printf("queue underflow\n");
   return;
   }
   printf("element deleted from queue is %d\n",cqueue_arr[front]);
   if(front==rear)
   {
      front=-1;
      rear=-1;
   }
   else
   {
      if(front==MAX-1)
         front=0;
      else
         front=front+1;
   }
 }
void display()
{
int front_pos=front,rear_pos=rear;
if (front==-1)
 {
  printf("queue is empty\n");
  return;
 }
 printf("queue elements:");
 if(front_pos<=rear_pos)
 while(front_pos<=rear_pos)
 {
   printf("%d\t",cqueue_arr[front_pos]);
   front_pos++;
   } 
  else
  {
    while(front_pos<=MAX-1)
    {
      printf("%d\t",cqueue_arr[front_pos]);
    }
    front_pos=0;
    while(front_pos<=rear_pos)
    {
      printf("%d\t",cqueue_arr[front_pos]);
      front_pos++;
    }
  }
  printf("\n");
}

void search()
{
int i,flag=0,key;
if (front==-1)
 {
  printf("queue is empty\n");
  return;
 }
 printf("enter the element to be found:");
 scanf("%d",&key);
 for(i=0;i<5;i++)
 {
   if(cqueue_arr[i]==key)
   {
   printf("%d found at position %d\n",key,i+1);
   flag=1;
   }
  }
  if(flag==0)
  {
   printf("no such element in the queue");
  }
}
int main()
{
  int choice,item;
  do
  {
    printf("1. insert\n");
    printf("2. delete\n");
    printf("3. display\n");
    printf("4. search\n");
    printf("5. quit\n");
    
    printf("enter your choice \n");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1: printf("input the elements for insertion\n");
             scanf("%d",&item);
             insert(item);
             break;
     case 2: deletion();
             break;
     case 3: display();
             break;
     case 4: search();
             break;
     case 5: printf("you choice is to be exit\n");
             break;
     default: printf("you entered the wrong choice\n");
              break;
      }
  }while(choice!=5);
  return 0;
}

/*if(front_pos<=rear_pos)
 while(front_pos<=rear_pos)
 {
   if(cqueue_arr[front_pos]==key)
     {
     printf("%d found at position %d\n",key,i);
     i++;
     flag=0;
     }
   front_pos++;
   } 
  else
  {
    while(front_pos<=MAX-1)
    {
      if(cqueue_arr[front_pos]==key)
     {
     printf("%d found at position %d\n",key,i);
     i++;
     flag=0;
     }
    front_pos=0;
    while(front_pos<=rear_pos)
    {
     if(cqueue_arr[front_pos]==key)
     {
     printf("%d found at position %d\n",key,i);
     }
      front_pos++;
      i++;
      flag=0;
    }
  }
  printf("\n");
 }

*/



