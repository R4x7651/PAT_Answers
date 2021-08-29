#include "cstdio"

const int weight[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
const char M[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};

char id[18];

bool pass() {
    int z = 0;
    for (int i = 0; i < 17; ++i) {
        if (id[i] < '0' || id[i] > '9') return false;
        z += (id[i] - '0') * weight[i];
    }
    int last = (id[17] == 'X') ? 10 : (id[17] - '0');
    return M[z % 11] == last;
}

int main() {

    int n;
    bool all_passed = true;

    if (scanf("%d", &n) == 1);
    for (int i = 0; i < n; ++i) {
        if (scanf("%s", id) == 1);
        if (!pass()) {
            for (int j = 0; j < 18; ++j) {
                printf("%c", id[j]);
                all_passed = false;
            }
            printf("\n");
        }
    }
    if (all_passed) printf("All passed");
    return 0;
}