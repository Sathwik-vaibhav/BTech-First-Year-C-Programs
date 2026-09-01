#include<stdio.h>
int main ()	
{
	int nod,years,weeks,rd;
	printf("enter no of days=");
	scanf("%d",&nod);
	
	years=nod/365;
	weeks=(nod%365)/7;
	rd=(nod%365)%7;
	printf("%d years,%d weeks,%d days",years,weeks,rd);
	return 0;
}
