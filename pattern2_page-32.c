#include<stdio.h>
void main()
{
    int i,j,n,k;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(".");

        }
        for(k=j;k<n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
