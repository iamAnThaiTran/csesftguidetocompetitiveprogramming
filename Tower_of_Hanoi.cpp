#include<bits/stdc++.h>
using namespace std ;
int ans = 0 ;
vector<int> a1, b1 ;
void xu_ly(int n, int a, int b, int c)
{
    if(n == 1)
    {
        a1.push_back(a);
        b1.push_back(c) ;
        ans ++ ;
    }
    else
    {
        xu_ly(n-1, a, c, b) ;
        a1.push_back(a);
        b1.push_back(c) ;
        ans++ ;
        xu_ly(n-1, b,  a,  c) ;
    }
}

int main()
{
    int n ;
    cin >> n ;
    xu_ly(n, 1, 2, 3) ;
    cout << ans << endl  ;
    int len = a1.size() ;
    for(int i = 0 ; i < len ; i ++)
        cout << a1[i] << " " << b1[i] << endl ;
}
