#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n ;
 cin >>n ;
 vector<int> x;
 vector<int>y;
 vector<int> z;
 for(int i = 0 ; i <n ; i++)
 {
    int a, b , c;
    cin >>a >> b >>c ;
    x.push_back(a);
    y.push_back(b);
    z.push_back(c);
 }
 int sx = 0 , sy = 0 , sz =0;
 for(int i = 0 ; i< n ; i++) sx += x[i];
 for(int i = 0 ; i< n ; i++) sy += y[i];
 for(int i = 0 ; i< n ; i++) sz += z[i];

if(sx == 0 && sy == 0 && sz == 0) cout << "YES\n";
else cout << "NO\n";
}
