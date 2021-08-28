#include "cstdio"
#include "cstring"

int main() {

    int res[10]={0};
    char n[1010];

    if (scanf("%s",n)==1);
    int len = strlen(n);
    for (int i = 0;i<len; ++i) {
        res[n[i] - '0']++;
    }
    for (int i = 0; i < 10; ++i) {
        if (res[i]) printf("%d:%d\n",i,res[i]);
    }
    return 0;
}