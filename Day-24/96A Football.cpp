#include <iostream>
#include <cmath>
using namespace std;
void solve(){

     string s ; cin >> s;
     if(s.find("0000000") != string::npos  || s.find("1111111") != string::npos)
        cout << "YES";
       else cout << "NO" ;    

}
int main() {
    // int t ; cin >> t ;
    // while(t--){
    solve();
//     cout << endl;
// }
}