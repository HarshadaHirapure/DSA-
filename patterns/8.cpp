#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many rows you want ?";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}