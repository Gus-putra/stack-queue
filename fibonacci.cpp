#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;

    cout << "Masukkan jumlah deret Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    for(int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}