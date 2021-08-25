#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,sum=1,i,k=0,fact=1,xPowered;
    scanf("%d",&n);
    scanf("%d",&x);

    for(i=2;i<=n;i++)
    {
        xPowered=pow(x,(i+k));
        for (int j = 1; j <= i+k; j++)
        {
            fact *= j;
        }
        if(i%2==0)
        {
            sum -=(xPowered/fact);
        }
        else{
            sum +=(xPowered/fact);
        }
        ++k;
    }

    printf("The summation of COSX series is: %d\n",sum);
    return 0;
}