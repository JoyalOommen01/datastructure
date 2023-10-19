#include<stdio.h>
void push(void);
void pop(void);
void display(void);
void search(void);
int top=-1,n,stack[100],choice,key,i;
void push()
{ 
  if(top==n-1)
    {
     printf("stack is full\n");
    }
   else
     {
       printf("enter the element to insert\n");
       scanf("%d",&key);
       top++;
       stack[top]=key;
      }
  }
  void pop()
{ 
  if(top==-1)
    {
     printf("stack isempty\n");
    }
   else
     {
       key=stack[top];
       top--;
       printf("you popped %d\n",key);
      }
  }
  void display(void)
  {
    if(top==-1)
    {
     printf("stack is empty\n");
    }
   else
     {
       printf("elements in the stack\n");
       for(i=0;i<=top;i++)
        {
        printf("%d\t",stack[i]);
        }
      }
   }
  void search()
  { int keys;
    printf("enter the element to be fouund\n");
    scanf("%d",&keys);
    for(i=0;i<top;i++)
   {
     if(stack[i]==keys)
     {
      printf("%d found at position no %d\n",keys,i+1);
     }
   }
  }
  
int main()
{
 printf("enter the elements in the stack\n");
 scanf("%d",&n);
 
 do{
    printf("enter 1 for push\n");
    printf("enter 2 for pop\n");
    printf("enter 3 for display\n");
    printf("enter 4 for search\n");
    printf("enter 5 for exit\n"); 
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1: push();
             break;
     case 2: pop();
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
