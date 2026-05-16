#include <bits/stdc++.h>
using namespace std;


int main() {
  string a ;
  cin >> a;
  int count1 = 0;
  int count2 = 0;
  int count3 = 0;
  for(int i = 0 ; i< a.size() ; i = i+2)
  {
      if(a[i] == '1') count1++;
      else if(a[i] == '2') count2++;
      else if(a[i] == '3') count3++;

  }
 
  int arr[100] ={0};
  int j = 0 ;
  for( ; j<count1; j++)
    {arr[j] =1;}
  for( ; j<count2+count1; j++)
    {arr[j] =2;}
  for( ; j<count3+count2+count1; j++)
    {arr[j] =3;}
  for(int i = 0 ; i< count1+count2+count3 ; i++)
  {
   if(arr[i]!= 0)cout<< arr[i];
   if(i != count1+count2+count3-1) cout<<'+'; 

  }

 
}