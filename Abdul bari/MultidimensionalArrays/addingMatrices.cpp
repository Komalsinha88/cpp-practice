#include<iostream>
using namespace std;

int main(){
    int A[3][3]={{2,3,4}, {4,5,6}, {2,1,3}};
    int B[3][3]={{5,6,7}, {7,8,9}, {3,6,9}};
    int C[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}