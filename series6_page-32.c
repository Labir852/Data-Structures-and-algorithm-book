#include<stdio.h>
int main()
{
    int n,i,j,k,final=0,mul=1,v=1 ;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("i = %d\n",i);
        for ( j = 1; j <= i; j++)
        {   
            printf("    j = %d\n",j);
            for ( k = 1; k <= j; k++)
            {
                printf("        k = %d\n",k);
                printf("            mul = %d,    v= %d \n",mul,v);
                mul *=v;
                v++;
            }
            final+=mul;
            printf("final = %d\n",final);
            mul = 1;
        }
    }
    
    return 0;
}