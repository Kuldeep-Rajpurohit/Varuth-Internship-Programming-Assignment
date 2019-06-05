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
    if(y==(m*x+c))
        printf("Point lies on the line.\n");
    else
        printf("The given point does not lie on the line.\n");
    return 0;
}
