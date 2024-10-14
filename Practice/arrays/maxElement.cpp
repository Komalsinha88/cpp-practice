#include<iostream>
using namespace std;

int main(){
    int n, A[n], max;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    cout<<"Enter the elements of an array "<<endl;

    for(int i=0; i<n; i++){
        cin>>A[i];
    } 
    max=A[0];
    for(int i=1; i<n; i++ ){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"Maximum element of the array is "<<max<<endl;

    return 0;
}