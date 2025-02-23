//fibonacci series

#include<bits/stdc++.h>
using namespace std ;
void printarr(int a[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<" " <<a[i];
    }
}
void fibo(int a[] , int i , int j , int n)
{
    if(i > n )
    {
        printarr(a , n);
        return;
    }
    else
    {
        a[j+1] = a[i] + a[j];
        fibo(a , i+1 , j+1 , n);
    }
}
int main()
{
    int n ;
    cout<<"Enter the size of series ";
    cin>>n;
    int a[n];
    a[0] = 0;
    a[1] = 1;
    int i = 0;
    int j = 1 ;
    fibo(a, i , j , n);
}