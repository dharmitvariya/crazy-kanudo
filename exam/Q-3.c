#include<stdio.h>

int main()
{
    int n;
    printf("enter nabar:");
    scanf("%d",&n);

   

    int a,b;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("enter a:%D",j);
            scanf("%d",&i,j);
        }
        printf("   ");
    }
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("enter b:%D",j);
            
        }
        printf("   ");
    }
}