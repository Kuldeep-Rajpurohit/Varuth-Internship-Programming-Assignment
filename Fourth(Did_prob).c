#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k=0,num,i=0,temp,d={0,1,3,4,5,7,9};
    double p1,p2;
    printf("Enter the number of digits in an integer i.e length of integer (k) : ");
    scanf("%d",&k);
    if(k==0)
    {
        printf("Invalid entry.\n\n");
    }
    else
    {
        p1=pow(.7,k);
        p2=pow(0.57143,k);
        printf("\nProbability that the k-digit number does NOT contain the digits {0,5,9} is : %.4f\n\n",p1);
        printf("Now considering digit set d={0,1,3,4,5,7,9}\n");
        printf("And Probability that the k-digit number does NOT contain the digits {0,5,9} is : %.4f\n\n",p2);
        printf("So it is seen that as the digit set decreases the probability of not containing a digit also decreases.\n\n ");
    }
    return 0;
}
