#include <bits/stdc++.h>
using namespace std;
int count_return(int num)
{
    int dup = num;
    int count = 0;
    while (dup > 0)
    {
        dup = dup / 10;
        count++;
    }
    cout << count;
    return count;
}
int main()
{
    int num;
    int k = 0;
    int ld;
    int as = 0;
    cout << "enter number : ";
    cin >> num;
    int dup = num;
    k = count_return(num);
    while (dup > 0)
    {
        ld = dup % 10;
        as += pow(ld, k);
        dup = dup / 10;
    }
    cout << as;
    if (as == num)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << " not armstrong";
    }
    return 0;
}