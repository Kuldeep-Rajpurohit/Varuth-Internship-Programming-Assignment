/**
A straight line in two dimension can be represented with y=mx +c , where y and x are the y
and x coordinates of the point on line in two dimension space respectively. m is slope of the line and
c is intercept made by the line with y axis. Write a program that:
a) Reads from end user using suitable messages :
i. Slope m
ii. Intercept c
iii. Values of x
b) Reads from end user using suitable messages: a random point ( xp , yp )
c) Print with suitable message if ( xp, yp ) is on the line y=mx +c

Logic :
The entered point lies on the line only if it satisfies equation of line i.e y = mx + c.

**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,m,c;
    printf("Enter slope of line : ");
    scanf("%d",&m);
    printf("Enter y-intercept : ");
    scanf("%d",&c);
    
    if(c>0)
        printf("Equation of the line is : \n\ty = %dx + %d\n",m,c);
    else
        printf("Equation of the line is : \n\ty = %dx - (%d)\n",m,c);
    printf("Enter x and y co-ordinates : ");
    scanf("%d %d",&x,&y);
    
    if(y==(m*x+c))                          //Check whether point satisfies the eq of line
        printf("Point lies on the line.\n");
    else
        printf("The given point does not lie on the line.\n");
    return 0;
}

/**
Output : 
Enter slope of line : 2
Enter y-intercept : 3
Equation of the line is :
        y = 2x + 3
Enter x and y co-ordinates : 5 1
The given point does not lie on the line.
**/
