// unfinished
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n ;";
    cin >> n;
    for (int i = 0; i < n + (n - 1); i++)
    {
        for (int j = 0; j < n + (n - 1); j++)
        {
            if (i == 0 || i == n + (n - 1) || j == 0 || j == n + (n - 1))
            {
                cout << n;
            }
        }
        cout << endl;
    }
    return 0;
}