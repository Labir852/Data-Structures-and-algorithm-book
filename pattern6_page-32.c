#include<stdio.h>
#include<math.h>
int main()
{
    int i,j, space, rows, k = 0,s,p,r;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   
   int t = (rows/2);
int n=1;

for (i = 1; i <t; ++i,k=0,s=k) {
      for (space = 1; space <= t - i; ++space) {
         printf(".");
      }

      while (k != 2 * i - 1) {
         if(k>=n)
         {
            printf("%d",s-1);
            --s;
            ++k;
         } 
        else if(k<n){
         printf("%d",s+1);
         ++s;
         ++k;
         }  
      }
      for(j=space+k;j<=(2*t-1);++j)
	{
		printf(".");
	}
    n+=1;
      printf("\n");
   }
n=t;
   for (i = t; i >= 1; --i,k=0,s=k) {
      for (space = 1; space <= t - i; ++space) {
         printf(".");
      }

      while (k != 2 * i - 1) {
         if(k>=n)
         {
            printf("%d",s-1);
            --s;
            ++k;
         } 
        else if(k<n){
         printf("%d",s+1);
         ++s;
         ++k;
         }  
      }
      for(j=space+k;j<=(2*t-1);++j)
	{
		printf(".");
	}
    n-=1;
      printf("\n");
   }
    return 0;
}