#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,s1=0;
    printf("Enter the number of small cubes : ");
    scanf("%d",&n);
    if (n<=1)
    {
        printf("Bigger solid cube cannot be formed.\n");
    }
    s1 = perf_cube(n);
    if (s1==0)
     {
         printf("Bigger solid cannot formed.\n");
     }
    else
    {
        printf("\n\nThe surface area of the bigger solid cube is : %d\n",s1);
        if (n==8)
        {
            printf("The surface area after removing the blocks is 0\nBecause after removing the cubes from all corners there is no cube remaining.\n\n");
        }
        else
        {
            printf("The surface area after removing the blocks is : %d\nSo the surface area before removal and after removal is same.\n\n",s1);
        }

    }
    return 0;
}


int perf_cube(int n)
{
    int i;
    for(i=2;i*i*i<=n;i++)
    {
        if(i*i*i==n)
            return(6*i*i);
    }
    return(0);
}
