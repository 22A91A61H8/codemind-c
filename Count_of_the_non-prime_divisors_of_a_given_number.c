#include <stdio.h>
int prime (int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i)==0)
            {
                sum=sum+1;
            }
        }
    }
    printf("%d",sum);
}