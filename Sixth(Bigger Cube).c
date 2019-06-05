/**
 A bigger solid cube is to be built using n number of smaller cubes, having unit length. Write a
program that:
a) Read n from user with suitable message
b) Check if n is valid, that is can a bigger solid cube be build using n number unit
length cubes
c) Calculate the surface area of bigger cube, s1
d) One unit length cubic block is now removed from every corner of the cube. Calculate
the surface area of new structure, s2
e) Prints with suitable message, both surface areas s1 and s2
f) Print what conclusion can be drawn with respect to s1 and s2

POINT TO NOTE: LINE NO 54

Logic Used:
To form a bigger cube the total number of unit lenght cubes should be a perfect cube.
If n is the number of cubes, then cuberoot(n) gives the length of each side of cube. Suppose side is a.
So the surface area of each face is = a*a
There are total 6 faces.
So the total surface area of bigger cube S1 = 6*a*a.

After removal:
If the total number of smaller cubes is 8, then after removal no cube remains because all the cubes are removed.

But if the total number of smaller cubes is not equal to 8 then the new surface area will be same as the older surfce area.
Because removing each block takes away 3 faces of the smaller cube fro the total surface area, but after removing 3 new faces are
exposed so the no of faces remains same. So S1 = S2

**/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,s1=0;
    printf("Enter the number of small cubes : ");
    scanf("%d",&n);
    if (n<=1)                                              //Number should be greater than 1 to form bigger cube
    {
        printf("Bigger solid cube cannot be formed.\n");
    }
    s1 = perf_cube(n);                                     //Check if the number is perfect cube
    if (s1==0)
     {
         printf("Bigger solid cannot formed.\n");         //If not cube cube cannot be formed
     }
    else
    {
        printf("\n\nThe surface area of the bigger solid cube is : %d\n",s1);
        
        //If the total number of smaller cubes is 8, then after removal no cube remains because all the cubes are removed.
        
        if (n==8)                                   
        {
            printf("The surface area after removing the blocks is 0\nBecause after removing the cubes from all corners there is no cube remaining.\n\n");
        }
        
        //If total number of cubes is not equal to 8, surface area remains same as mentioned in logic
        
        else
        {
            printf("The surface area after removing the blocks is : %d\n",s1);
            printf("Area before and after removal remains same.\n");
            printf("Because removing each cube exposes 3 faces and removing each cube reduces 3 faces which is equal.\n");
        }

    }
    return 0;
}

int perf_cube(int n)            //Function to check if the entered is perfect cube
{
    int i;
    for(i=2;i*i*i<=n;i++)
    {
        if(i*i*i==n)
            return(6*i*i);      //If Perfect cube then returns surface area
    }
    return(0);                  //If not perfect cube then returns zero
}


/**
OUTPUT :

CASE 1:
The surface area of the bigger solid cube is : 24
The surface area after removing the blocks is 0
Because after removing the cubes from all corners there is no cube remaining.

CASE 2:
The surface area of the bigger solid cube is : 96
The surface area after removing the blocks is : 96.
Area before and after removal remains same.
Because removing each cube exposes 3 faces and removing each cube reduces 3 faces which is equal.

**/
