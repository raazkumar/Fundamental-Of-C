//Athor: Raj Kumar Nepal 
//Subject: Fundamental of C Programming
//Program: Write a program to take two input from user and print largest and smallest number using ternary operator....
//Date: 24 Oct, 2016
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


//Shortcut method...

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	
	(a>b) ? printf("%d is largest number.\n",a) : printf("%d is smallest number.",a) ;

return 0;
}
