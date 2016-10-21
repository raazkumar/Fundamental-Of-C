//Author: Raj Kumar Nepal
//Subject: Fundamental of C Programming
//Program: Write a program to swap numbers.
//Date: 18Oct, 2016

#include<stdio.h>
int main(){
	int a, b, temp;
	printf("Enter the value for a: ");
	scanf("%d",&a);
	printf("Enter the value for b: ");
	scanf("%d",&b);
	//Before Swap
	printf("Orignal values \n");
	printf("The value  of a is %d \n",a);
	printf("The value  of b is %d \n",b);

	//Swap
	temp=a;
	a=b;
	b=temp;
	
	//After Swap
	printf("\n New values \n");
	printf("The new value of a is %d .\n", a);
	printf("The new value of b is %d .", b);
	
	return 0;
}
