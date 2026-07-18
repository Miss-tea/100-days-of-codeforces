#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 int a ,b , c;
 cin >> a >> b >> c;
 int p = a*b*c;
 if(p < a+b+c) p = a+b+c;
 if(p<a* (b + c))p = a*(b+c);
 if(p<(a+ b) *c )p = (a+b) *c;
 cout << p;
}