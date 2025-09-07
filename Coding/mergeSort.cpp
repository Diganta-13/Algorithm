#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int mid, int low, int ub) {
    int i = low, j = mid + 1, k = low;
    int B[100];

    while (i <= mid && j <= ub) {
        if (arr[i] < arr[j]) {
            B[k++] = arr[i++];
        }
        else {
            B[k++] = arr[j++];
        }
    }
    while (i <= mid) {
        B[k++] = arr[i++];
    }
    while (j <= ub) {
        B[k++] = arr[j++];
    }
    for (int i = low; i <= ub; i++) {
        arr[i] = B[i];
    }
}

void mergeSort(int arr[], int low, int ub) {
    if (low < ub) {
        int mid = (low + ub) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, mid, low, ub);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //cout << "Given array is: ";
    //printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    printArray(arr, n);

    return 0;
}
