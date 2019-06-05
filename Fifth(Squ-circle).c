#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int d,i,flag=0;
    float pi=3.142,diameter=0;
    printf("Enter the area of square : ");
    scanf("%d",&d);
    if(d<1)
    {
        printf("Entered area is invalid.\n");
    }
    else
    {
        for(i=1;i*i<=d;i++)
        {
            if(i*i==d)
            {
                diameter = sqrt(2*i*i);
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Entered area is invalid.\n");
        }
        else
        {

            printf("\n\nA new circle is formed whose diameter is equal to the diagonal of the square.\n\n");
            printf("Area of circle : %.3f\n",(diameter*diameter)*pi/4);
            printf("Circumference of circle : %.3f\n\n",diameter*pi);
        }

    }

    return 0;
}
