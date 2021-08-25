#include "cstdio"

int main() {

    int Galleon, Sickle, Knut, sum1, sum2, res;

    if (scanf("%d.%d.%d", &Galleon, &Sickle, &Knut) == 1);
    sum1 = Knut + Sickle * 29 + Galleon * 29 * 17;
    if (scanf("%d.%d.%d", &Galleon, &Sickle, &Knut) == 1);
    sum2 = Knut + Sickle * 29 + Galleon * 29 * 17;

    sum2 - sum1 >= 0 ? res = sum2 - sum1 : res = sum1 - sum2;

    if (sum2 - sum1 < 0) printf("-");
    printf("%d.", res / (29 * 17));
    res %= 29 * 17;
    printf("%d.", res / 29);
    res %= 29;
    printf("%d", res);

    return 0;
}