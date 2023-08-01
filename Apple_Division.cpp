#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n ; cin >> n ;
    long long a[n] , t = 0, ans = INT_MAX ;
    for(int i = 0 ; i < n ; i ++)
    {
        cin >> a[i] ;
        t += a[i] ;
    }

    for(int i = 0 ; i < 1 << n ; i++)
    {
        long long sum1 = 0 ;
        for(int j = 0 ; j < n ; j++)
        {
            if(i & 1 << j)
            {
                sum1 += a[j] ;
            }
        }
        ans = min(ans, abs(t - sum1 - sum1)) ;
    }
    cout << ans ;
}
