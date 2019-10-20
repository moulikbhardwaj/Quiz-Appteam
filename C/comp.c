#include <stdio.h>
void main()
{ int a,b,c,d,e;
  int A[5],i,mul=1;
  for(i=0;i<5;i++)
   {printf("ENter %d number",i+1);
    scanf("%d",&A[i]);
    
   }
  for(i=0;i<5;i++)
  {
  	mul*=A[i];
  	
  }
  printf("product is %d",mul);
  }

