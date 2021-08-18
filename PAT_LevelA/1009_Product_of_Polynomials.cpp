#include "cstdio"

struct Poly{
    int exp;
    double coe;
}p[1010];

int main() {

    double res[2010] = {0}, coe;
    int n_A, n_B, exp, count = 0;

    if (scanf("%d", &n_A) == 1);
    for (int i = 0; i < n_A; i++) {
        if (scanf("%d%lf", &p[i].exp, &p[i].coe) == 1);
    }
    if (scanf("%d", &n_B) == 1);
    for (int i = 0; i < n_B; i++) {
        if (scanf("%d%lf", &exp, &coe) == 1);
        for (int j = 0; j < n_A; j++) {
            res[p[j].exp + exp] += coe * p[j].coe;
        }
    }
    for(int i=0;i<=2000;i++){
        if (res[i]!=0.0) count++;
    }
    printf("%d",count);
    for (int i = 2000; i >= 0; i--) {
        if (res[i] != 0.0) {
            printf(" %d %.1lf", i, res[i]);
        }
    }
    return 0;
}