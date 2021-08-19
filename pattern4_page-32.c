#include<stdio.h>
int main()
{
    int i,j, space, rows, k = 0,s,p;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   int n=rows;
   for (i = rows; i >= 1; --i, k = 0,s=k) {
      for (space = 1; space <= rows - i; ++space) {
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
      for(j=space+k;j<=(2*rows-1);++j)
	{
		printf(".");
	}
   n-=1;
      printf("\n");
   }
return 0;
    
}
