#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n ,k;
 cin >> n >>k;
 long long cnt = 0;
 vector<int> v;
 int curr = 1;
 int next = 0;
 for(int i = 0; i < k ; i++)
 {
     int a ;
     cin >> a;
     v.push_back(a);
 }
 long long dist = 0;
 for(int i = 0 ; i< k ; i++)
 {
    next = v[i];
    if(curr <= next) dist += next-curr;
    else dist += (n - curr)+next;
     curr = v[i];

    
 }
 cout << dist;
}
