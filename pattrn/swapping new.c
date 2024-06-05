#include<stdio.h>
#include<conio.h>
void main(){
	int a=100,b=200;
	
	printf("before swapping the value of a & b is\n");
	printf("A is %d\n",a);
	printf("B is %d\n",b);
	
	printf("After swapping the value of a & b is\n");
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("A is %d\n",a);
	printf("B is %d\n",b);
	
	
	

	
}