#include<stdio.h>

int main(){
	
	int a, b, n;
	
	printf("Nhap a: ");
	scanf("%d", &a);
	fflush(stdin);
	printf("Nhap b: ");
	scanf("%d", &b);	
	
	n = a + b;
	
	printf("n=a+b=%d\n", a + b);
	printf("n=++a+b=%d\n", ++a + b);
	printf("n=a++ +b=%d\n", a++ + b);
	printf("n=--a+b=%d\n", --a + b);
	printf("n=a-- +b=%d\n", a-- + b);
	printf("n=a+b=%d", a + b);	
	
	return 0;
}