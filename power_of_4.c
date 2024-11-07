#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int count=0;
	int n=num&0x55555555;
	while(n>0)
	{
		count+=(n&1);
		n=n>>1;
	}
	if(count==1 && (num&(num-1))==0)	
	{
		printf("power of 4");
	}
	else
	{
		printf("not power of 4");
	}
}
