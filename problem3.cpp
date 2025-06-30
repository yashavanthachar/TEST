#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    if (n >= 1) {
        cout << "1";
    }
    if (n >= 2) {
        cout << ", 1";
    }

    int count = 2;
    int odd = 3;

    while (count < n) {
        cout << ", " << odd;
        odd = odd + 2;
        count++;
    }

    cout << endl;
    return 0;
}
