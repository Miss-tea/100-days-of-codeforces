#include <bits/stdc++.h>
using namespace std;

int main() {
  int t ;
  cin >> t;
  while(t--)
  {
    int sum = 0;
  
    for(int i = 0 ; i < 10 ; i ++)
    {
      for(int j= 0 ; j < 10 ; j++)
      {
        char c ;
        cin >> c;
    
        if(c == 'X'){
           
          if(i == 0 || i == 9) sum = sum+1;
          else if(j == 0 || j == 9) sum = sum +1;
          else if((i == 1 && (j >0 )&& j <9) || (i == 8 && (j >0 )&& j <9)) sum = sum+2;
          else if((j == 1 && (i >0 )&& i <9) || (j == 8 && (i >0 )&& i <9)) sum = sum +2;
          else if((i == 2 && (j >1 )&& j !=9) || (i == 7 && (j >1)&& j <8)) sum = sum+3;
          else if((j == 2 && (i >1 )&& i !=9) || (j == 7 && (i >1 )&& i <8)) sum = sum +3;
          else if((i == 3 && (j >2 )&& j !=9) || (i == 6 && (j >2 )&& j <7)) sum = sum+4;
          else if((j == 3 && (i >2 )&& i !=9) || (j == 6 && (i >2 )&& i <7)) sum = sum +4;
          else if((i == 4 && (j >3 )&& j !=9) || (i == 5 && (j>3  )&& j <6)) sum = sum+5;
          else if((j == 4 && (i >3 )&& i !=9) || (j == 5 && (i >3 )&& i <6)) sum = sum +5;
           
        } 
      }
    }
    cout << sum <<endl;

    }
 }