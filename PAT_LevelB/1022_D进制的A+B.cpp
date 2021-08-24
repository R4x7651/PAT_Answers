#include "cstdio"

int main() {

    int A, B, D;
    int result[31]={0}, i=0,sum;

    if (scanf("%d %d %d", &A, &B, &D) == 1);
    sum = A + B;
    do {
        result[i++]= sum % D;
        sum /= D;
    } while (sum !=0);
    for (int j = i-1; j>=0 ; j--) {
        printf("%d", result[j]);
    }

    return 0;
}