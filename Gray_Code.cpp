#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    vector<string> a ;
    a.push_back("0") ;
    a.push_back("1") ;
    for(int i = 2 ; i <= n ; i ++)
    {
        int len_a = a.size() ;
        // reverse
        for(int i = len_a - 1; i >=0 ; i --)
        {
            a.push_back(a[i]) ;
        }
        for(int i = 0 ; i < len_a ; i ++)
        {
            a[i] = "0" + a[i] ;
            a[i + len_a] = "1" + a[i + len_a] ;
        }

    }
    int len = a.size() ;
    for(int i = 0 ; i < len ; i++)
    {
        cout << a[i] << endl ;
    }
}
