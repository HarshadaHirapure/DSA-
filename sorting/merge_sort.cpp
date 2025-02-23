//merge sort divide and conqur

#include<bits/stdc++.h>
using namespace std ;
void print_array(vector<int> a  , int n )
{
    for(int i = 0 ; i <n ; i++)
    {
        cout<<"  "<<a[i];
    }
}
void merge(vector<int> a , int low, int mid , int high)
{
    vector<int> temp;
    int left = low ; 
    int right = mid + 1 ;
    while(left <= mid && right <= high)
    {
        if(a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        temp.push_back(a[left]);
        left++;
    }

    while(right<=high)
    {
        temp.push_back(a[right]);
        right++;
    }

    for(int i = 1 ; i <=high ; i++)
    {
        a[i] = temp[i];
    }
}
void mergesort(vector<int> a, int low ,  int high)
{
    int mid  = (low+high) / 2;
    if (low >= high)
    {
        return;
    }
    mergesort(a, low, mid);
    mergesort(a , mid+1 , high);
    merge(a , low, mid , high);

}
int main()
{
    int n ;
    cout<<"Enter the size of the array ";
    cin>>n;
    vector<int> a ;
    for(int i = 1 ; i < n ; i++)
    {
       a.push_back(i);
    }
    int low = 0 ;
    int high  = n -1;
    mergesort(a, low , high);
    print_array(a, n);


}
