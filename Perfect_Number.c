#include <stdio.h>
int main()
{
    int num,i,rem,sum=0;
    scanf("%d",&num);
    for(i=1; i<num; i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}