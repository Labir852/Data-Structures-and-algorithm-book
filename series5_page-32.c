#include<stdio.h>
int main()
{
    int i,j=1,n,total=0;
    scanf("%d",&n);

    // counting the series 1-2+3-4+5-6+.......nth term
    for ( i = 1; i <= n; i++)
    {
       printf("i= %d   Total = %d\n",i,total);
        if(i%2!=0) 
        total+=i;
        else if(i%2==0)
        total-=i;
         
    }
    printf("i= %d   Total = %d\n",i,total);
    
    return 0;
}