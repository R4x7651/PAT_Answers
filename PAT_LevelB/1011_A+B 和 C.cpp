#include<stdio.h>

struct DATA{
    long long A;
    long long B;
    long long C;
};

int main()
{
    int num;
    if(scanf("%d",&num)==1);

    DATA d[num];

    for(int i=0;i<num;i++)
    {
        if(scanf("%lld %lld %lld",&d[i].A,&d[i].B,&d[i].C)==1);
    }

    for(int i=0;i<num;i++)
    {
        if(d[i].A + d[i].B > d[i].C)
        {
            printf("Case #%d: true\n",i+1);
        } else
        {
            printf("Case #%d: false\n",i+1);
        }
    }
    return 0;
}