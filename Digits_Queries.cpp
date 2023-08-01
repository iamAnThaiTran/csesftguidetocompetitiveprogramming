#include<bits/stdc++.h>
using namespace std ;
long long pow(int  x, int y)
{
    long long ans = 1 ;
    for(int  i = 0 ; i < y ; i ++)
        ans *= x ;
    return ans ;
}
void xu_ly(long long x)
{
    int i = 1;
    long long upper_b = 9 , lower_b = 1 , lower = 1, upper = 9 ;
    while(x > upper_b)
    {
        i ++ ;
        lower = upper + 1;
        upper = 10 * lower - 1 ;
        lower_b = upper_b + 1 ;
        if(i <= 17)
        upper_b = upper_b  + i * 9 * pow(10,i - 1);
       // cout << lower_b << " " << upper_b << endl ;
    }
    long long    ans_int = (x - lower_b)/i + lower ;
    string ans_string = to_string(ans_int) ;
    long long index = x - (i * (ans_int - lower) + lower_b) ;
    cout << ans_string[index] << endl ;
    //cout << ans_int << endl ;
    //cout << lower_b << " " << upper_b << endl ;
}
int main()
{
    int n ; long long a ;
    cin >> n ;
    for(long long i = 0 ; i < n ; i++)
    {
        cin >> a ;
         xu_ly(a);
    }
}
