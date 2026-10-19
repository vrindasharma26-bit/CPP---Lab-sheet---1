#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int num = 30;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == num) {
            cout << "Number found";
            break;
        }
    }
    return 0;
}
