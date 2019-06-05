/**
 Consider three dimension system. A point in three dimension system is represented as ( x , y , z ) ,
where x , y and z are the x , y and z coordinates of the point in three dimension space respectively.
Write a program that:
a) Reads from end user using suitable messages :
i. Point p1 ( x1 , y1 , z1 ) , and
ii. Point p2 ( x2 , y2 , z2 )
b) Prints with suitable message all partial derivatives between the points ( p1 , p2 )
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1,x2,y1,y2,z1,z2,x,y,z;
    printf("Enter the x,y and z coordinates of the point 1 : ");
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("\nEnter the x,y and z coordinates of the point 2 : ");
    scanf(" %f %f %f",&x2,&y2,&z2);
    x = x2-x1;
    y = y2-y1;
    z = z2-z1;
    printf("The function f(ln)= (%.2fx) +(%.2fy)+(%.2fz)",x,y,z);
    return 0;
}

/**
OUTPUT:
Enter the x,y and z coordinates of the point 1 : 1 5 3

Enter the x,y and z coordinates of the point 2 : 3 4 1
The function f(ln)= (2.00x) +(-1.00y)+(-2.00z)

**/
