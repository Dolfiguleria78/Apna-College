// Binary no.sysytem: how many digits that can be used to calculate 
// in hash we using 0-9 // 10 digits (Base10) 
// we represents the no. system of computer in the form of  0 and 1 (Base2) to show the data and instructions  

// decimal to binary 
#include<iostream>
using namespace std;
int decTobinary( int decNum){
    int ans =0;
    int pow = 1;
    while( decNum>0){
        int rem = decNum%2;   // for remainder
        decNum/=2;           // for quotient / updation

        ans +=(rem*pow);
        pow = pow*10;

    }
    return ans;  // in the form of binary
} 
int main(){
    int decNum = 7;
    for (int i =1; i<=10;i++){
        cout<<decTobinary(i)<<endl;
    

    }
    return 0;
    }
    // cout<<decTobinary(decNum)<<endl;
  
  

// output :111