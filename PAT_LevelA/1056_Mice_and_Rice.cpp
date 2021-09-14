#include "cstdio"
#include "queue"

using namespace std;
const int maxn = 1001;
struct mouse {
    int weight;
    int rank;
} mouse[maxn];

int main() {

    int np, ng, order;
    if (scanf("%d %d", &np, &ng) == 1);
    for (int i = 0; i < np; ++i) {
        if(scanf("%d", &mouse[i].weight)==1);
    }
    queue<int> q;
    for (int i = 0; i < np; ++i) {
        if(scanf("%d", &order)==1);
        q.push(order);
    }
    int temp = np, group;
    while (q.size() != 1) {
        temp % ng == 0 ? group = temp / ng : group = temp / ng + 1;
        for (int i = 0; i < group; ++i) {
            int k = q.front();
            for (int j = 0; j < ng; ++j) {
                if (i * ng + j >= temp) break;
                int front = q.front();
                if (mouse[front].weight > mouse[k].weight) {
                    k = front;
                }
                mouse[front].rank = group + 1;
                q.pop();
            }
            q.push(k);
        }
        temp = group;
    }
    mouse[q.front()].rank = 1;
    for (int i = 0; i < np; ++i) {
        printf("%d", mouse[i].rank);
        if (i < np - 1)printf(" ");
    }
    return 0;
}