#include <bits/stdc++.h>
using namespace std;


int main() {
   
int n ;
cin >> n ;
string s ;
cin >> s;
int vis[26] = {0};
for(int i = 0 ; i< n  ; i++)
{
    if(s[i] <97) s[i]= s[i]+32;
    vis[s[i]-'a'] =1;

}

for(int i = 0 ; i< 26 ; i++)
{
    if(vis[i] ==0)
    {
     cout << "NO";
    
     return 0;
    }
    
}
cout << "YES";


}