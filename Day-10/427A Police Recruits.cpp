#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n ;
     cin >> n ;
     int cnt = 0 ;
     
     int x = 0 ;
     for(int i = 0 ; i < n ; i++)
     {
        int a ;cin >> a;
       if(a > 0) cnt = cnt +a ;
       else if(a == -1 &&  cnt >0)
       {
        cnt--;
       }
       else if(a == -1 && cnt ==0)
       {
          x++;
       }


     }
     cout << x ;
    
         }
