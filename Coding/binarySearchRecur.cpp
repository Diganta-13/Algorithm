#include <bits/stdc++.h>
using namespace std;

int binarySearch(int data[], int LB, int UB, int item) {
    if (LB > UB){
        return -1;
    }

    int mid = (LB + UB) / 2;

    if (data[mid] == item){
        return mid;
    }
    else if (item < data[mid]){
        return binarySearch(data, LB, mid - 1, item);
    }
    else{
        return binarySearch(data, mid + 1, UB, item);
    }
}

int main() {
    int n, item;

    cout << "Enter the number of elements: ";
    cin >> n;
    int data[n];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    cout << "Enter the item : ";
    cin >> item;

    int loc = binarySearch(data, 0, n - 1, item);

    if (loc != -1) {
        cout << "Element found at " << loc + 1 << "\n";
    }
    else {
        cout << "Element not found\n";
    }

    return 0;
}