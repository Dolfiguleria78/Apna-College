// #include<iostream>
// using namespace std;
// int LinearSearch(int arr[],int size, int target){

//     for(int i=0;i<size;i++){
//         if(arr[i]== target){
//             return i;
//         }
//     }
//         return -1;
           
//           }    

// int main(){
//     int arr[]={ 4,2,7,8,1,2,5};
//     int size=7;
//     int target=8;
// cout<<LinearSearch(arr,size,target)<<endl;
// return 0;

// } 
//output=3
//time cpmplexity o(n)

// REVERSE THE ARRAY 
//for reverse the array we use 2 pointer approach -->swapping

#include<iostream>
 using namespace std;
 void reverseArray(int arr[],int size){
    int start=0; 
    int end =size-1;
    while(start<end){
        swap( arr[start],arr[end]);    // swap elements 
        start ++;
        end--;
    }
}
int main(){
    int arr[]= {1,2,3,4};
    int size =4;

    reverseArray(arr,size);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}
