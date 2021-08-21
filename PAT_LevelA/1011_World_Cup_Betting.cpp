#include "cstdio"

char c[3] = {'W','T','L'};

int main(){

    double res=1.0,tmp,data;
    int index;

    for (int i = 0; i < 3; ++i) {
        tmp = 0.0;
        for (int j = 0; j < 3; ++j) {
            if (scanf("%lf",&data)==1);
            if (data>tmp){
                tmp = data;
                index = j;
            }
        }
        res *= tmp;
        printf("%c ",c[index]);
    }
    printf("%.2f",(res*0.65-1)*2);
    return 0;
}