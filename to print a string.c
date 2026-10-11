#include<stdio.h>
int main()
{
	int i,n;
	char st[100];
	printf("Enter the size of string you want:\n");
	scanf("%d",&n);
	
	n++;
	
	printf("Enter strings:\n");
	scanf("%s",st);
	
	printf("THE STRING IS:\n");
	for(i=0;st[i]!='\0';i++)
	{
		printf("%c",st[i]);
		printf("\n");
	}
}