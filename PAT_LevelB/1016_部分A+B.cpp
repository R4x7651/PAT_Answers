#include"cstdio"

int calculate_pa(int n,int d_n);

int main()
{
    long long a,da,b,db;

    if(scanf("%lld %lld %lld %lld",&a,&da,&b,&db)==1);
    printf("%d",calculate_pa(a,da)+calculate_pa(b,db));
    return 0;
}

int calculate_pa(int n,int d_n)
{
    long long num;
    int p_a=0;
    while(n)
    {
        num = n % 10;
        if(num == d_n)
        {
            p_a = p_a * 10 + num;
        }
        n /= 10;
    }
    return p_a;
}