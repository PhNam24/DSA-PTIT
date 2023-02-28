#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, k, s, cnt = 0, mark[25];

int check()
{
    int sum = 0;
    for(int i = 1; i <= k; i++)
    {
        sum += mark[i];
    }
    if(sum == s) return 1;
    return 0;
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
    while(1)
    {
        cnt = 0;
        cin >> n >> k >> s;
        if(n == k && k == s && s == 0) break;
        Try(1);
        cout << cnt;
        cout << endl;
    }
    return 0;
}