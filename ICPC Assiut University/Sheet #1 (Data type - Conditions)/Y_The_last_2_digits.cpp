#include <iostream>
#include <iomanip> // For using setfill and setw

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    
    // Compute the product modulo 100
    long long product = (A % 100) * (B % 100) * (C % 100) * (D % 100) % 100;
    
    // Output the last two digits with leading zero if necessary
    cout << setfill('0') << setw(2) << product << endl;

    return 0;
}
