#include <iostream>
using namespace std;

int main() {
    for (int n = 1; n <= 500; n++) {
        int temp = n, digit, sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}
