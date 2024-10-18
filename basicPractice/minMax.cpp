#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the elements of an array "<<endl;

    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int max=A[0];
    for(int i=0; i<n; i++){
        if(A[i]>max)
            max=A[i];
    }
    cout<<"Maximum number is "<<max<<endl;

    int min=A[0];
    for(int i=0; i<n; i++){
        if(A[i]<min)
            min=A[i];
    }
    cout<<"Minimum number is "<<min<<endl;
return 0;
}
