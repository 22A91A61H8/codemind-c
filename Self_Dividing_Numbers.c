#include <stdio.h>
int main()
{
    int l,u,c,q,tc,i,r;
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        q=i;
        c=0;
        tc=0;
        while(q!=0)
        {
            c=c+1;
            r=q%10;
            if(r!=0 && i%r==0)
            {
                tc=tc+1;
            }
            q=q/10;
        }
        if(c==tc)
        {
            printf("%d ",i);
        }
    }
}