#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    n--;
    for(int i=n;i>=0;i--)
    {
        a=i+65;
        for(int j=0;j<=i;j++)
        {
            printf("%c ",a);
        }
        printf("
");
    }
}