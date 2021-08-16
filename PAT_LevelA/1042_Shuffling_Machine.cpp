#include "cstdio"

const int MAX = 54;
char map[5] = {'S', 'H', 'C', 'D', 'J'};
int start[MAX + 1], end[MAX + 1], next[MAX + 1];

int main() {
    int n;
    if (scanf("%d", &n) == 1);

    for (int i = 1; i <= MAX; i++) {
        start[i] = i;
    }
    for (int i = 1; i <= MAX; i++) {
        if (scanf("%d", &next[i]) == 1);
    }
    for (int i = 1; i <= n; i++) {
        for (int i = 1; i <= MAX; i++) {
            end[next[i]] = start[i];
        }
        for (int i = 1; i <= MAX; i++) {
            start[i] = end[i];
        }
    }
    for (int i = 1; i <= MAX; i++) {
        end[i]--;
        printf("%c%d", map[end[i] / 13], end[i] % 13 + 1);
        if (i != MAX) printf(" ");
    }
    return 0;
}