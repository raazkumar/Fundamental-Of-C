//Student Name: Raj Kumar Nepal
//Roll No: 
//Subject: Fundamental of Programming
//Program: Write a program to check whether the number is even or odd.
//Date: 19Oct, 2016

#include<stdio.h>
int main(){
	int a;
	printf("Enter the number to check odd or even: ");
	scanf("%d",&a);
	
	//Checking
	
	if(a%2==0){
		printf("\n It is even number.");
		}
	else{
		printf("\n It is odd number.");
		}
	
	return 0;
}
