#include <bits/stdc++.h>
using namespace std;


int main() {
  int a ;
  string s ;
  cin>>a ; 
  cin>> s;
  int as=0 , ds = 0;
  for(int  i = 0 ; i<s.size() ; i++)
  {
    if(s[i] == 'A') as++;
    else ds++;
  }
  if(as >ds) cout<<"Anton";
  else if(as==ds) cout << "Friendship";
  else cout << "Danik";
}