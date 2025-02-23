//sum of digits

#include<bits/stdc++.h>
using namespace std ; 
void sum(int i  , int res )
{
    if(i < 1)
    {
        cout<<res;
        return ;
    }
    else
    {
      sum(i -1 , res+i);
    }

}
int main()
{
    int i ;
    cout<<"Enter the number";
    cin>>i ; 
    int  res= 0 ;
    sum( i ,  res );
}