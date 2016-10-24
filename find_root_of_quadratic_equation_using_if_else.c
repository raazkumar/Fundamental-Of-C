//Student Name: Raj Kumar Nepal
//Roll No: 
//Subject: Fundamental of Programming
//Program: Write a program to take two input from user and print largest and smallest number using ternary operator....
//Date: 24 Oct, 2016
//root1 = -d+sqrt((b^2-4ac))
//root1 = -d-sqrt((b^2-4ac))

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2,r;
	
	printf("Enter Co-efficient of a :");
	scanf("%f",&a);

	printf("Enter Co-efficient of b :");
	scanf("%f",&b);

	printf("Enter Co-efficient of c :");
	scanf("%f",&c);

	r=(pow(b,2)-4*a*c);
	if (d>=0){
		
	d=sqrt(r);

	r1=(-b+d)/(2*a);
	r2=(-b-d)/(2*a);

	printf("Root One : %f \n",r1);
	printf("Root Two : %f",r2);
	}
	else{
	printf("Root is imaginary");	
	}
}
