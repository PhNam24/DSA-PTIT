#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, v, Max = -1e9;
int np[105], a[105], b[105];
vector<pair<vector<int>, int>> V;

void in()
{
    int w = 0, z = 0;
    vector<int> tmp;
    for(int i = 1; i <= n; i++)
    {
        tmp.push_back(np[i]);
        w += a[i] * np[i];
        z += b[i] * np[i];
    }
    if(w <= v)
    {
        V.push_back({tmp, z});
        Max = max(Max, z);
    }
}

void Try(int i)
{
    for(int j = 0; j < 2; j++)
    {
        np[i] = j;
        if(i == n) in();
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n >> v;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(1);
    for(auto i : V)
    {
        if(i.second == Max)
        {
            cout << i.second << endl;
            for(auto j : i.first) cout << j << " ";
            break;
        }
    }
    return 0;
}