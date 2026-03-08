// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5]={10,20,30,40,50};
//    cout<<marks[0]<<endl;   // if i want tpo access the data or to change the data so we called index 
//     //output=10
// return 0;

//loops on array
#include<iostream>
using namespace std;
int main(){
     int marks[5]={10,20,30,40,50};
     int size =5;
// loops 0 to size-1
for (int i=0; i<size;i++){
    cout<< marks[i]<<endl;
   
}
 return 0;
}