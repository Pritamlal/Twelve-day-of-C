#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==j)
			printf("%d",j);
			else
			printf(" ");
		}
		for(j=i+1;j<=2*N-i-1;j++)
		{
			printf(" ");
		}
		if(i!=N)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	for(i=N-1;i>=1;i++)
	{
		for(j=1;j<2*N-i;j++)
		{
			printf(" ");
		}
		
		printf("\n");
	}
}
