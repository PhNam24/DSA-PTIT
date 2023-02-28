#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, k, a[20], mark[20];
vector<vector<int>> v;

void in()
{
    
     vector<int> tmp;
    for(int i = 1; i <= k; i++)
    {
        tmp.push_back(a[mark[i]]);
    }
    v.push_back(tmp);
}

void Try(int i)
{
    for(int j = mark[i - 1] + 1; j <= n - k + i; j++)
    {
        mark[i] = j;
        if(i == k)
        {
            in();
        }
        else Try(i + 1);
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
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + 1 + n);
        Try(1);
        sort(v.begin(), v.end());
        for(auto i : v)
        {
            for(int j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}