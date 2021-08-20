#include "cstdio"

struct Person {
    char name[6];
    int year;
    int month;
    int day;
} person[2], temp, lft, rt;

bool is_younger(Person a, Person b) {
    if (a.year > b.year) return true;
    else if (a.year == b.year && a.month > b.month) return true;
    else if (a.year == b.year && a.month == b.month && a.day > b.day) return true;
    else return false;
}

bool is_elder(Person a, Person b) {
    if (a.year < b.year) return true;
    else if (a.year == b.year && a.month < b.month) return true;
    else if (a.year == b.year && a.month == b.month && a.day < b.day) return true;
    else return false;
}

void init() {
    lft.year = 1814, lft.month = 9, lft.day = 5;
    rt.year = 2014, rt.month = 9, rt.day = 7;
}

int main() {

    init();
    int n, ok = 0;

    person[0].year = 2015;
    person[1].year = 1813;

    if (scanf("%d", &n) == 1);
    for (int i = 0; i < n; ++i) {
        if (scanf("%s %d/%d/%d", temp.name, &temp.year, &temp.month, &temp.day) == 1);
        if (is_younger(temp, lft) && is_elder(temp, rt)) ok++;
        else continue;
        if (is_younger(temp, person[1])) person[1] = temp;
        if (is_elder(temp, person[0])) person[0] = temp;
    }

    if (ok==0) printf("0");
    else printf("%d %s %s", ok, person[0].name, person[1].name);

    return 0;
}