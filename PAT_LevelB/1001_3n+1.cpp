#include<stdio.h>

int main()
{
    int n,step=0;

    if(scanf("%d",&n)==1);

    while(n!=1)
    {
      if(n%2==0) n /= 2;
      else n= ((3*n)+1)/2;
      step += 1;
    }
    printf("%d",step);
    return 0;
}