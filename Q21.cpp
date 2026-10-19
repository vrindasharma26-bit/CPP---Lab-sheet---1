#include <iostream>
using namespace std;

int main() {
    int n, digit, evenSum = 0, oddSum = 0;
    cin >> n;

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;

        n /= 10;
    }

    cout << "Even digit sum = " << evenSum << endl;
    cout << "Odd digit sum = " << oddSum;

    return 0;
}
