#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, dup;
    vector<int> divisor;
    cin >> dup;
    num = dup;

    int sqrtn = sqrt(num);
    for (int i = 1; i <= sqrtn; ++i)
    {
        if (num % i == 0)
        {
            divisor.push_back(i);
        }
        if (i != num / i)
        {
            divisor.push_back(i);
        }
    }

    for (auto &n : divisor)
    {
        cout << n << " ";
    }

    return 0;
}