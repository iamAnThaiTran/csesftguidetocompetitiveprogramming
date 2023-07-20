#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    long long a, b ;
    for(int i = 1; i <= n ; i++)
    {
        cin >> a >> b ;
        long long t = a + b ;
        if(t % 3 == 1 || t % 3 == 2)
        {
            cout << "NO" << endl ;

        }
        else
        {
            long long total = t / 3 ;
            if((a - total) >= 0 && (b - total) >= 0)
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }
        }
    }
}
