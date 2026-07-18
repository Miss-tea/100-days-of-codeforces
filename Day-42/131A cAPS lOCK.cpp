#include <bits/stdc++.h>
using namespace std;

int main()
{
 string s ;
cin >> s;
int sm = 0;
if(s[0] >='a') sm=1;
int flg = 1;
for(int i = 1 ; i< s.size() ; i++)
{
  if(s[i] >='A' && s[i] <='Z')
    { continue;}
 else{
    sm = 0;flg = 0; break;
 }
}

if(sm == 0 && flg == 0) cout << s;
else if(sm== 0 && flg == 1){
    for(int i = 0 ; i< s.size() ; i++)
    {
        s[i] = s[i]-'A'+'a';
    }
    cout << s;
}
else{
    s[0] = s[0]-'a'+'A';
    for(int i = 1 ; i< s.size() ; i++)
    {
        s[i] = s[i]-'A'+'a';
    }
    cout << s;
}
}
