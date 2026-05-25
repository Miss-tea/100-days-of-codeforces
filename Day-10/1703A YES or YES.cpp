#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
   
  int x ;
  cin >> x;
  while(x--)
  {
    string  s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++)
    {
      if(s[i] <'a') s[i] = s[i] + 32;
 
    }
    if(s == "yes") cout <<"YES"<<endl;
    else cout << "NO"<<endl;
  }
 
 
 
}