#include<stdio.h>

int main(){
	int i, j;
	
	printf("Enter i: ");
	scanf("%d", &i);
	printf("Enter j: ");
	scanf("%d", &j);
	
	printf("!i: %d\n", !i);
	printf("!j: %d\n", !j);
	printf("i&&j: %d %d\n", i&&j);
	printf("i||j: %d %d", i||j);
		
	return 0;
}