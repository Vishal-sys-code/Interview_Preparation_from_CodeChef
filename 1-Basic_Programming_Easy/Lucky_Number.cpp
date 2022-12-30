#include <iostream>
using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Loop through each test case
    for (int i = 0; i < t; i++) {
        // Read the value of N
        long long n;
        cin >> n;

        // Initialize the number of times N can be divided by 2
        int count = 0;

        // Divide N by 2 until it is no longer divisible by 2
        while (n % 2 == 0) {
            count++;
            n /= 2;
        }

        // Print 1 if N can be divided by 2 an even number of times, 0 otherwise
        cout << (count % 2 == 0 ? 1 : 0) << endl;
    }

    return 0;
}
