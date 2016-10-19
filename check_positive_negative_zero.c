//Author: Raj Kumar Nepal
//Subject: Fundamentals of C Programming
//Program: Program to check whether the number is zero or neg or positive.
//Lab: 04
//Date: 2016/09/27
#include<stdio.h>
#include<conio.h>
void main()
{
    float a;
    
    printf("Enter the  number to check: ");
    scanf("%f", &a);
    
    //Checking zero
    if(a=0){
        printf("The number is zero.");
    }
    //Checking negative
    else if(a<0){
        printf("The number is negative.");
    }
    //Else positive
    else{
        printf("The number is positive.");
    }
    
    getch();
    
}
