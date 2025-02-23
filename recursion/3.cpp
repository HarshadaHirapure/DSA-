//factorial of a number

#include<bits/stdc++.h>
using namespace std;
void fact(int i , int res)
{
    if(i == 0)
    {
        cout<<res;
        return ;
    }
    else{
        fact(i-1, res*i);
    }
}
int main()
{
    int i ;
    int res = 1 ;
    cout<<"Enter a number";
    cin>>i;
    fact(i , res);

}
