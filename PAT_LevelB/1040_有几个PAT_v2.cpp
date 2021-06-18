#include <iostream>
#include <string>
#include <cstring>

using namespace std;
const int MAX_N = 100000;
const int MOD = 1000000007;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    int numP = 0, numT = 0, result = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'T')
            numT++;
    }

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'P')
            numP++;
        if (str[i] == 'T')
            numT--;
        if (str[i] == 'A')
            result = (result + (numP * numT) % MOD) % MOD;
    }

    cout << result;
    return 0;
}