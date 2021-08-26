//
// Created by mypbs on 2021-08-26.
//

#include "stdio.h"

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("%d\n",num1+num2+num3);
    printf("%.1f",(float) (num1+num2+num3)/3);
    return 0;
}