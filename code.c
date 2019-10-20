#include<stdio.h>
int main()
{
printf("Enter 5 numbers ");
int a[5],b,c=1;
for(b=0;b<5;b++)
{ printf("Enter %c :",&(b+65));
  scanf("%d",&a[b]);
   c=c*a[b];
}
printf(" ");
printf("%d",c);

getch();
return 0;

}
