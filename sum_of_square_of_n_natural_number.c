/*
Author: Raj Kumar Nepal
Subject: Fundamentals of C Programming
Program: Write a program to find sum of first n natural number.
Date: 2016/11/22
*/

#include<stdio.h>
int main(){
	int i, n, sum=0;
	printf("Enter the number upto which the sum is to be calculated: ");
	scanf("%d",&n);
	
	for(i=0; i<=n; i++)
		{
		i=i*i;		//squaring the number
		sum=sum+i;	//addind the square number
		}
	
	printf("The sum is square of %d natural number is %d",n,sum);
	
	
	
	
	
	
return 0;	
}
