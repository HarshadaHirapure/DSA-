//reverse an array 
#include<bits/stdc++.h>
using namespace std;
void printarr(int arr[], int n)
{
    int size_arr = sizeof(arr);
    for(int i = 0 ;i <= size_arr;i++)
    {
        cout<<arr[i];
    }

}
void rev(int arr[] , int i , int n)
{
    if(i > n )
    {
        printarr(arr, n);
        return ;
    }
    else
    {
        
       swap( arr[i] , arr[n]);
       rev(arr, i+1 , n-1);
    }
}
int main()
{
    int n ;
    cout<<"Enter the size of the array ";
    cin>>n ;
    int arr[n] ;
    n -=1;
    cout<<"Enter the numbers : ";
    for(int i = 0 ;i <= n ; i++)
    {
        cin>>arr[i];
    }
    int i = 0 ;
    rev(arr, i , n);
    

}