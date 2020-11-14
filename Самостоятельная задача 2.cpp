#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool prime = true;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
        if (prime) {
            cout << "prime";
        }
        else {
            cout << "composite";
        }
        return 0;
    }
}