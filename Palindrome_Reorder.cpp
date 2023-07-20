#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cin >> s ;
    int a[26], cnt = 0, len = s.size() ;
    char the_mid = NULL ;
    fill(a,a + 26, 0) ;
    for(int i = 0 ; i < len ; i ++)
    {
        a[s[i]-'A'] ++ ;
    }
    for(int i = 0 ; i < 26 ; i ++)
    {
        if(a[i] % 2 ==1)
        {
            cnt++ ;
        }
    }
    if(cnt > 1)
    {
        cout << "NO SOLUTION" ;
    }
    else
    {
        string ans = "" ;
        for(int i = 0 ; i < 26 ; i ++)
        {
            char c = i + 'A' ;
            if(a[i] % 2 == 0)
            {
                for(int j = 1; j <= a[i]/2 ; j ++)
                {
                    ans += c ;
                }
            }
            else
            {
                the_mid = c;
                a[i] -- ;
                for(int j = 1; j <= a[i]/2 ; j ++)
                {
                    ans += c ;
                }
            }
        }
        if(cnt == 1)
        ans += the_mid ;
        for(int i = 25 ; i >=0 ; i --)
        {
            char c = i + 'A' ;
            for(int j = 1 ; j <= a[i] / 2 ; j++)
            {
                ans += c;
            }
        }
        cout << ans ;
    }

}
