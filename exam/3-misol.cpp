#include <iostream>

using namespace std;

int main() {
    // missingNum([1, 2, 3, 4, 6, 7, 8, 9, 10]) ➞ 5
    // missingNum([7, 2, 3, 6, 5, 9, 1, 4, 8]) ➞ 10
    // missingNum([10, 5, 1, 2, 4, 6, 8, 3, 9]) ➞ 7

    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int length = sizeof(arr) / sizeof(arr[0]);
    int total = (length + 1) * (length + 2) / 2;
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    cout << total - sum;

    return 0;
}
