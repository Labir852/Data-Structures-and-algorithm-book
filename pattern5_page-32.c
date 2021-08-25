#include<stdio.h>
#include<math.h>
int main()
{
    int i,j, space, rows, k = 0,s,p,r;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   int n=rows;
   int t = (rows/2);

   

   for (i = 1; i <= t-1; ++i, k = 0) {
      for (space = 1; space <= t - i; ++space) {
         printf(".");
      }
      while (k != 2 * i - 1) {
         printf("*");
         ++k;
      }
      for(j=space+k;j<=(2*t-1);++j)
	{
		printf(".");
	}
      printf("\n");
   }


   for (i = t; i >= 1; --i,k=0) {
      for (space = 1; space <= t - i; ++space) {
         printf(".");
      }

      while (k != 2 * i - 1) {
         printf("*");
         ++k;
      }
      for(j=space+k;j<=(2*t-1);++j)
	{
		printf(".");
	}
      printf("\n");
   }
    return 0;
}