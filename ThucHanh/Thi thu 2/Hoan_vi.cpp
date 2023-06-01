#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, m;
int a[15], mark[15];
vector<vector<int>> v;

void in()
{
    vector<int> tmp;
    for(int i = 1; i <= n; i++)
    {
        tmp.push_back(a[i]);
    }
    v.push_back(tmp);
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!mark[j])
        {
            mark[j] = 1;
            a[i] = j;
            if(i == n) in();
            else Try(i + 1);
            mark[j] = 0;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n >> m;
    Try(1);
    for(int i = 0; i < v.size(); i++)
    {
        if((i + 1) % m == 0)
        {
            for(auto j : v[i]) cout << j << " ";
            cout << endl;
        }
    }
    return 0;
}