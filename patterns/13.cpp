#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "how many rows do you want to print ";
    cin >> n;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }

        cout << endl;
    }
    return 0;
}