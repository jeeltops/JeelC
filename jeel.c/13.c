#include<stdio.h>

int main()
{
 int num,i;
 int f=1;

 printf("Enter a number:");
 scanf("%d",&num);

 for (i=num;i>=1;i--)
 {
    f = f * i;
 }   
 printf("%d=%d",num,f);
 
    return 0;
}