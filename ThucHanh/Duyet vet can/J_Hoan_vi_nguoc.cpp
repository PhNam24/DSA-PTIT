#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

using namespace std;

int n, a[1000000], mark[1000000];
vector<vector<int>> v;

void in()
{
    vector<int> tmp;
    for ( int i = 1; i <= n; i++ )
    {
        tmp.push_back(a[i]);
    }
    v.push_back(tmp);
}

void Try(int i)
{
    for ( int j = n; j >= 1 ; j-- )
    {
        if ( !mark[j] )
        {
            mark[j] = 1;
            a[i] = j;
            if ( i == n ) in();
            Try(i + 1);
            mark[j] = 0;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    {
        v.clear();
        cin >> n;
        Try(1);
        for(int i = 0; i < v.size() - 1; i++)
        {
            for(int j : v[i]) cout << j;
            cout << ',';
        }
        for(int i:  v[v.size() - 1]) cout << i;
        cout << endl;
    }
    return 0;
}   