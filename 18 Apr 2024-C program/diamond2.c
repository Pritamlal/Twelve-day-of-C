#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=1;i<N;i++)
	{
		for(j=1;j<(2*N-2*i);j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
