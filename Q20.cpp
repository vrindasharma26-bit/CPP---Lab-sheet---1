#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, rev = 0;
    cin >> n;
    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    cout << "Reverse = " << rev << endl;

    if (n == rev)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
