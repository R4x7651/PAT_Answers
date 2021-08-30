#include "cstdio"
#include "cstring"

char num[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
char s[101];

int main() {

    int sum = 0, res[4], cnt = 0;

    if (scanf("%s", s) == 1);
    for (int i = 0; i < strlen(s); ++i) {
        sum += (s[i] - '0');
    }
    for (int i = 0; sum != 0; ++i) {
        res[i] = sum % 10;
        cnt++;
        sum /= 10;
    }
    for (int i = cnt - 1; i >= 0; i--) {
        printf("%s", num[res[i]]);
        if (i != 0) printf(" ");
    }

    return 0;
}