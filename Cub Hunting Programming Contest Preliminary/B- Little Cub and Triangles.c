#include<stdio.h>
int main()
{
    int  a,b,c,i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c&&b+c>a&&c+a>b)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
