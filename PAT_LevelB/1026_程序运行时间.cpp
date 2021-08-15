#include "cstdio"

#define CLK_TCK 100

int main() {
    int c1, c2, seconds, hour, minute;

    if (scanf("%d %d", &c1, &c2) == 1);

    ((c2 - c1) % 100) >= 50 ? (seconds = ((c2 - c1) / CLK_TCK) + 1) : (seconds = (c2 - c1) / CLK_TCK);

    hour = seconds / 3600;
    seconds %= 3600;

    minute = seconds / 60;
    seconds %= 60;

    printf("%02d:%02d:%02d", hour, minute, seconds);
    return 0;

}