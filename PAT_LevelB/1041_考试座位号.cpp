#include "cstdio"

struct Stu{
    long long no;
    int number;
}student[1010];

int main(){

    int n,index,number;
    long long no;

    if (scanf("%d",&n)==1);
    for (int i = 0; i < n; ++i) {
        if (scanf("%lld %d %d",&no,&index,&number)==1);
        student[index].no = no;
        student[index].number = number;
    }
    if (scanf("%d",&n)==1);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d",&index)==1);
        printf("%lld %d\n",student[index].no,student[index].number);
    }

    return 0;

}