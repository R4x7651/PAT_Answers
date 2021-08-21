#include "cstdio"

int score[100010]={0};

int main(){

    int n,index,max,sc;

    if (scanf("%d", &n)==1);
    for (int i = 0; i < n; i++) {
        if (scanf("%d %d",&index,&sc)==1);
        score[index] += sc;
    }
    max=-1,index=0;
    for (int i =  1; i <= n; i++) {
        if (score[i]>max){
            max = score[i];
            index = i;
        }
    }
    printf("%d %d\n",index,max);
    return 0;
}