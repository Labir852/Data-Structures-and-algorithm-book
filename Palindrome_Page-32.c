#include<stdio.h>
int main()
{
    int n, i,remainder, c=0,a=0,t;
    printf("Enter the number to check palindrome: ");
    scanf("%d",&n);
    t = n;

    while (t!=0)
    {
        remainder = t%10;
        a = (a*10)+remainder;
        t=t/10; 
    }
    if(a == n)
    {
        printf("The number %d is palindrome",a);
    }
    else
    {
        printf("The number %d is not palindrome",a);
    }
    
    return 0;
}