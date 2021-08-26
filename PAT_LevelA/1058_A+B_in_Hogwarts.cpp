#include "cstdio"

int main() {

    int g1,s1,k1,g2,s2,k2,g,s,k;

    if (scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2)==1);
    k = k1 + k2;
    s = s1 + s2 + k/29;
    k %= 29;
    g = g1 + g2 + s/17;
    s %= 17;
    printf("%d.%d.%d",g,s,k);
    return 0;
}