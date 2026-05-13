#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";  // 11 12 22 25 64

    return 0;
}