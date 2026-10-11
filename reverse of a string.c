#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,Length=0;
	char st1[100],st2[100];
	printf("Enter string:\n");
	scanf("%s",st1);
	
	for(i=0;st1[i]!='\0';i++)
	{
		Length++;
	}
	for(i=0,j=Length-1;st1[i]!='\0';i++,j--)
	{
		st2[j]=st1[i];
	}
	
	printf("REVERSE OF GIVEN STRING IS\n");
	
	st2[Length]='\0';
	for(j=0;st2[j]!='\0';j++)
	{
		printf("%c",st2[j]);
	}
	return 0;
}