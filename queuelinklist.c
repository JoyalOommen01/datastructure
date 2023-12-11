#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
void insertfirst()
{ 
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node*));
  if(newnode==NULL)
  {
  printf("no space");
  }
  else 
  {
  printf("enter the element to be inserted:");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  if(head==NULL)
     head=newnode;
  else
  {
     newnode->next=head;
     head=newnode;
   }
   printf("%d inserted into the queue\n",newnode->data);
  }
 }
 void deletelast()
{ 
  struct node *temp,*prev;
  temp=head;
  while (temp->next!=NULL)
     {
       prev=temp;
       temp=temp->next;
     }
  printf("%d deleted \n",temp->data);
  prev->next=NULL;
  free(temp);
   }
      void display()
 {
 struct node *temp;
 if (head==NULL)
     printf("no elements in the queue\n");
 else
  
  {
  temp=head;
  while(temp!=NULL)
    {
    printf("%d\n",temp->data);
    temp=temp->next;
    }
  }
 }
   void search()
 {
 struct node *temp;
 int key,i=1,flag=0;
 printf("enter the element to be found");
 scanf("%d",&key);
 if (head==NULL)
     printf("no elements in the queue\n");
 else
  
  {
  temp=head;
  while(temp!=NULL)
    {
     if(temp->data==key)
     {
       printf("element found at %dth position\n",i);
       flag=1;
     }
    temp=temp->next;
    i++;
    }
    if(flag==0)
    {
      printf("element not in the queue\n");
    }
  }
 }
void main()
{
int choice;
printf("queue using linked list\n");

    printf("1.insert at begining\n");
    printf("2.delete from last\n");
    printf("3.display elements in the queue\n");
    printf("4.search an element\n"); 
    printf("5.To exit\n");
   do{
    printf("enter your choice ");
    scanf("%d",&choice);
    
    switch(choice)
    {
     case 1:
             insertfirst();
             break;
     case 2: 
             deletelast();
             break;
     case 3: 
     	     display();
             break;
            
     case 4:
             search();
             break;
     case 5: 
             printf("you choice is to be exit\n");
             break;
     default: 
              printf("you entered the wrong choice\n");
              break;
      }
  }while(choice!=5);
}
        

