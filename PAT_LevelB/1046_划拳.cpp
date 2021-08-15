#include "cstdio"

int main()
{
    int num,a_drink=0,b_drink=0;

    if(scanf("%d",&num)==1);

    int log[num][4];

    for(int i=0;i<num;i++)
    {
        if(scanf("%d %d %d %d",&log[i][0],&log[i][1],&log[i][2],&log[i][3])==1);
    }

    for(int i=0;i<num;i++)
    {
        int ans = log[i][0] + log[i][2];
        if(log[i][1] == ans)
        {
            if(log[i][3]!=ans)
            {
                b_drink++;
            } else
            {
                continue;
            }
        }
        else if (log[i][3]==ans)
        {
            a_drink++;
        }
    }
    printf("%d %d",a_drink,b_drink);
    return 0;
}