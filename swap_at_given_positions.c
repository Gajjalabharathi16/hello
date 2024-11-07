#include<stdio.h>
int main()
{
	int num,res1,res2;
	int pos1,pos2,swap1,output;
	scanf("%d",&num);
	scanf("%d",&pos1);
	scanf("%d",&pos2);
	res1=num & 1 <<pos1;
	res2=num & 1 <<pos2;
	if(res1!=0 && res2!=0)
	{
		printf("no need to do swapping");
	}
	else
	{
		swap1=num ^ 1<<pos1;
		 output=swap1 ^ 1<<pos2;
	
	printf("%d",output);
	}
}
