#include<stdio.h>
int main()
{
    int i,m,n,gcd;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        gcd=i;
    }
    printf("%d",gcd);
    
}