#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,num,placevalue,firstdigit,digit;
	printf("Enter the number::");
	scanf("%d",&num);
	while(num!=0)
	{
		printf("%d",num);
		
		digit=(int) log10(num);
		placevalue = (int)pow(10,digit);
		firstdigit = (int) (num/placevalue);
		
		num=num-(placevalue*firstdigit);
		printf("\n");
	}
	
}
