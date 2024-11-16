#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 1999) {
            cout << "Correct";
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
