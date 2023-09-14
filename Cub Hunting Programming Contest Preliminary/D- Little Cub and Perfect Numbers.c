#include<stdio.h>
int main()
{
    int t,i,n,j,s;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        s=0;
        scanf("%d",&n);
        for(j=1; j<n; j++)
        {
            if(n%j==0)
            {
              s+=j;
            }

        }
        if(s==n)
        {
            printf("Perfect\n");
        }
        else{   printf("Average\n");}
    }
    return 0;
}


