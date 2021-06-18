#include <iostream>
#include <string>
#include <cstring>

using namespace std;
const int MAX_N = 100000;
const int MOD = 1000000007;

char str[MAX_N];
int left_Num_P[MAX_N] = {0};

int main()
{
    cin.getline(str, 100);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (i > 0)
            left_Num_P[i] = left_Num_P[i - 1];
        if (str[i] == 'P')
            left_Num_P[i]++;
    }

    int right_Num_T = 0, result = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == 'T')
            right_Num_T++;
        else if (str[i] == 'A')
            result = (result + (left_Num_P[i] * right_Num_T) % MOD) % MOD;
    }

    printf("%d\n", result);
    return 0;
}