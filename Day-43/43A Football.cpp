#include <bits/stdc++.h>
using namespace std;

int main()
{
int  n;
cin >> n ;
vector<string>str;
set<string>st;

for(int i = 0 ; i < n; i++)
{
   string s ;
   cin >> s ;
  str.push_back(s);
  st.insert(s);
}
string fe = *st.begin();
if(st.size() == 1)
{
   cout << fe;
   return 0 ;
}
int cnt1=0,cnt2=0;

for(int i=0 ; i < n ; i++)
{

   if(str[i] == fe)cnt1++;
   else cnt2++;
}
string se = *next(st.begin() ,1);
if(cnt1>cnt2)cout << fe;
else cout << se;
}
