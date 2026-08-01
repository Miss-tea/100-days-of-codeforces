#include <bits/stdc++.h>
using namespace std;
void solve(){
   string s ;
   cin >> s ;
   vector<char>str;
   int cnt = 0;
   for(int i = 0 ; i< s.size() ; )
   {
    if(s[i] == 'W' && s[i+1] == 'U' && s[i+2]=='B' ){ 
        if(cnt== 0 && str.size() !=0) str.push_back(' ');
    cnt++;
    i = i+3;
    
     
    } 
    else {
        cnt = 0;
        str.push_back(s[i]);
        i++;
    }
   }
   for(int i = 0 ; i < str.size() ; i++) cout << str[i];
}
int main() {
    // int t ; cin >> t ;
    // while(t--){
    solve();
//     cout << endl;
// }
}