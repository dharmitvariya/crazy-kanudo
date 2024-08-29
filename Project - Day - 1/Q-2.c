#include<stdio.h>
main()
{
    int a,b,sum,total;

    printf("enter first angle:");
    scanf("%d"&a);
    printf("enter first angle");
    scanf("%d"&b);
    sum=a+b;
    total=180-sum;
    printf("total:%d\n",total);
}