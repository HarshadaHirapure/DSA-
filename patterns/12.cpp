#include <iostream>
using namespace std;
int main()
{
    int n, a;

    cout << "Enter how many rows you want print ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a = 1;
        for (int j = 0; j <= i; j++)
        {

            cout << a;
            a++;
        }
        for (int j = 0; j < 2 * (n - i) - 2; j++)
        {
            cout << " ";
        }
        for (int j = i + 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
    return 0;
}