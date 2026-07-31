#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n;
    vector<int> v(n);
    int s = 0;
    for(int i = 0 ; i< n ; i++){cin >> v[i];s = s+v[i];}
        sort(v.begin(),v.end());
    int sum = 0;
    int i = n-1;
    while(sum <= s/2)
    {
        sum = sum + v[i];
        i--;
    }

    cout << n-1-i;
}