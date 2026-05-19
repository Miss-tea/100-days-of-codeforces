#include <bits/stdc++.h>
using namespace std;


int main() {
int n , a ;
cin >>n>>a;
string s ;
cin>>s;

while(a){
for(int i = 0 ; i < s.size()-1 ;)
{
    if(s[i] =='B' && s[i+1]=='G')
    {
        
     swap(s[i],s[i+1]);
     i = i+2;
     if(i > s.size()-1)break;

    }
    else 
    {
        i++;

       }
}
a--; 
}

cout << s;
}