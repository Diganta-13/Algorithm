#include <iostream>
using namespace std;

int linearSearch(int data[], int n, int item) {
    data[n] = item;
    int loc = 0;


    while (data[loc] != item) {
        loc++;
    }

    if (loc == n) {
        return -1;
    }
    else {
        return loc;
    }
}

int main() {
    int n, item;

    cout << "Enter number of elements: ";
    cin >> n;

    int data[n + 1];

    cout << "Enter the elements: ";
    for (int i = 0; i<n; i++) {
        cin >> data[i];
    }

    cout << "Enter the item : ";
    cin >> item;

    int result = linearSearch(data, n, item);

    if (result == -1) {
        cout << "Item not found." << endl;
    }
    else {
        cout << "Item found at: " << result+1 << endl;
    }

    return 0;
}
