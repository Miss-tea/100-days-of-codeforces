#include <bits/stdc++.h>
using namespace std;


int main() {
int n ;
cin >> n ;
int arr[n];
for(int i = 0 ; i< n ; i++)
{
    cin >> arr[i];
}
int c = 1;

for(int i = 0 ; i< n-1 ; i++)
{
    if((arr[i] ==10 && arr[i+1]==10) || (arr[i]==01 && arr[i+1]==01))
    {
        continue;
    } 
    else c++;
}
cout <<c;
}