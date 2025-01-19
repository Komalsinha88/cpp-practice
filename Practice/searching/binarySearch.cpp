#include<iostream>
using namespace std;

int main(){
    int Arr[6] ={2,4,7,8,9,12};
    int n = 5;

    int start = 0;
    int end = 5;

    int result = -1;
    while(start<=end){
        int mid = (start + end)/2;
        if(n == Arr[mid]){
            result = mid;
            break;
        }
        
        if(n < Arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    if(result == -1){
        cout<<"Element not found "<<endl;
    }else{
        cout<<"Element found at "<<result<<endl;
    }
    return 0;

}