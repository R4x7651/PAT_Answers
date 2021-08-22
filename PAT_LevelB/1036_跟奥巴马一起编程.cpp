#include "cstdio"

int main() {

    int n,row;
    char c;

    if (scanf("%d %c",&n,&c)==1);
    if (n%2==1) row=n/2+1;
    else row=n/2;
    for (int i = 1; i <= row; ++i) {
        if (i==1||i==row){
            for (int j = 0; j < n; ++j) {
                printf("%c",c);
            }
            if(i!=row) printf("\n");
        } else{
            for (int j = 0; j < n; ++j) {
                if (j==0||j==n-1){
                    printf("%c",c);
                } else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}