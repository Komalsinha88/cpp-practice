#include<iostream>
using namespace std;

int nthFibo(int num){
    if(num<1){
        return -1;
    }
    int prev1=0, prev2=1;
    if(num == 1){
        return prev1;
    }
    if(num == 2){
        return prev2;
    }

    int curr;
    for(int i=3; i<=num; i++){
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return curr;
}

int main(){
    int n = 9;
    int ans = nthFibo(n);
    cout<<ans<<endl;
    return 0;
}