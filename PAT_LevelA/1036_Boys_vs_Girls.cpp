#include "cstdio"

struct Stu{
    char name[11];
    char sex;
    char id[11];
    int grade;
}male,female,tmp;

int main() {

    int n;

    male.grade = 101;
    female.grade = -1;

    if (scanf("%d",&n)==1);
    for (int i = 0; i < n; ++i) {
        if (scanf("%s %c %s %d",tmp.name,&tmp.sex,tmp.id,&tmp.grade)==1);
        if (tmp.sex=='M' && (tmp.grade < male.grade)) male = tmp;
        if (tmp.sex=='F' && (tmp.grade > female.grade)) female = tmp;
    }

    if (female.grade == -1) printf("Absent\n");
    else printf("%s %s\n",female.name,female.id);
    if (male.grade == 101) printf("Absent\n");
    else printf("%s %s\n",male.name,male.id);
    if(female.grade == -1 || male.grade == 101) printf("NA");
    else printf("%d",female.grade-male.grade);

    return 0;
}