#include "cstdio"
#include "cstring"

int main() {

    char s[81];
    int row = 0, current = 0, space;

    if (scanf("%s", s) == 1);
    int N = strlen(s);

    for (int i = 1; 3 * i - 2 <= N; i++) row++;
    space = N - 2 * row;
    for (int i = 1; i <= row; i++) {
        if (i != row) {
            printf("%c", s[current]);
            for (int j = 0; j < space; ++j) printf(" ");
            printf("%c\n", s[N - current - 1]);
            current++;
        } else {
            for (int j = current; j <= N - current - 1; j++) {
                printf("%c", s[j]);
            }
        }
    }
    return 0;
}