//insertion sort 
#include<bits/stdc++.h>
using namespace std;
void print_array(int a[] , int n )
{
    for(int i = 0 ; i <n ; i++)
    {
        cout<<"  "<<a[i];
    }
}

void insertion(int a[] , int n)
{
    for(int i = 1 ; i < n  ; i++)
    {
        for(int j = i ; j > 0  ; j--)
        {
            if(a[j]< a[j-1])
            {
                swap(a[j],a[j-1]);
            }
        }
    }

}
int main()
{
    int n ;
    cout<<"Enter the size of the array ";
    cin>>n;
    int a [n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    insertion(a , n);
    print_array(a, n);

}