#include<stdio.h>
int main()
{
	int i,Length=0;
	char st[100];
	printf("Enter strings:\n");
	scanf("%s",st);
	
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]>=65&&st[i]<=90)
			st[i]=st[i]+32;
	}
	puts(st);
}