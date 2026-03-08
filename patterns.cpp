#include <iostream>
using namespace std;

// int main() {}
    // int n = 5;

    // for (int i = 0; i < n; i++) {
    //     char ch = 'A' + i;   // change letter every row

    //     for (int j = 0; j < i + 1; j++) {
    //         cout << ch;      // print character, not number
    //     }

    //     cout << endl;
    // }

//     output:
// A
// BB
// CCC
// DDDD
// EEEEE

int main(){
int n = 4; 
for (int i = 0; i < n; i++) {    // print form 0 to 4 

    // Left stars
    for (int j = 0; j <= i; j++) { 
        cout << "*";
    }

    // Spaces
    for (int j = 0; j < 2*(n-i-1); j++) {
        cout << " ";
    }

    // Right stars
    for (int j = 0; j <= i; j++) {
        cout << "*";     
    }

    cout << endl;   
}

//bottom
   for (int i = n-1; i >= 0; i--) {
    for (int j = 0; j <=i; j++) {
        cout<<"*";}
        //spaces 
        for (int j =0; j <2*(n-i-1); j++){
            cout<<" ";

        }
        // star 
        for (int j =0;j<=i;j++){
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;
}
// output:
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *