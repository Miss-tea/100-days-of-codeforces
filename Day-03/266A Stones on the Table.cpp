#include <bits/stdc++.h>
using namespace std;


int main() {
  int a ;
  string s ;
  cin >> a;
  cin>>s;
  int c=0;
  for(int i = 0 ; i < s.size()-1 ; i++)
  {
    if(s[i]==s[i+1]) c++;
  }
  cout <<c;
 
}