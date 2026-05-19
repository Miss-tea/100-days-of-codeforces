#include <bits/stdc++.h>
using namespace std;


int main() {
 int n ;
 cin>>n;
int num = n+1 ;
 while(1)
 {
 
  string s = to_string(num);
  int vis[10] ={0};
  int flg = 1;
  for(int i = 0 ; i< s.size() ;i++)
  {
   vis[s[i]-'0'] = vis[s[i]-'0'] +1;
  }
  for(int i = 0 ; i<10 ; i++)
  {
    if(vis[i] == 1 || vis[i] == 0)
    {
      continue;
    }
    else{
      flg = 0;
    }
  }
  if(flg == 1){cout << num; break;}
  else num++;

 }
}