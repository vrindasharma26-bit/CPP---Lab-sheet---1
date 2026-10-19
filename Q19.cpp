#include <iostream>
using namespace std;

int main() {
    for (int n = 1; n <= 500; n++) {
        int temp = n, sum = 0;

        while (temp > 0) {
            int digit = temp % 10;
            int fact = 1;

            for (int i = 1; i <= digit; i++)
                fact *= i;

            sum += fact;
            temp /= 10;
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}
