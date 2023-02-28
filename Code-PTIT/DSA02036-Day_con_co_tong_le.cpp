#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, a[20], mark[20];
vector<vector<int>> vs;

int check()
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += a[i] * mark[i];
    }
    if(sum % 2) return 1;
    return 0;
}

void in()
{
    if(check())
    {
        vector<int> tmp;
        for(int i = 1; i <= n; i++)
        {
            if(mark[i]) tmp.push_back(a[i]);
        }
        vs.push_back(tmp);
    }
}

void Try(int i)
{
    for(int j = 0; j < 2; j++)
    {
        mark[i] = j;
        if(i == n) 
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
        vs.clear();
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + 1 + n, greater<int>());
        Try(1);
        sort(vs.begin(), vs.end());
        for(auto i : vs)
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