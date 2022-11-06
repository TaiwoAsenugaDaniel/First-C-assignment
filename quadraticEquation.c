#include<stdio.h>
#include<math.h>


main()
{

//set the data type for the coefficients, determinant and roots
int a,b,c,d;
float root1,root2;

//print and scan functions to request for the values of a,b and c
printf("Enter the values of a,b,c:\n ");
scanf("%d%d%d",&a,&b,&c);

//create variable for determinant
d=b*b-4*a*c;

//create variable for roots 1 and 2 with almighty formula to solve for the values
root1=((-b)+sqrt(d))/(2*a);
root2=((-b)-sqrt(d))/(2*a);

//print out the values of the roots
printf("root1=%f and root2=%f",root1,root2);
}