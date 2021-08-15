#include "cstdio"
#include "cmath"

int main() {
    int a[5] = {0};
    int count[5] = {0};
    int n;
    if (scanf("%d", &n) == 1);
    for (int i = 0; i < n; i++) {
        int temp;
        if (scanf("%d", &temp) == 1);
        if (temp % 10 == 0) {
            a[0] = a[0] + temp;
            count[0]++;
            continue;
        }
        if (temp % 5 == 1) {
            a[1] += (pow(-1, count[1]) * temp);
            count[1]++;
            continue;
        }
        if (temp % 5 == 2) {
            count[2]++;
            continue;
        }
        if (temp % 5 == 3) {
            a[3] += temp;
            count[3]++;
            continue;
        }
        if (temp % 5 == 4) {
            if (temp > a[4]) a[4] = temp;
            count[4]++;
            continue;
        }
    }
    count[0] != 0 ? printf("%d ", a[0]) : printf("N ");
    count[1] != 0 ? printf("%d ", a[1]) : printf("N ");
    count[2] != 0 ? printf("%d ", count[2]) : printf("N ");
    count[3] != 0 ? printf("%.1f ", (double) a[3] / count[3]) : printf("N ");
    count[4] != 0 ? printf("%d", a[4]) : printf("N");

    return 0;
}