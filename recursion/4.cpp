//palindrome

#include<bits/stdc++.h>
using namespace std ;
void palindrome(string s , int i , int n  , bool res)
{
    if(i >= (s.length() / 2 ))
    {
        cout<<res;
        return ;
    }
    else
    {
        if(s[i] != s [n] )
        {
            res = false;
            cout<<res;
            return ;
        }
        palindrome(s , i+1 , n-1 , res);
    }


}
int main()
{
    string s;
    cout<<"Enter the string " ; 
    cin>>s;
    bool res =  true ; 
    int i = 0 ;
    int n = s.length() - 1 ;
    
    palindrome(s , i , n , res);
    

}