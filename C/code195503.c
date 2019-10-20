#include<stdio.h>
int main()
{
	int a[5],res=1, i,j=97;
	
	printf("Enter five numbers \n");
	for(i=0;i<5;i++,j++)
	{
		printf("Enter %c ",j);
		scanf("%d",&a[i]);
		res*=a[i];
	}
	printf("Result is %d",res);
	getch();
}
