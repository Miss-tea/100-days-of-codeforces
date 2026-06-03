#include <bits/stdc++.h>
using namespace std;


int main() {
   int t ;
   cin >> t;
   while(t--){
  int n ;
  cin >> n ;
  string s ;
  cin >> s;
  if(n <3 )
  {
   int cnt = 0;
   for(int i = 0 ; i< 2 ; i++)
   {
          if(s[i] =='.') cnt++;
   }
   cout << cnt<< endl;
  }
  else{
    int  cnt = 0;
  for(int i = 0  ; i <=n-3 ; i++)
  {      
           if(s[i] == '.' &&s[i+1] == '.'&&s[i+2] == '.' )
           {
            cnt++;}
   }  
           
           if(cnt != 0) cout << 2<<endl;
           else{
      cnt = 0;
  for(int i = 0  ; i <n ; i++)
  {      
           if(s[i] == '.' )
           {
            cnt++;
         }
   }
   cout << cnt << endl;
       
  }
}
}

}
