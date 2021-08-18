#include "cstdio"

const int MAX=1010;

int main()
{
    int poly[MAX]={0},n,temp,count=0;

    while(scanf("%d%d",&temp,&n)!=EOF){
        poly[n]=temp;
        count++;
    }
    if (count==0 || (count ==1 && poly[0] != 0)) printf("0 0");
    else{
        for(int i=MAX;i>=1;i--)
        {
            if (poly[i]) printf("%d %d ",poly[i]*i,i-1);
        }
    }
    return 0;
}