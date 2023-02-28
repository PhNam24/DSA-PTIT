#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, k, a[25];
vector<vector<int>> v;

int snt(int n)
{
    if(n < 2) return 0;
    if(n < 4) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    int m = sqrt(n);
    for(int i = 5; i <= m; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

void in()
{
    vector<int> tmp;
    for(int i = 1; i <= k; i++)
    {
        tmp.push_back(a[i]);
    }
    v.push_back(tmp);
}

void Try(int i)
{
    for(int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
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
    cin >> n >> k;
    Try(1);
    for(int i = 0; i < v.size(); i++)
    {
        if(snt(i + 1))
        {
            cout << i + 1 << ": ";
            for(auto j : v[i]) cout << j << " "; 
            cout << endl;
        }
    }
    return 0;
}