#include<stdio.h>

//Q.1 Write a Program to find the cube of a given number using UDF.For example,
//Input:
//Enter any number: 5
//
//Output:
//Cube is: 125

void cube(int a){
	printf("The cube is %d",a*a*a);
}


void main(){
	int a;
	
	printf("Enter any number :");
	scanf("%d",&a);
	cube(a);
}

