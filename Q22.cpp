#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum = 0;
    cin >> n;
    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    if (n > 0 && n % sum == 0)
        cout << "Harshad number";
    else
        cout << "Not a Harshad number";

    return 0;
}
