#include<stdio.h>

int main()
{
    int n,sum=0;

    printf("enter arrye size:");
    scanf("%d",&n);
    int a[n]
    printf("enter arrer a elements\n");
    for (int  i = 0; i < n; i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    int b[n]
    printf("enter arrer b elements\n");
    for (int  i = 0; i < n; i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&b[i]);

    }
    printf("enter array c:");
    for (int i = 0; i < n; i++)
    {
        sum=a[i]+b[i];

        printf("%d",sum);
    }
    
}