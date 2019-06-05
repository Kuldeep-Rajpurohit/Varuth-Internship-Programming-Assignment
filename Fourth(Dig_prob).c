/**
Write a program that:
a) Reads from end user using suitable messages a integer k , where k represents count
of digits in a integer
b) Find the probability p1, that the k-digit number does NOT contain the digits 0 , 5 , 9
c) Print with suitable message the probability p1
d) Now consider digit set as only d = { 0 , 1 , 3 , 4 , 5 , 7 , 9 }
e) Find the probability p2, that the a k-digit number does NOT contain the digits 0 , 5 , 9
f) Print with suitable message the probability p2
g) Print what conclusion can be drawn with respect to p1 and p


Logic Used:
For P1:
For 10 digits(0 to 9) total possible cases = (10)^k 
Excluding digits 0, 5, 9, total possible cases = (7)^k with numbers 1,2,3,4,6,7,8 
Required probability = (7)^k/(10)^k= (0.7)^k

For P2:
For 7 digits { 0 , 1 , 3 , 4 , 5 , 7 , 9 } total cases = (7)^k
Excluding digits 0, 5, 9, total possible cases = (4)^k with numbers 1,3,4,7
Required probability = (4)^k/(7)^k = (4.0/7.0)^k

**/
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
        p2=pow(4.0/7.0,k);
        printf("\nProbability that the k-digit number does NOT contain the digits {0,5,9} is : %.4f\n\n",p1);
        printf("Now considering digit set d={0,1,3,4,5,7,9}\n");
        printf("And Probability that the k-digit number does NOT contain the digits {0,5,9} is : %.4f\n\n",p2);
        printf("So it is seen that as the digit set decreases the probability of not containing a digit also decreases.\n\n ");
    }
    return 0;
}


/**
OUTPUT:
Enter the number of digits in an integer i.e length of integer (k) : 3

Probability that the k-digit number does NOT contain the digits {0,5,9} is : 0.3430

Now considering digit set d={0,1,3,4,5,7,9}
And Probability that the k-digit number does NOT contain the digits {0,5,9} is : 0.1866

So it is seen that as the digit set decreases the probability of not containing a digit also decreases.
**/
