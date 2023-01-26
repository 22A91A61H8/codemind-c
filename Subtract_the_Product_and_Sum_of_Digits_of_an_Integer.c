#include <stdio.h>
int main()
{
    int n,s=0,p=1,i,diff,q,r;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        p=p*r;
        s+=r;
        q=q/10;
    }
    diff=(p-s);
    printf("%d",diff);
}