#include <stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2; i<n/2; ++i)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}