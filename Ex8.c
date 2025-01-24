#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	
	printf("Sum: %d + %d + %d = %d", a, b, c, a + b + c );
	
	return 0;
}