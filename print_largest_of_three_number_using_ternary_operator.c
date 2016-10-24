//Student Name: Raj Kumar Nepal
//Roll No: 
//Subject: Fundamental of Programming
//Program: Write a program to print greatest among three numbers using ternary operator...
//Date: 24 Oct, 2016

#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
	
	(a>=b && a>=c) ? printf("%d is largest.",a) : (b>=a && b>=c) ? printf("%d is largest.",b) : printf("%d is largest.",c) ;
	
	(a>=b) ? (a>=c ? printf("%d is largest.",a) : printf("%d is largest.",c) ) : (b>=c ? printf("%d is largest.",b) : printf("%d is largest",c));   
	
	
	
return 0;	
}
