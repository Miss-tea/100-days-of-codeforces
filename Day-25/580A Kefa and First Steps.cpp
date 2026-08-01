#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n ;cin >> n ;
    vector<long long> arr(n);
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
     if(n == 1){cout <<1 ;return ;}   
    long long maxi = INT_MIN ;
  long long cnt = 0;
    for(long long i = 0 ; i < n-1 ; i++)
    {
            
        if(arr[i] <= arr[i+1]){cnt++; }
        else cnt = 0;
        maxi = max(maxi,cnt);
    }   

    cout << maxi+1 ; 

}
int main() {
    // int t ; cin >> t ;
    // while(t--){
    solve();
//     cout << endl;
// }
}