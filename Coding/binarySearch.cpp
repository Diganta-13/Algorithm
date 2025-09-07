#include <iostream>
using namespace std;

int binarySearch(int data[], int LB, int UB, int item) {
    int beg = LB,END = UB;
    int loc = -1;

    while (beg <= END) {
        int mid = (beg + END) / 2;

        if (data[mid] == item) {
            loc = mid;
            break;
        }
        else if (item < data[mid]) {
            END = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }

    return loc;
}

int main() {
    int n, item;

    cout << "Enter the number of elements: ";
    cin >> n;
    int data[n];

    cout << "Enter the elements:\n";
    for (int i = 0; i<n; i++) {
        cin >> data[i];
    }

    cout << "Enter the item : ";
    cin >> item;

    int loc = binarySearch(data, 0, n - 1, item);

    if (loc != -1) {
        cout << "Element found at  " << loc + 1 << "\n";
    }
    else {
        cout << "Element not found\n";
    }
    return 0;
}
