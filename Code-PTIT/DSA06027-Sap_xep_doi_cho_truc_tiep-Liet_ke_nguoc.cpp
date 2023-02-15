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
    test
    {
        v.clear();
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
            v.push_back(a);
        }
        for(int i = v.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for(int j : v[i]) cout << j << " ";
            cout << endl;
        }
    }
    return 0;
}