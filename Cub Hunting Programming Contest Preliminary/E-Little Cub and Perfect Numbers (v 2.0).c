#include<stdio.h>
int main()
{
    int t,n,i,s=0,p,j,co=0,x=0;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        s=0,co=0;
        scanf("%d",&n);
        if(n>=8128&&n<=33550336)
        {
            co=4;
        }
        else
        {

            for(p=1; p<=n; p++)
            {
                s=0;
                x=p;

                for(j=1; j*j<=p; j++)
                {

                    if(j*j==p)
                    {
                        s+=j;
                    }
                    else if(p%j==0)
                    {
                        s=s+j+(p/j);
                    }

                }

                if(s-x==x)
                {
                    co++;
                }
            }
        }
        printf("%d\n",co);
    }

    return 0;
}

