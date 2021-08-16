#include "cstdio"
#include "algorithm"

using namespace std;

const int MAX = 100010;
int d2d[MAX], dist[MAX];

int main() {
    int dots, num, begin, end, sum = 0;
    if (scanf("%d", &dots) == 1);
    for (int i = 1; i <= dots; i++) {
        if (scanf("%d", &d2d[i]) == 1);
        sum += d2d[i];
        dist[i] = sum;
    }

    if (scanf("%d", &num) == 1);
    int result[num];
    for (int i = 0; i < num; i++) {
        if (scanf("%d %d", &begin, &end) == 1);
        if (begin > end) swap(begin, end);
        int temp = dist[end - 1] - dist[begin - 1];
        result[i] = min(temp, sum - temp);
    }
    for (int i = 0; i < num; i++) {
        printf("%d", result[i]);
        if (i != num - 1) printf("\n");
    }
    return 0;
}