#include<stdio.h>
int main()
{
    int n,factN=1,r,factR=1,factNR=1,NR;
    scanf("%d", &n);
    scanf("%d", &r);
    NR = n-r;
    for (int i = 1; i <= n; i++)
    {
        factN *= i;
    }
    for (int i = 1; i <= r; i++)
    {
        factR *= i;   
    }
    for (int i = 1; i <= NR; i++)
    {
        factNR *= i;
    }
    int NRFormula = factN/(factR*factNR);

    printf("The value of NR formula is %d ", NRFormula);
    
    return 0;
}