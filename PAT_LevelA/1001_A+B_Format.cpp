#include<cstdio>

int main(){
    long long in1,in2,sum;
    int num=0,count=0;
    char result[15];

    if(scanf("%lld %lld", &in1, &in2)==1);
    sum = in1 + in2;

    if(sum<0){
        sum = -sum;
        printf("-");
    }
    if(sum==0){
        printf("0");
        return 0;
    }
    for (int i = 0; sum; i++) {
        num = sum % 10;
        result[i] = num + 48;
        sum /= 10;
        count++;
    }

    for (int i = 0; i < count; i++) {
        printf("%c", result[count - (i + 1)]);
        if ((i + 1) % 3 == count % 3 && i != count - 1) {
            printf(",");
        }
    }
    return 0;
}