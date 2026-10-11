#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,length2=0,length=0;
	char st1[100],st2[100];
	printf("Enter string charecters:\n");
	scanf("%s",st1);
	printf("ENTER characters you want to add to previous one\n");
	scanf("%s",st2);
	
	for(i=0;st1[i]!='\0';i++)
	{
		length++;
	}
	for(i=0;st2[i]!='\0';i++)
	{
		length2++;
	}
	
	for(i=length,j=0;st2[j]!=0;i++,j++)
		st1[i]=st2[j];
		
	st1[length+length2]='\0';
	for(i=0;st1[i]!='\0';i++)
	{
		printf("%c",st1[i]);
	}
}