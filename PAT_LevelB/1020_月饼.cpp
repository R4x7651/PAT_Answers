#include <cstdio>
#include <algorithm>

using namespace std;

struct Mooncake
{
    double store;
    double sell;
    double price;
} cake[1024];

bool cmp_price(Mooncake a, Mooncake b)
{
    return a.price > b.price;
}

int main()
{
    int species;
    double need, result=0;
    if(scanf("%d %lf", &species, &need)==1);
    for (int i = 0; i < species; i++)
    {
        if(scanf("%lf", &cake[i].store)==1);
    }
    for (int i = 0; i < species; i++)
    {
        if(scanf("%lf", &cake[i].sell)==1);
        cake[i].price = cake[i].sell / cake[i].store;
    }

    sort(cake, cake + species, cmp_price);
    for (int i = 0; i < species; i++)
    {
        if(cake[i].store<need)
        {
            result += cake[i].sell;
            need -= cake[i].store; 
        }
        else
        {
            result += need*cake[i].price;
            break;
        }
    }
    printf("%.2f",result);
    return 0;
}