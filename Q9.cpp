#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    switch (n) {
        case 1: cout << "One"; break;
        case 2: cout << "Two"; break;
        case 3: cout << "Three"; break;
        default: cout << "No matching case";
    }
    return 0;
}
