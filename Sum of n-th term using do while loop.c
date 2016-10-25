//Author: Raj Kumar Nepal
//Subject: Fundamental of C Programming
//Program: Write a C program to find the sum of nth term using do while loop.
//Date: 25 Oct, 2016


#include<stdio.h>
int main(){
		int n,i=0,sum=0;
    
		printf("Enter the number upto where sum is needed: ");
		scanf("%d",&n);
		
    //Do While Loop..
    
		do{
			sum+=i;
			i++;
		} while(i<=n);
    
		printf("Sum Upto %d = %d \n",i,sum);
    
return 0;		
}
