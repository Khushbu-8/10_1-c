#include<stdio.h>

//Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.For example,
//Input:
//Enter any number: 15
//
//Output:
//The given number is divisible by both 3 & 5.

//Input:
//Enter any number: 10
//
//Output:
//The given number is not divisible by both 3 & 5.

void div(){
	
		int a;
	
	printf("Enter any number :");
	scanf("%d",&a);
	if(a%2==0||a%3==0){
		printf("The given number is divisible by both 3 & 5");
	}else{
     	printf("The given number is not divisible by both 3 & 5");
	}
}


void main(){

	div();
}
