#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	printf("*\n");
	for(i=1;i<=N;i++)
	{
		printf("*");
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("*");
		printf("\n");
	}
	for(i=1;i<N;i++)
	{
			printf("*");
		for(j=1;j<=N-i;j++)
		{
			printf("%d ",j);
		}
		for(j=N-i-1;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("*");
		printf("\n");
	}
	printf("*");
}
