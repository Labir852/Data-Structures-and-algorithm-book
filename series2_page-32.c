#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,S=0;
    scanf("%d",&n);
    for ( i = 1; i < n; i++)
    {
        S+=pow(i,2);
    }
    printf("%d\n",S);
    
    return 0;
}