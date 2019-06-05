/**

Consider a matrix M2*2 . Write a program that:
a) Reads from user: elements of the matrix M
b) Check if Eigenvalues and Eigenvectors exists for matrix M
c) Find the Eigenvalues and any two Eigenvectors of matrix M
d) Prints with suitable message the matrix M , its Eigenvalues and Eigenvectors


Variables used : 
    Mat: 2*2 matrix
    Y: Eigen Values
    a,b,c: Co-efficient of characteristic equation aY^2+bY+c=0
    del = (b^2)-4ac
    E: Eigen Space
    Vec1 & Vec2: Eigen vectors
    
Logic used :

characteristic equation is got by this expression:  det(YI-Mat)=0    -------- I is Identity Matrix
This characterstic equation is in the form : aY^2+bY+c = 0
And using a,b and c we find the value of delta : delta = b^2 - 4ac

**/

#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    float Mat[2][2],a,b,c,del,Y[2],E[2][2],Vec1[2],Vec2[2];
    printf("Enter the elements of the 2*2 matrix : \n");

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
        scanf("%f",&Mat[i][j]);

        a=1;
        b = -(Mat[0][0]+Mat[1][1]);
        c = Mat[0][0]*Mat[1][1]-Mat[0][1]*Mat[1][0];
        del = pow(b,2)-4*a*c;

        //If delta is negative then the roots are complex
        if(del<0)
            printf("Eigen Values & Eigen vectors do not exist for the given matrix\n");
        else
        {
            //Equation to find the roots of the characteristic equation
            //x =(-b(+/-)rt(delta))/2a
            Y[0]=(-b+sqrt(del))/(2*a);
            Y[1]=(-b-sqrt(del))/(2*a);

            //E = N(|YI-M|)  -----I is identity matrix
            //For 1st Eigen value
            E[0][0] = Y[0]-Mat[0][0];
            E[0][1] = -Mat[0][1];
            E[1][0] = Y[0]-Mat[1][0];
            E[1][1] = -Mat[1][1];
            Vec1[1]=1;
            Vec1[0] = (Vec1[1]*E[0][1])/E[0][0];    //[E][V] = 0

            //For 2nd Eigen value
            E[0][0] = Y[1]-Mat[0][0];
            E[0][1] = -Mat[0][1];
            E[1][0] = Y[1]-Mat[1][0];
            E[1][1] = -Mat[1][1];
            Vec2[1] = 1;
            Vec2[0] = (Vec2[1]*E[0][1])/E[0][0];    //[E][V] = 0

            printf("\nEigen values are %.2f and %.2f\n",Y[0],Y[1]);
            //If both the eigen values are same then the eigen vectors are also same, so we display it once Hence we represent it once
            if(Vec1[0]==Vec2[0])
                printf("Both the eigen vectors are equal and that is [%.2f  %.2f]\n",Vec1[0],Vec1[1]);
            else
                printf("Eigen vectors are [%.2f  %.2f] and [%.2f  %.2f]\n\n",Vec1[0],Vec1[1],Vec2[0],Vec2[1]);
        }
        return 0;
}

/**


OUTPUT:
Enter the elements of the 2*2 matrix :
2 3 4 5

Eigen values are 7.27 and -0.27
Eigen vectors are [-0.57  1.00] and [1.32  1.00]


Process returned 0 (0x0)   execution time : 7.132 s
Press any key to continue.
