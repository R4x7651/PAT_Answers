#include "cstdio"

int main() {

    int N, b, count = 0, mid;
    int res[31];
    bool flag = true;

    if (scanf("%d %d", &N, &b) == 1);
    for (int i = 0; N != 0; ++i) {
        res[i] = N % b;
        N /= b;
        count++;
    }
    count % 2 == 1 ? mid = count / 2 + 1 : mid = count / 2;
    for (int i = 0; i < mid; ++i) {
        if (res[i] == res[count - i - 1]) continue;
        else {
            flag = false;
            break;
        }
    }
    flag ? printf("Yes\n") : printf("No\n");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", res[i]);
        if (i != 0) printf(" ");
    }
    return 0;
}