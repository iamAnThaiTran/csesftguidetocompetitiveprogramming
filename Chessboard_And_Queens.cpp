#include<bits/stdc++.h>
using namespace std ;
void searchi(int x, long long &ans, bool a[][8], bool cheo1[], bool cheo2[], bool col[])
{
    if(x == 8)
    {
        ans ++ ;
    }
    for(int y = 0 ; y < 8 ; y ++)
    {
        if(col[y] == false || cheo1[x+y] == false || cheo2[x - y + 8 - 1] == false || a[x][y] == false)
        continue ;
        col[y] = false ; cheo1[x+y] = false ; cheo2[x - y + 8 - 1] = false ;
        searchi(x + 1, ans, a,cheo1,cheo2,col) ;
        col[y] = cheo1[x + y] = cheo2[x - y + 8 - 1] = true ;

    }
}
int main ()
{
    char c ; bool a[8][8] , cheo1[15], cheo2[15] , col[8] ;
    long long ans = 0 ;
    fill(cheo1, cheo1 + 15, true) ;
    fill(cheo2, cheo2 + 15, true) ;
    fill(col, col + 8, true) ;
    for(int i = 0 ; i < 8 ; i ++ )
    {
        for(int j = 0 ; j < 8 ; j ++)
        {
            cin >> c ;
            if(c == '*') a[i][j] = false ;
            else a[i][j] = true ;
        }
    }
    searchi(0, ans, a, cheo1, cheo2, col) ;
    cout << ans ;
}
