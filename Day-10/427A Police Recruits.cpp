#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , k , l , c,d,p,nl,np;
    cin >>n>>k>>l>>c>>d>>p>>nl>>np;
    int f = min(k*l/nl , c*d);
    int q = min(f,np/p)    ;
    cout <<q/n;
         }
