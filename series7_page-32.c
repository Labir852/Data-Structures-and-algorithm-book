#include<stdio.h>
int main()
{

    // counting series for 1*n+2*(n-1)+3*(n-2)+....+n*1
    int n,i,var,sum=0;
    scanf("%d",&n);
    var=n;
    for ( i = 1; i <= n; i++)
    {
        sum += i*var;
        var--;
    }
    printf("Sum= %d\n",sum);
    
    return 0;
}