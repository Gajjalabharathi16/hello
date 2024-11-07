#include <stdio.h>
#include<math.h>
int main()
{
int num;
printf("enter n");
scanf("%d",&num);
int flag=0;
int n=num;
for(int i=0;i<=n;i++)
{
    if(pow(2,i)==num)
   {
        flag=1;
       break;
   }
   
}
if(flag==1)
printf("yes");
else
printf("no");
}
