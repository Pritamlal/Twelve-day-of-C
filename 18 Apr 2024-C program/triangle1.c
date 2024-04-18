#include<stdio.h>
int main()
{
	int i,j,N,count,value;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<N;i++)
	{
	value=(i&1)?(count+1):count+i;
	for(j=1;j<=i;j++)
	{
		printf("%d ",value);
		if(i&1)
		value++;
		else
		value--;
	count++;	
	}
	printf("\n");
}
}
