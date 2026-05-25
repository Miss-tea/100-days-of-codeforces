#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
   
  string a , b ,c ;
  cin >> a;
  cin >> b ;
  cin >> c;
  int vis[26]={0};
  int vis2[26]={0};
  for(int i = 0 ; i< a.size() ; i++)
  {
      vis[a[i]-'A']++;
  }
 for(int i = 0 ; i< b.size() ; i++)
  {
       vis[b[i]-'A']++;
  }
  for(int i = 0 ; i< c.size() ; i++)
  {
        vis2[c[i]-'A']++;
  }
  for(int i = 0 ; i< 26 ; i++)
  {
       if(vis[i] != vis2[i]) 
       {
        cout <<"NO";
        return 0;
       }
  }
  cout << "YES";
 
 
 
}