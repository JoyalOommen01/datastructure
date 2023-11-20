#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
void push()
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
   printf("%d inserted into the stack",newnode->data);
  }
 }
 void pop()
 { 
 struct node *temp;
 if(head==NULL)
  { printf("no element to be deleted\n");
  }
 else
 {
   temp=head;
   head=temp->next;
   printf("%d deleted from stack\n",temp->data);
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
printf("stack using linked list\n");
do{
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.display\n");
    printf("4.search\n");
    printf("5.To exit\n");
    printf("enter your choice ");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
             push();
             break;
     case 2: 
             pop();
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
  }while(choice!=9);
}
        

