#include<stdio.h>
int main()
{
    int k,i,a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    for(i=b;i<=n;i++)
    {
        k=a*i;
        printf("%d x %d = %d
",a,i,k);
    }
}