#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many rows you want ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 1; i--)
    {
        for (int j = 0; j < i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
