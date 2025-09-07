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
    for (int i = 0; i < n; i++)
    {
        int m_idx = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] < v[m_idx])
                m_idx = j;
        swap(v[i], v[m_idx]);
    }
    for (int x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}