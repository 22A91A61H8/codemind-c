#include <stdio.h>
int main()
{
    int n,temp,sum=0,product=1,last_digit;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        last_digit = n % 10;
        sum = sum + last_digit;
        product = product * last_digit;
        n = n / 10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}