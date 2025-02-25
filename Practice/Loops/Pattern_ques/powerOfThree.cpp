#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number " << endl;
    cin >> n;

    if (n <= 0) {
        cout << "false" << endl;
        return 0;
    }

    while (n > 1) {
        if (n % 3 != 0) {
            cout << "false" << endl;
            return 0;
        }
        n /= 3;
    }

    cout << "true" << endl;  
    return 0;
}
