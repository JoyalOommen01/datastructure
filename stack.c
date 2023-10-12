#include<stdio.h>
void push(void);
void pop(void);
void display(void);
int top=-1,n,stack[100],choice,key,i;
void push()
{ 
  if(top==n-1)
    {
     printf("stack is full");
    }
   else
     {
       printf("enter the element to insert");
       scanf("%d",&key);
       top++;
       stack[top]=key;
      }
  }
  void pop()
{ 
  if(top==-1)
    {
     printf("stack isempty");
    }
   else
     {
       key=stack[top];
       top--;
       printf("you popped %d",key);
      }
  }
  void display(void)
  {
    if(top==-1)
    {
     printf("stack is empty");
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
  
int main()
{
 printf("enter the elements in the stack");
 scanf("%d",&n);
 
 do{
    printf("enter 1 for push\n");
    printf("enter 2 for pop\n");
    printf("enter 3 for display\n");
    printf("enter 4 for exit\n"); 
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
     case 4: printf("you choice is to be exit");
             break;
     default: printf("you entered the wrong choice");
              break;
      }
    }while(choice!=4);
    return 0;
 }
