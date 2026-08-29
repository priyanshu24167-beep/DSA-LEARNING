#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long binForm = n;

    // Handle negative exponent
    if (binForm < 0) {
        x = 1 / x;
        binForm = -binForm;
    }

    double ans = 1.0;

    while (binForm > 0) {
        if (binForm % 2 == 1) {
            ans *= x;
        }

        x *= x;
        binForm /= 2;
    }

    return ans;
}

int main() {
    double x;
    int n;

    cin >> x >> n;

    cout << myPow(x, n);

    return 0;
}