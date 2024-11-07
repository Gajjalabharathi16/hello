#include<stdio.h>

int main()
{
	int num;
	printf("enter number to toggle: ");
	scanf("%d",&num);
	int high;
	printf("enter high number: ");
	scanf("%d",&high);
	int low;
	printf("enter low: ");
	scanf("%d",&low);

	int mask=((1<<(high-low+1))-1)<<low;
	//int mask = ((1 << (high - low + 1)) - 1) << (low - 1);
	int result=num^mask;

	printf("%d",result);
}
