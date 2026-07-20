#include <bits/stdc++.h>
using namespace std;
void solve(){

   string s ;
   cin >> s;int cnt0 = 0, cnt1=0;
   for(int i = 0 ; i < s.size() ; i++)
   {
      if(s[i] == '0')cnt0++;
      else cnt1++;
   }
    for(int i = 0 ; i < s.size() ; i++)
   {
      if(s[i] == '0')
      {
         if(cnt1>0){cnt1--;}
         else{
            cout << s.size()-i <<endl;
            return ;
         }
      }
      
      else if(s[i] == '1')
      {
         if(cnt0>0){cnt0--;}
         else{
            cout << s.size()-i <<endl;
            return;
            
         }
      }
      
   }
   cout << "0"<<endl;
}
int main()
{
int t ;
cin >> t ;
while(t--)
{
   
  solve();

}
}
