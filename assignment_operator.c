//Author: Raj Kumar Nepal
//Subject: Fundamental of C Programming
//Program: Write a program showing use of assignment operator.
//Date: 20 Oct, 2016

#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d",&a); 
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
		//a+=b mean a=a+b

	a+=b;
	printf("The result of a+=b operator is %d . \n", a);
	
		//a-+b mean a=a-b
		
	a-=b;
	printf("The result of a-=b operator is %d . \n", a);

	
		//a*=b mean a=a*b
		
	a*=b;
	printf("The result of a*=b operator is %d \n", a);

		//a/=b mean a=a/b
		
	a/=b;
	printf("The result of a/=b operator is %d \n", a);
	
		//a%=b mean a=a%b
	
	a%=b;
	printf("The result of a%=b operator is %d \n", a);
		
		//a=b replaces value

	a=b;
	printf("The result of a=b operator is %d \n", a);
	
		
		
	return 0;
}
