#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[20]="programming";
    char s2[10]="gram";

    cout<<strstr(s1, s2)<<endl;
    return 0;
}