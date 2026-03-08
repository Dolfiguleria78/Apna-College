#include<iostream>
 using namespace std;
 int main(){
    int nums[]={5,15,22,1,-15,24};    // for largest value=-infinity
    int size =6;
    int largest= nums[0];
    for (int i =0;i<size; i++){
        if (nums[i]> largest){
            largest =nums[i];

        }
    
    }
    cout<<"largest="<<largest<<endl;
    return 0;

    }
