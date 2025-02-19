#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k, sum = 0;
    for (int i = 0; i < arr; i++) {
        boolean isGood = true;
        if (i-k >= 0 && arr[i] <= arr[i-k] ){
            isGood = false;
        }
        if (i+k < arr.length && arr[i] <= arr[i+k]){
            isGood = false;
        }

        if (isGood){
            sum += arr[i];
        }
    }

    return 0;
}