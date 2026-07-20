#include <bits/stdc++.h>
using namespace std;

int main()
{
int n , k;
cin >> n >> k;
int sum = n;
while(n>=k)
{
   sum += n/k;
   int x = n%k;

   n = n/k + x;
   
}
cout << sum ;
}
