#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += pow(i,2);
    }
    printf("sum= %d",sum);
    return 0;
}