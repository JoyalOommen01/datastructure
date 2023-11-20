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
   printf("%d inserted into the list",newnode->data);
  }
 }
 void insertlast()
{ 
  struct node *newnode,*temp;
  newnode=(struct node*)malloc(sizeof(struct node*));
  newnode->next=NULL;
  temp=head;
  if(newnode==NULL)
  {
  printf("no space");
  }
  else 
  {
   while (temp->next!=NULL)
     {
     temp=temp->next;
     }
  printf("enter the elemenet to be inserted:");
  scanf("%d",&newnode->data);
  temp->next=newnode;
   }
 }
 void insertspec()
{ 
   int pos,i=0;
   struct node *newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node*));
   newnode->next=NULL;
   printf("enter the location to be inserted:");
   scanf("%d",&pos);
   temp=head;
   while(i==pos)
   { 
     
     temp=temp->next;
     i++;
     if(temp==NULL)
       break;
   }
   if(temp==NULL)
    {
    printf("no such position");
     return;
    }
   else
   {
   printf("enter the value to be inserted\n");
   scanf("%d",&newnode->data);
   newnode->next=temp->next;
   temp->next=newnode;
   printf("%d inserted at %dth position\n",newnode->data,pos);
   }
 }
 
 void deletefirst()
 { 
 struct node *temp;
 if(head==NULL)
  { printf("no element to be deleted\n");
  }
 else
 {
   temp=head;
   head=temp->next;
   printf("%d deleted from first position\n",temp->data);
   free(temp);
   
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
  printf("%d deleted from last position\n",temp->data);
  prev->next=NULL;
  free(temp);
   }
  void deletespec()
{ 
   int pos,i=1;
   struct node *temp,*prev;
   printf("enter the location to be deleted:\n");
   scanf("%d",&pos);
   temp=head;
   while(i!=pos)
   { 
     prev=temp; 
     temp=temp->next;
     i++;
     if(temp==NULL)
       break;
   }
   if(temp==NULL)
    {
    printf("no such position\n");
     return;
    }
   else
   { if(temp==head)
     {
     prev=head;
     head=temp->next;
     free(temp);
     return;
     }
         prev->next=temp->next;
         printf("deleted %dth element  %dth from node\n",temp->data,i);
         free(temp);
       } 
   }
   void display()
 {
 struct node *temp;
 if (head==NULL)
     printf("no elements in the list\n");
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
     printf("no elements in the list\n");
 else
  
  {
  temp=head;
  while(temp!=NULL)
    {
     if(temp->data==key)
     {
       printf("element found at %dth position",i);
       flag=1;
     }
    temp=temp->next;
    i++;
    }
    if(flag==0)
    {
      printf("element not in the list");
    }
  }
 }
void main()
{
int choice;
printf("singly linked list\n");
do{
    printf("1.insert at begining\n");
    printf("2.insert at last\n");
    printf("3.insert at specific position\n");
    printf("4.delete from begining\n");
    printf("5.delete from last\n");
    printf("6.delete at specific position\n");
    printf("7.display elements in the list\n");
    printf("8.search an element\n"); 
    printf("9.To exit\n");
    printf("enter your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
             insertfirst();
             break;
     case 2: 
             insertlast();
             break;
     case 3: 
             insertspec();
             break;
     case 4: 
             deletefirst();
             break;
     case 5: 
             deletelast();
             break;
     case 6:
     	     deletespec();
             break;
     case 7: 
     	     display();
             break;
            
     case 8:
             search();
             break;
     case 9: 
             printf("you choice is to be exit\n");
             break;
     default: 
              printf("you entered the wrong choice\n");
              break;
      }
  }while(choice!=9);
}
        

