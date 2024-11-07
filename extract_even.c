#include<stdio.h>
#include<string.h>
int main()
{
	int num,even,odd;
	printf("enter number:");
	scanf("%d",&num);

	even=num&0x55555555;
	int count=0;
        int count1=0;
	while(even>0)
	{
		count+=even&1;
		even=even>>1;
	}
	printf("even set bits: %d\n",count);
	printf("raju");

	odd=num&0xAAAAAAAA;
	while(odd>0)
        {
               count1+=odd&1;
               odd= odd>>1;
        }
	 printf("odd set bits : %d\n",count1);
	
}

