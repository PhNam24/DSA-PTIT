#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, k, cnt = 0, a[105], mark[105];

int check()
{
    for(int i = 1; i < k; i++)
    {
        if(a[mark[i]] >= a[mark[i + 1]]) return 0;
    }
    cout << endl;
    return 1;
}

void Try(int i)
{
    for(int j = mark[i - 1] + 1; j <= n - k + i; j++)
    {
        mark[i] = j;
        if(i == k) 
        {
           if(check()) cnt++;
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
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(1);
    cout << cnt;
    return 0;
}