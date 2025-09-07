#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        int temp = v[i];
        int j =i-1;
        while(j>=0 && v[j]>temp)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j + 1] = temp;
    }
    for (int x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}