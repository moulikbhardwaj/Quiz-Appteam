#include<stdio.h>

int main()
{
	int i,a[5];
	float x=1;
	char alp;
	for(i=0;i<5;i++)
	{printf("Enter the alphabet ");
	scanf("%c",&alp);
	printf("Enter the number %c :",alp);
	scanf("%d",&a[i]);
	x=x*a[i];
	
	}
	printf("the product of given numbers is :%f",x);
	return 0;
}
