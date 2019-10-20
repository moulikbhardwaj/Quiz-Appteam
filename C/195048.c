#include<stdio.h>
 int main()
{
   int a,mul=1;
for(int i=1;i<=5;i++)
   {
  printf("Enter Number %d",i); 
   scanf("%d",&a);
    mul=mul*a;
     
   }
printf("%d",mul);
return 0;

}
