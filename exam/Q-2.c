#include<stdio.h>

int main()
{
   int D1,D2;

   printf("enter D1:");
   scanf("%d",&D1);
   printf("enter D2:");
   scanf("%d",&D2);

    int a[D1][D2];
     for(int i=0;i<D1;i++)
     {
        for(int j=0;j<D2;j++)
        {
    
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
     }
}