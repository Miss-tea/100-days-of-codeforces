#include <bits/stdc++.h>
using namespace std;

int main() {
  int  t;
  cin >>t;
  while(t--)
  {
  int n , k, m;
  cin >> n >>k>>m;
  if(n < k && k <m ) cout <<"STAIR\n";
  else if(n< k && k > m) cout << "PEAK\n";
  else cout <<"NONE\n";
}
  }
 