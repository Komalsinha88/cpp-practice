#include<iostream>
using namespace std;

int main(){
    string str = "I love coding";
    int n = str.length();

    int space = 0, vowel = 0, consonant = 0;
    for(int i = 0; i<n; i++){
        if(str[i] == ' '){
            space++;
        }else if(str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'||str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U'){
            vowel++;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            consonant++;
        }
    }
    cout<<"Space = "<<space<<endl;
    cout<<"Vowel = "<<vowel<<endl;
    cout<<"Consonant = "<<consonant<<endl;
    return 0;

}