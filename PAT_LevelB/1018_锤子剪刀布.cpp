#include "cstdio"

int turn(char a);

int main() {
    char map[3] = {'B', 'C', 'J'};
    int a_cnt[3] = {0}, b_cnt[3] = {0};
    int a_gesture[3] = {0}, b_gesture[3] = {0};
    int n;
    char a_g, b_g;
    int a, b;

    if (scanf("%d", &n) == 1);
    for (int i = 0; i < n; i++) {
        getchar();
        if (scanf("%c %c", &a_g, &b_g) == 1);
        a = turn(a_g);
        b = turn(b_g);
        if ((a + 1) % 3 == b) {
            a_cnt[0]++;
            b_cnt[2]++;
            a_gesture[a]++;
        } else if (a == b) {
            a_cnt[1]++;
            b_cnt[1]++;
        } else {
            a_cnt[2]++;
            b_cnt[0]++;
            b_gesture[b]++;
        }
    }

    printf("%d %d %d\n", a_cnt[0], a_cnt[1], a_cnt[2]);
    printf("%d %d %d\n", b_cnt[0], b_cnt[1], b_cnt[2]);
    a = 0, b = 0;
    for (int i = 0; i < 3; i++) {
        if (a_gesture[i] > a_gesture[a]) a = i;
        if (b_gesture[i] > b_gesture[a]) b = i;
    }
    printf("%c %c", map[a], map[b]);
    return 0;
}

int turn(char a) {
    if (a == 'B') return 0;
    if (a == 'C') return 1;
    if (a == 'J') return 2;
}