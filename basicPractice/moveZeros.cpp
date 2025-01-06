#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;

    cout<<"Enter the elements of an array"<<endl;
    int i, j=0, arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++) {
            if(arr[i] != 0) {
                if(arr[j] == 0) {
                    swap(arr[i], arr[j]);
                }
                j++;
            }
        }
    cout<<"Array after moving zeros are: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}