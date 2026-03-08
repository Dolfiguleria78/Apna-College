#include<iostream>
using namespace std;
int factorialN(int n){
    int fact = 1; // initialize factorial variable with 1
    for ( int i =0 ; i<=n; i ++){
        fact = fact * i;
    } return fact;

    }
    int main (){
        int n =8, r =2;
        int fact_n=factorialN(n);
        return 0;
    }

    //output: 24