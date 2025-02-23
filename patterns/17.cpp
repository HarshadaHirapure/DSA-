// didnt complete
#include <iostream>
using namespace std;
int main()
{
    int n;
    char start;
    cout << "Enter the number of rows you want : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j < n - i - 1; j++)
        {

            cout << " ";
        }

        for (start = 'A'; start <= 'A' + i; start++)
        {
            cout << start << " ";
        }
        char ch = start - 1;
        for (char last = ch - 1; last >= 'A'; last--)
        {
            cout << last << " ";
        }

        cout << endl;
    }
    return 0;
}

// // for (int k = 1; k < n + 2 * i - 3; k++)
//  {