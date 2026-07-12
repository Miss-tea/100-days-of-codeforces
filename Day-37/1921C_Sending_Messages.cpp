#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
    long long  n , f , a , b;
    cin >> n >> f >> a >>b;
   long long sum = 0;
   long long y = 0;
   for(int i = 0 ; i < n ;i++)
   {
    long long x; cin >> x;
    if((x-y)*a >=b){sum += b; y=x;}
    else {sum += (x-y)*a; y= x;}
   }
   if(sum <f) cout << "YES\n";
   else cout << "NO\n";
    
     
    }
}
