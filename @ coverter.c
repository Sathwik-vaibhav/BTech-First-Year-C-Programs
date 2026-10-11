#include<stdio.h>
int main()
{
	int i,Length=0;
	char st[100];
	printf("Enter strings:\n");
	scanf("%s",st);
	
	for(i=0;st[i]!='\0';i++)
	{
		st[i]='@';
		
	}
	puts(st);
}