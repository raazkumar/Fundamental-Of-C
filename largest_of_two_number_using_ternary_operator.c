//Student Name: Raj Kumar Nepal
//Roll No: 
//Subject: Fundamental of Programming
//Program: Write a program to take two input from user and print largest and smallest number using ternary operator....
//Date: 24 Oct, 2016

//Ternary operator 
//takes 3 arguements
//syntax
//(condition) ? True : False


#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	c=(a>b) ? a : b;
	d=(a<b) ? a : b;
	printf("%d is largest number.\n",c);
	printf("%d is smallest number.",d);
	

return 0;
}
