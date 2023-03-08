#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, ans = 1e9, visited[15];
string s[15], a[15];

int count(string a, string b)
{
    int cnt = 0;
    int d[260] = {};
    for(auto i : a) d[i]++;
    for(auto i : b) d[i]++;
    for(auto i : a) if(d[i] == 2) cnt++;
    return cnt;
}

void Try(int i, int cnt = 0)
{
    if(cnt >= ans) return;
    if(i > n)
    {
        ans = min(ans, cnt);
        return;
    }
    for(int j = 1; j <= n; j++)
    {
        if(!visited[j])
        {
            a[i] = s[j];
            visited[j] = 1;
            int tmp = count(a[i], a[i - 1]);
            Try(i + 1, cnt + tmp);
            visited[j] = 0;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    s[0] = "1";
    a[0] = "1";
    Try(1);
    cout << ans;
    return 0;
}