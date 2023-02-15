#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

using namespace std;

int n, k, a[1000], mark[1000];
vector<string> v;

void in()
{
    string tmp;
    for(int i = 1; i <= k; i++)
    {
        tmp += to_string(a[mark[i]]) + " ";
    }
    v.push_back(tmp);
}

void Try(int i)
{
    for ( int j = mark[i - 1] + 1; j <= n - k + i; j++ )
    {
        mark[i] = j;
        if ( i == k ) in();
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1);
    sort(v.begin(), v.end());
    for(auto i : v) cout << i << endl;
    cout << endl;
    return 0;
}