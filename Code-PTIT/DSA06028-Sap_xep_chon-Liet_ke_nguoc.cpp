#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n;
vector<vector<int>> v;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    v.clear();
    cin >> n;
    vector<int> a(n);
    nhap(a);
    int d = 1;
    for(int i = 0; i < n - 1; i++)
    {
        int min = a[i], idx = i;
        for(int j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                idx = j;
            }
        }
        if (a[i] > a[idx])
        {
            swap(a[i], a[idx]);
        }
        v.push_back(a);
    }
    for(int i = v.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << i + 1 << ": ";
        for(int j : v[i]) cout << j << " ";
        cout << endl;
    }
    return 0;
}