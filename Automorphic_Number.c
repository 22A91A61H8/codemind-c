#include <stdio.h>
int main()
{
    int num,temp,sqr,count=1;
    scanf("%d",&num);
    temp=num;
    sqr = num * num;
    while(num!=0)
    {
        count=count*10;
        num=num/10;
    }
    if(sqr%count==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}