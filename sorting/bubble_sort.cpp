//bubble sort 

#include<bits/stdc++.h>
using namespace std;
void print_array(int a[] , int n )
{
    for(int i = 0 ; i <n ; i++)
    {
        cout<<"  "<<a[i];
    }
}

void bubble(int a[] , int n )
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n-1 ; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j] , a[j+1]);
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
    bubble(a , n);
    print_array(a, n);


}