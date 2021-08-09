#include<stdio.h>
#include<math.h>
int main()
{

    //i, j is loop counter and n is the nth term and v is the mainseriesCounter
    int i,n,j=0,v=1,differenceOfDifferences=3,differenceOfMainSeries = 4,mainSeries=1,FinalResultOfSeries1=0, FinalResultOfSeries2=0;
    scanf("%d",&n);
    //counting this series 1+5+15+34+.......+nth term
    for ( i = 0; i < n; i++)
    {
        differenceOfDifferences+=3;
        //prints the difference between the series count
        
        FinalResultOfSeries1+=mainSeries;
        mainSeries+=differenceOfMainSeries;
        differenceOfMainSeries+=differenceOfDifferences;
        printf("FinalResultOfSeries1= %d\t\t differenceOfDifferences= %d\t\t differenceOfMainSeries= %d\t\t mainSeries= %d \n",FinalResultOfSeries1,differenceOfDifferences,differenceOfMainSeries,mainSeries);
    }

    printf("\n\n");
    //counting this series 1+(2+3)+(4+5+6)+(7+8+9+10)+.......+nth term
     for ( i = 0; i < n; i++)
     {
        for ( j = 0; j <=i ; j++)
        {
            FinalResultOfSeries2 +=  v;
            printf("FinalResultOfSeries2= %d\t\t i= %d\t\t j= %d\t\t v= %d \n",FinalResultOfSeries2,i,j,v);
            v++;
        }
     }
    //S1 gives the result by counting this series 1+(2+3)+(4+5+6)+(7+8+9+10)+.......+nth term
    //FinalResultOfSeries1 gives the result by counting this series 1+5+15+34+.......+nth term
    printf("FinalResultOfSeries1= %d  FinalResultOfSeries2= %d\n",FinalResultOfSeries1,FinalResultOfSeries2);
    
    return 0;
}