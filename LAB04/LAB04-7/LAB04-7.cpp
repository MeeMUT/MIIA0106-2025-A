#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 0)
        return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " is a prime number" << endl;
    }
    else
    {
        cout << num << " is not a prime number" << endl;
    }

    return 0;
}