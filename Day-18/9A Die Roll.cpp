#include <iostream>
#include <cmath>
using namespace std;
void solve(){

    int a , b ; cin >> a >> b ;
    if(max(a,b) == 1) cout << "1/1";
    else if(max(a,b) == 2) cout << "5/6";
    else if(max(a,b) == 3) cout << "2/3";
    else if(max(a,b) == 4) cout << "1/2";
    else if(max(a,b) == 5) cout << "1/3";
    else if(max(a,b) == 6) cout << "1/6";


    

}
int main() {
    // int t ; cin >> t ;
    // while(t--){
    solve();
//     cout << endl;
// }
}