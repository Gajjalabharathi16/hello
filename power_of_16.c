#include<stdio.h>
int main()
{
        int num;
        scanf("%d",&num);
        int position=0;
        if((num&(num-1))==0)
        {

                while(num>1)
                {
                        num=num>>1;
                        position++;
                }
                if(position%4==0)
                {
                        printf("power of 16");
                }
                else
                {
                        printf("not");
                }

        }
        else
        {
                printf("not power of 16");


        }
}
