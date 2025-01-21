#include <iostream>
using namespace std;

void printfibo(int n){
    if(n<1){
        cout<<"Invalid Number "<<endl;
        return;
    }
    int prev1 = 0, prev2 = 1;
    cout<<prev1<<" ";
    if(n == 1){
        return;
    }
    cout<<prev2<<" ";
    if(n == 2){
        return;
    }
    for(int i=3; i<=n; i++){
        int curr = prev1 + prev2;
        cout<<curr<<" ";
        prev1 = prev2;
        prev2 = curr;
    }

}


int main(){
    int n=1;
    printfibo(n);
    return 0;
}
