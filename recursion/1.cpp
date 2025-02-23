//displaying number by backtracking


#include<bits/stdc++.h>
using namespace std ;
// void display(int n)
// {
    
//     if(n < 1){
//         return ;
//     }
//     else
//     {
//         cout<<n;
//         n--;
//         display(n);
//     }
// }

void display_asec(int i , int n )
{
    if(i < 1)
    {
        return ;
    }
    else
    {
        display_asec(i-1 , n);
        cout<<i;
    }
}

void display_desc(int i , int n )
{
    if(i == n )
    {
        return ;
    }
    else
    {
        display_desc(i+1 , n);
        cout<<i;
    }
}

int main()
{
//    int cnt = 0 ;
   int n ;
   int i = 1;
   cout<<"Enter the integer ";
   cin>>n;
//    display_asec(n , n  );
   display_desc(i,n);

}