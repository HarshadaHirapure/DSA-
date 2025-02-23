#include <iostream>
using namespace std;
int main()
{
    int a, n;
    a = 1;
    cout << "Enter the value of n ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
        a = 1;
    }

    return 0;
}