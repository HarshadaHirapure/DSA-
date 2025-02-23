#include <iostream>
using namespace std;
int main()
{
    int n;
    char letter = 'A';
    cout << "Enter how many rows you want";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << letter << " ";
        }
        letter++;
        cout << endl;
    }
    return 0;
}