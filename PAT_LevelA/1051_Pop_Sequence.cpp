#include "cstdio"
#include "stack"

using namespace std;
const int maxn = 1010;
int pop[maxn];
stack<int> s;

int main(){
    int m,n,k;
    if(scanf("%d %d %d",&m,&n,&k)==1);
    while(k--){
        while (!s.empty()){
            s.pop();
        }
        for(int i=1;i<=n;i++){
            if(scanf("%d",&pop[i])==1);
        }
        int current=1;
        bool flag = true;
        for(int i=1;i<=n;i++){
            s.push(i);
            if(s.size()>m){
                flag = false;
                break;
            }
            while(!s.empty() && s.top() == pop[current]){
                s.pop();
                current++;
            }
        }
        if (s.empty() == true && flag== true){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}