#include "cstdio"

int main() {
    int amount, offset,count=0;

    if (scanf("%d %d", &amount, &offset) == 1);

    offset = offset % amount;
    int number[amount];

    for(int i=0;i<amount;i++)
    {
        if(scanf("%d",&number[i])==1);
    }

    for (int i = amount - offset; i < amount; i++) {
        printf("%d", number[i]);
        count++;
        if(count!=amount) printf(" ");
    }
    for (int i = 0; i < amount - offset; i++) {
        printf("%d", number[i]);
        count++;
        if(count!=amount) printf(" ");
    }

    return 0;

}