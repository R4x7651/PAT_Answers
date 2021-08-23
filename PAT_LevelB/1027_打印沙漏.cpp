#include "cstdio"

int main() {

    int total, row = 0;
    char c;

    if (scanf("%d %c", &total, &c) == 1);
    for (int i = 0; i < total; ++i) {
        if (2 * i * (i + 2) + 1 > total) {
            row = i - 1;
            break;
        }
    }

    for (int i = row; i >= 1; i--) {
        for (int j = row - i; j >= 1; j--) printf(" ");
        for (int j = 2 * i + 1; j >= 1; j--) printf("%c", c);
        printf("\n");
    }
    for (int i = 0; i < row; i++) printf(" ");
    printf("%c\n", c);
    for (int i = 1; i <= row; i++) {
        for (int j = row - i; j >= 1; j--) printf(" ");
        for (int j = 2 * i + 1; j >= 1; j--) printf("%c", c);
        printf("\n");
    }

    printf("%d", total - ((row + 1) * (row + 1) * 2 - 1));
    return 0;
}