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
