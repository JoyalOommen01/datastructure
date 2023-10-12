#include<stdio.h>
void main()
{
 int n,key,i,a[50],flag=0;
  printf("enter the no elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  printf("enter the element to be found");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
   if(a[i]==key)
   {
    flag=1;
    printf("enter found at %dth position",i+1);
    }
    if(flag==0)
     {printf("element not found");
     }
    }
 }
