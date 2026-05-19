#include <bits/stdc++.h>
using namespace std;


int main() {
int n , a ;
cin >>n>>a;
string s ;
cin>>s;
int boy = 0;
int girl = 0;
for(int i = 0 ; i <= a ; i++)
{
    if(s[i] =='B') boy++;
    else girl++;
}
for(int i = a-1 ; i>=0 ; i--)
{
    if(boy>0) {s[i] = 'B';boy--;}
    else {
        s[i] == 'G';
}

}
cout << s;
}