#include "cstdio"

char s[13] = {'0','1','2','3','4','5','6','7','8','9','A','B','C'};

int main() {

    int rgb[3];

    if (scanf("%d %d %d",&rgb[0],&rgb[1],&rgb[2])==1);
    printf("#");
    for (int i = 0; i < 3; ++i) {
        printf("%c",s[rgb[i] / 13]);
        printf("%c",s[rgb[i] % 13]);
    }
    return 0;
}