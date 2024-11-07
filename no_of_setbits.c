#include<stdio.h>
int main()
{
	int num;
	int count=0;
	scanf("%d",&num);
	while(num>0)
	{
		count+=num&1;
		num=num>>1;
	}
	if(count==1)
	{
		printf("power of 2");
	}
	else
	{
		printf("not power of 2");
	}

	//printf("%d",count);
}
