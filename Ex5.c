#include<stdio.h>

int main(){
	int i, j;
	
	printf("Enter i: ");
	scanf("%d", &i);
	printf("Enter j: ");
	scanf("%d", &j);

	printf("i > j : %d\n", i>j);
	printf("i < j : %d\n", i<j);
	printf("i >= j: %d\n", i>=j);
	printf("i <= j: %d\n", i<=j);
	printf("i == j: %d\n", i==j);
	printf("i != j: %d", i!=j);
	
	return 0;
}