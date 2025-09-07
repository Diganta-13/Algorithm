#include <bits/stdc++.h>
using namespace std;

int loc, pivot, start, END, lb, ub;
int partition(int a[], int n, int lb, int ub){
    pivot = a[lb];
    start = lb;
    END = ub;

    while (start < END){
        while (a[start] <= pivot && start < END){
    start++;
        }
        while (a[END] > pivot){
            END--;
        }
        if (start < END){
            swap(a[start], a[END]);
        }
    }

    a[lb] = a[END];
    a[END] = pivot;

    return END;
}

void quick_sort(int a[], int n, int lb, int ub){
    if (lb < ub){
        loc = partition(a, n, lb, ub);
        quick_sort(a, n, lb, loc - 1);
        quick_sort(a, n, loc + 1, ub);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    lb = 1;
    ub = n;
    //cout << "Before Sorting:\n";

    //for (int i = 1; i <= n; i++){
       // cout << a[i] << " ";
    //}

    //cout << "\n\n";
    quick_sort(a, n + 1, lb, ub);
    cout << "After Sorting:\n";

    for (int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    return 0;
}

