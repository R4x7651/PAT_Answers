#include"cstdio"

struct DATA {
    long long A;
    long long B;
    long long C;
};

int main() {
    int num;
    long long res;
    bool flag;

    if (scanf("%d", &num) == 1);

    DATA d[num];
    for (int i = 0; i < num; i++) {
        if (scanf("%lld %lld %lld", &d[i].A, &d[i].B, &d[i].C) == 1);
    }


    for (int i = 0; i < num; i++) {
        res = d[i].A + d[i].B;
        if (d[i].A > 0 && d[i].B > 0 && res < 0) flag = true;
        else if (d[i].A < 0 && d[i].B < 0 && res >= 0) flag = false;
        else if (res > d[i].C) flag = true;
        else flag = false;
        if (flag) {
            printf("Case #%d: true\n", i + 1);
        } else {
            printf("Case #%d: false\n", i + 1);
        }
    }
    return 0;
}