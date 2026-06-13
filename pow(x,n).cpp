#include <iostream>
using namespace std;

double myPow(double x, int n) {
    double ans = 1.0;
    long long bf = n;

    if (bf < 0) {
        x = 1 / x;
        bf = -bf;
    }

    while (bf > 0) {
        if (bf % 2 == 1) {
            ans *= x;
        }

        x *= x;
        bf /= 2;
    }

    return ans;
}

int main() {
    double x;
    int n;

    cout << "Enter x and n: ";
    cin >> x >> n;

    cout << myPow(x, n) << endl;

    return 0;
}