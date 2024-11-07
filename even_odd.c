#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	//if(num<<31==0)
	if((num & 1)!=0)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
}
