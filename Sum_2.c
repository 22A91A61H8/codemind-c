#include<stdio.h>
int main()
{
    int a,b,x,y,sum=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(a;a<=b;a++)
    {
        if(a%x==0 && a%y!=0)
        {
            sum=sum+a;
        }
    }
    printf("%d",sum);
}