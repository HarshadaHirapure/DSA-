//selection sort 
#include<bits/stdc++.h>
using namespace std ;
void print_array(int a[] , int n )
{
    for(int i = 0 ; i <n ; i++)
    {
        cout<<"  "<<a[i];
    }
}
void selection_sort(int a[] , int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        int mini = i ; 
        for(int j = i+1 ; j<n;j++)
        {
            if(a[j] < a[mini])
            {
                mini = j ;
            }
        }
    int temp = a[mini];
    a[mini] = a[i];
    a[i]= temp;
        
    }

}
int main()
{
    int n ;
    cout<<"How many elements you want to insert : ";
    cin>>n;
    int a[n] ;
    for(int i = 0 ; i <n ; i++)
    {
        cin>>a[i];
    }
    selection_sort(a , n);
    print_array(a , n);

}