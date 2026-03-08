// if we want to do work again and again so we use function
// without calling a function , it doesn't work
// to call a function we use /invoke
//printhello(); // printhello is the name of the function 
//void means it does n't return anything  


//PARAMETER
// returnType fullName(type 1, type 2); // it shows the type of every parameter

//  #include <iostream>
//  using namespace std;
//  int sum( int a , int b) {    

//  int s = a+b;
//  return s;
//  }

//  int main() {    // how to call a fxn
//      cout<< sum<<(10,5)<< endl;    // fxn will calculate the sum and print the value
//     return 0;

 //}
//  output : 15 


# include <iostream>
 using namespace std;
 double sum( double a , double b) {   // if we want in decimal

double sum = a+b;
return sum;
}
int main() {
cout<< sum (10.3 , 5.9)<< endl;
    return 0;
 
}
