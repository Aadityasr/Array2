#include <iostream>

using namespace std;

int countGreaterThanX(int arr[], int size, int x) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > x) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    int count = countGreaterThanX(arr, size, x);

    cout << "Number of elements strictly greater than " << x << ": " << count << endl;

    return 0;
}
