//Student Name: Raj Kumar Nepal
//Roll No: 
//Subject: Fundamental of Programming
//Program: Write a program to print greatest among three numbers.

#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
	
	//checking with else if
	
	if(a>=b && a>=c){
		printf("%d is greatest. \n",a);
		}
	else if(b>=a && b>=c){
		printf("%d is greatest. \n",b);
		}
	else{
		printf("%d is greatest. \n",c);
		}
	
		
	//Checking via nested loop..
	
	if (a>=b)
    {
        if(a>=c)
            printf("%d is the greatest.", a);
        else
            printf("%d is greatest.", c);
    }
    else
    {
        if(b>=c)
            printf("%d is the greatest.", b);
        else
            printf("%d is the greatest.",c);
    }
	
	
	

return 0;
}
