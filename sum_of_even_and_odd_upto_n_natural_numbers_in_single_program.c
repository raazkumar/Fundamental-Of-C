/*
Author: Raj Kumar Nepal
Subject: Fundamentals of C Programming
Program: Write a program to find sum of even and odd upto n natural number.
Date: 2016/11/22
*/

#include<stdio.h>
int main(){
	int i, n, sume=0, sumo=0;
	printf("Enter the number upto which the sum is to be calculated: ");
	scanf("%d",&n);
	
	for(i=0; i<=n; i++)
		{
			if(i%2==0){
				sume=sume+i;
				}
			else{
				sumo=sumo+i;
				}
		}
	
	printf("The sum of even natural number is %d \n",sume);
	printf("The sum of odd natural number is %d",sumo);
	
return 0;	
}
