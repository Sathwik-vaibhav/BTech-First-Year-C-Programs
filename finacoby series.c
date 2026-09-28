#include<stdio.h>
int main()
{
	int F=0,S=1,T,i,n;
	printf("ENTER n VALUE:\n");
	scanf("%d",&n);
	
	printf("%d %d ",F,S);
	
	for(i=3;i<=n;i++)
	{
		T=F+S;
		printf("%d ",T);
		F=S;
		S=T;

	}
	return 0;
}