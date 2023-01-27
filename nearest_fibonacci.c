#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c;
    for(int i=0;i<=n;i++)
    {
        c=a+b;
        if(c>n)
        {
            break;
        }
        a=b;
        b=c;
    }
    int d1=abs(n-c);
    int d2=abs(n-b);
    if(d1>d2)
    {
        printf("%d",b);
    }
    else if(d1<d2)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d %d",b,c);
    }
}