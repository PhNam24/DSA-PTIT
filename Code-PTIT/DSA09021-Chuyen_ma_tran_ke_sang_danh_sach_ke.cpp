#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    vector<int> ke[n + 5];
    int a[n + 5][n + 5] = {};
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(a[i][j]) ke[i].push_back(j);
        }
    }
    for(auto i : ke)
    {
        for(auto j : i) cout << j << " ";
        cout << endl;
    }
    return 0;
}