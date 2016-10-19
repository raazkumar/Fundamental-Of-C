//Student Name: Raj Kumar Nepal
//Roll No: 
//Subject: Fundamental of Programming
//Program: Write a program to swap numbers.
//Date: 18Oct, 2016

#include<stdio.h>
int main(){
	int a, b, temp;
	printf("Enter the value for a: ");
	scanf("%d",&a);
	printf("Enter the value for b: ");
	scanf("%d",&b);
	
	printf("Orignal values \n");
	printf("The value  of a is %d \n",a);
	printf("The value  of a is %d \n",b);

	
	temp=a;
	a=b;
	b=temp;
	printf("\n New values \n");
	printf("The new value of a is %d .\n", a);
	printf("The new value of a is %d .", b);
	
	return 0;
}
