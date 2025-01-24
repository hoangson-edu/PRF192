#include<stdio.h>

int main(){
	int year, old;
	
	printf("Input your birth year: ");
	scanf("%d", &year);
	old = 2025-year;
	
	printf("Ban sinh nam %d, vay ban %d", year, old);
	
	return 0;
}