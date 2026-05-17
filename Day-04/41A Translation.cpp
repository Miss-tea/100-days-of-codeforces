#include <bits/stdc++.h>
using namespace std;


int main() {
  string s1 , s2;
  cin >> s1;
  cin>>s2;
  int flg = 1;
  if(s1.size() != s2.size()){ cout <<"NO"; return 0;}
  for(int i = 0 ; i< s1.size() ; i++)
  {
    if(s1[i] != s2[s1.size()-1-i])
    {
      cout << "NO";
     flg = 0;      
      break;
    }
  }
  if(flg) cout << "YES";

}