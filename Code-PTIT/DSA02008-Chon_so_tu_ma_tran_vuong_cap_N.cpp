#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, k, a[10][10];
vector<vector<int>> v;
vector<int> vi;

void Try(int i)
{
    if(i == n)
    {
        int mark[10] = {};
        int sum = 0;
        int idx = 0;
        for(int j : vi)
        {
            if(mark[j]) return;
            sum += a[idx++][j];
            mark[j] = 1;
        }
        if(sum == k) v.push_back(vi);
        return;
    }
    for(int j = 0; j < n; j++)
    {
        vi.push_back(j);
        Try(i + 1);
        vi.pop_back();
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(0);
    if(v.size())
    {
        cout << v.size() << endl;
        for(auto i : v)
        {
            for(int j : i) cout << j + 1 << " ";
            cout << endl;
        }
    }
    return 0;
}