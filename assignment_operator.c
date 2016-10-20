//Student Name: Raj Kumar Nepal
//Roll No: 
//Subject: Fundamental of Programming
//Program: Write a program to use assign operator.
//Date: 20Oct, 2016

#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d",&a); 
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
		//a+=b >> a=a+b

	a+=b;
	printf("The result of a+=b operator is %d . \n", a);
	
		//a-+b >> a=a-b
		
	a-=b;
	printf("The result of a-=b operator is %d . \n", a);

	
		//a*=b >> a=a*b
		
	a*=b;
	printf("The result of a*=b operator is %d \n", a);

		//a/=b >> a=a/b
		
	a/=b;
	printf("The result of a/=b operator is %d \n", a);
	
		//a%=b >> a=a%b
	
	a%=b;
	printf("The result of a%=b operator is %d \n", a);
		
		//a=b >> replaces value

	a=b;
	printf("The result of a=b operator is %d \n", a);
	
		
		
	return 0;
}
