#include "cstdio"

struct Stu {
    char id[16];
    int hour;
    int minute;
    int second;
} in, out, temp;

bool earlier(Stu a, Stu b) {
    int total_a = a.hour * 3600 + a.minute * 60 + a.second;
    int total_b = b.hour * 3600 + b.minute * 60 + b.second;
    if (total_a < total_b) return true;
    else return false;
}

int main() {

    int n;

    in.hour = 23, in.minute = 59, in.second = 59;
    out.hour = 0, out.minute = 0, out.second = 0;

    if (scanf("%d", &n) == 1);
    for (int i = 0; i < n; ++i) {
        if (scanf("%s %d:%d:%d", temp.id, &temp.hour, &temp.minute, &temp.second) == 1);
        if (earlier(temp, in)) in = temp;
        if (scanf("%d:%d:%d", &temp.hour, &temp.minute, &temp.second) == 1);
        if (!earlier(temp, out)) out = temp;
    }

    printf("%s %s", in.id, out.id);
    return 0;
}