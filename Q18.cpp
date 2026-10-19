#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, fact, sum = 0;
    cin >> n;
    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        cout << "Strong number";
    else
        cout << "Not a strong number";

    return 0;
}
