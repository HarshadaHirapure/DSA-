// greatest next element
#include <bits/stdc++.h>
using namespace std;
vector<int> greater_elem(vector<int> v1)
{
    vector<int> nge;
    stack<int> st;
    for (int i = 0; i < v1.size(); ++i)
    {
        while (!st.empty() && v1[i] > v1[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
        return nge;
    }
    while (!st.empty())
    {
        nge[st.top()] = -1;
    }
    return nge;
}
int main()
{
    int n;
    vector<int> v;

    cout << "Enter the size ";
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    return 0;
}