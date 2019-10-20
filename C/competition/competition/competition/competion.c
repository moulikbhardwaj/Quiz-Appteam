//
//  main.c
//  competition
//
//  Created by Raghav Agarwal on 20/10/19.
//  Copyright © 2019 Raghav Agarwal. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,c,d,e,product;
    printf("Please enter the first number\n");
    scanf("%d",&a);
    printf("Please enter the second number\n");
    scanf("%d",&b);
    printf("Please enter the third number\n");
    scanf("%d",&c);
    printf("Please enter the fourth number\n");
    scanf("%d",&d);
    printf("Please enter the fifth number\n");
    scanf("%d",&e);
    product=a*b*c*d*e;
    printf("Sum of the numbers is=%d\n",product);
    return 0;
}
