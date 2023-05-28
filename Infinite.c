#include<stdio.h>
int main()
{
    int i,n,sq;
    for(i=1;i<100000;i++)
    {
        scanf("%d",&n);
        if(n==-1) break;
        else printf("%d
",n*n);
    }
}