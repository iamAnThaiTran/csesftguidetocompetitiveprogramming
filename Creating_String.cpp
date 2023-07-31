#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cin >> s ;
    sort(s.begin(), s.end()) ;
    int len = s.size() ;
    int i = len - 1 ;
    vector<string> a ;
    a.push_back(s) ;
    while(i > 0)
    {


        while(s[i] <= s[i-1] ) i-- ;
        if(i > 0){
        int j = len - 1 ;
        while(s[j] <= s[i-1]) j--;
        swap(s[i-1],s[j]) ;
        int x  = i , y = len - 1 ;
        while(x<=y)
        {
            swap(s[x],s[y]) ;
            x++ ;
            y-- ;
        }
        i = len - 1 ;
        //cout << i << endl ;
        a.push_back(s) ;
    }
    }
    int len_a = a.size() ;
    cout << len_a << endl ;
    for(int i = 0 ; i < len_a ; i++)
    {
        cout << a[i] << endl ;
    }
}
