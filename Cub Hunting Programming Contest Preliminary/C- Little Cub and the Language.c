#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,vow,con,x=0,a[105]={0},j,k,s=0;
    char w[105];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        s=0;
        vow=0;
        con=0;
        x=0;
        for(k=65;k<=90;k++)
        {
            a[k]=0;
        }
        scanf("%s",&w);
        x=strlen(w);

        for(j=0; j<x; j++)
        {
            for(k=65; k<=90; k++)
            {
                if(w[j]==k)
                {
                    a[k]=1;
                }


            }

        }
        for(k=65;k<=90;k++)
        {
            s=s+a[k];
        }


        vow=a[65]+a[69]+a[73]+a[79]+a[85];
        con=s-vow;

             printf("%d %d\n",vow,con);

    }
    return 0;
}
