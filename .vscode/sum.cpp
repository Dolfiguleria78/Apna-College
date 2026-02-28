#include <iostream>
using namespace std;
int main(){
    int a , b;
    cout <<"enter a: ";
    cin >>a;         // used to take input from keyboard
    cout <<"enter b: ";
    cin >>b;       
    int sum = a+b;          //  <<-- insertion operator , >>--extraction operator
    cout <<"sum = "<< sum << endl;
    return  0;
}