//Student Name: Raj Kumar Nepal
//Roll No: 
//Subject: Fundamental of Programming
//Program: Write a program to take two input from user and print even and odd number using ternary operator....
//Date: 24 Oct, 2016


#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	(a%2==0) ? printf("%d is even number.",a) : printf("%d is odd number.",a) ;

	return 0;
}
