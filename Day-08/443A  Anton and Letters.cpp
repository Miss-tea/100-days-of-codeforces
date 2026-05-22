#include <bits/stdc++.h>
using namespace std;


int main() {
   
  vector<char>v;
  while(1)
  {
    char c;
    cin >> c;
    if(c=='}') break;
    else if(c=='{'|| c==',') continue;
    else 
    {
        
        v.push_back(c);
    }
  }
  set<char>s;
  for(int i = 0 ; i< v.size();i++)
  {
       s.insert(v[i]);
  }
  cout << s.size();
}