/**
 The area of a square is d. What is the area of the circle which has the diagonal of the square as its
diameter? Write a program that:
a) Reads from user: area of a square as d (an integer)
b) Check if area entered, d is valid
c) Find the area of the circle whose diameter is the same as the diagonal of the square
d) Find the circumference of the circle whose radius is the same as the diagonal of the
square
e) Prints with suitable message the area and circumference of the circles respectively

Variables used:
    d = area of square
    a = side of the square
    i = square of side of square
    diameter = diameter of circle

Logic Used :
Assumptuions made : It is assumed that the side of the square is an integer. So the area entered should be a perfect square.
If a is the side of the square, then its area = a*a. i.e d=a*a
a*a = i
So if d is perfect square we find the root of the sum of the suare of sides which is equal to the diameter of cirle.
Mathematically -> diameter = sqrt((i)^2+(i)^2) = sqrt(2*i*i)
Area of circle = pi*(radius)^2 = pi*(diameter/2)^2
Circumference of circle = 2*pi*radius = pi*diameter

**/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d,i,flag=0;
    float pi=3.142,diameter=0;
    printf("Enter the area of square : ");
    scanf("%d",&d);
    if(d<0)                     //Area should be positive
    {
        printf("Entered area is invalid.\n");
    }
    else
    {
        for(i=1;i*i<=d;i++)                     //i gives the value of the side of square
        {
            if(i*i==d)
            {
                diameter = sqrt(2*i*i);         // calculating diameter as mentioned in logic used
                flag=1;
                break;
            }
        }
        if(flag==0)                             //Stop as area is not a perfect square
        {
            printf("Entered area is invalid.\n");
        }
        else
        {

            printf("\nA new circle is formed whose diameter is equal to the diagonal of the square.\n");
            printf("Area of circle : %.3f\n",(diameter*diameter)*pi/4);
            printf("Circumference of circle : %.3f\n\n",diameter*pi);
        }

    }

    return 0;
}

/**
OUTPUT : 
Enter the area of square : 9
A new circle is formed whose diameter is equal to the diagonal of the square.
Area of circle : 14.139
Circumference of circle : 13.330
**/
