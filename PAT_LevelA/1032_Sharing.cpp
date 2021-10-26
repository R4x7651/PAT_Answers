#include "cstdio"
#include "cstring"

const int maxn = 100001;

struct NODE {
    char data;
    int next;
    bool flag;
} node[maxn];

int main() {
    for (int i = 0; i < maxn; ++i) {
        node[i].flag = false;
    }
    int s1, s2, n;
    if (scanf("%d%d%d", &s1, &s2, &n) == 1);
    int address, next;
    char data;
    for (int i = 0; i < n; ++i) {
        if (scanf("%d %c %d", &address, &data, &next) == 1);
        node[address].data = data;
        node[address].next = next;
    }
    int p;
    for (p = s1; p != -1; p = node[p].next) {
        node[p].flag = true;
    }
    for (p = s2; p != -1; p = node[p].next) {
        if (node[p].flag) break;
    }
    if (p != -1) {
        printf("%05d", p);
    } else {
        printf("-1");
    }
    return 0;
}