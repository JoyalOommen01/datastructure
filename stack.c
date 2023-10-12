#include<stdio.h>
/*void push(void);
void pop(void);
void display(void);*/
int main()
{
 int choice;
 do{
    printf("enter 1 for push\n");
    printf("enter 2 for pop\n");
    printf("enter 3 for display\n");
    printf("enter 4 for exit\n"); 
    printf("enter the choice");
    scanf("%d",&choice);
   /* switch(choice)
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
      }*/
    }while(choice!=4);
    return 0;
 }
