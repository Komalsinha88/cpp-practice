#include<iostream>
using namespace std;

int removeEle(int arr[], int val){
    int count = 0;
    for(int i=0; i<8; i++){
        if(arr[i] != val){
          count++;  
        }
    }
    return count;
}

int main(){
    int val = 4;
    int arr[8] = {1,4,1,2,3,9,2,4};
    int ans = removeEle(arr, val);
    cout<<ans<<endl;
    return 0;
}