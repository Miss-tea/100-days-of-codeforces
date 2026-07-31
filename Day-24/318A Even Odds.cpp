#include <iostream>
#include <cmath>
using namespace std;
void solve(){

     long long n , k ;cin >> n >> k;
   if(n%2 == 0){
    if(k > n/2 )
    {
        if(n%2 ==0 ){long long a = k -n/2 ;
        cout << 2*a;}
        else {
            long long a = k-n/2 -1;

            cout << 2*a;
        }
    }
    else{
        cout << 2*k -1;
    }
}
else {
    if(k > n/2 +1 )
    {
        if(n%2 ==0 ){long long a = k -n/2 ;
        cout << 2*a;}
        else {
            long long a = k-n/2 -1;

            cout << 2*a;
        }
    }
    else{
        cout << 2*k -1;
    }
}

}
int main() {
    // int t ; cin >> t ;
    // while(t--){
    solve();
//     cout << endl;
// }
}