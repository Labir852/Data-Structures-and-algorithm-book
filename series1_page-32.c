#include<stdio.h>
int main()
{
    int i,n,S=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        S+=i;
    }
    printf("%d\n",S);
    return 0;
}