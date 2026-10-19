#include <iostream>
using namespace std;

int main() {
    int a, b, lcm;
    cin >> a >> b;

    lcm = (a > b) ? a : b;

    while (true) {
        if (lcm % a == 0 && lcm % b == 0)
            break;
        lcm++;
    }

    cout << "LCM = " << lcm;
    return 0;
}
