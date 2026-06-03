#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
 
    while (t--) {
        int n, a;
   
        cin >> n >> a;
 
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int  x ;
            cin >>x;
            v.push_back(x);}
        if(a >=2) cout <<"YES" <<endl;
        else{
            if(is_sorted(v.begin() , v.end())){
                cout << "YES" <<endl;
            }
            else{
                cout <<"NO" <<endl;
            }
 
        } 
         }
}