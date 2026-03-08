// calculate the sum of no;s from 1 to N (N)= fix nai h , take it as a parameter
  
#include<iostream>
using namespace std;
int sumofN(int n ){    // we create a fxn named as sumofN and we take the integer value n.
    int sum =0;
    for (int i =1;i<=n;i++){
        sum = sum +i;
    }return sum;

    }
    int main (){
        cout<< sumofN(5)<<endl;
        return 0;
    }
