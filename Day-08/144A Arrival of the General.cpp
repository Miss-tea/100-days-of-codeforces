#include <bits/stdc++.h>
using namespace std;


int main() {
   
int  n ;
cin>> n;
vector<int> v;
for(int i = 0 ; i< n ; i++)
{
    int a ;
    cin >> a;
    v.push_back(a);
}
int p1;
int p2;
int maxi = 0 , mini= 101;
for(int i = 0 ; i<n ; i++)
{
    if(v[i] >maxi)
    {maxi = v[i];
      p1= i+1;
  }
}
for(int i = 0 ; i<n ; i++)
{
    if(v[i] <=mini)
    {mini = v[i];
     p2= i+1;}
}
if(p1>p2) cout <<n-p2+p1-1-1;
else cout <<n-p2+p1-1;
}