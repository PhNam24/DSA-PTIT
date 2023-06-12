#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, s, t[35], check = 0;

void Try(int i, int money = 0, int cnt = 0)
{
    if(check) return;
    if(money > s) return;
    if(money == s)
    {
        check = 1;
        cout << cnt;
        return;
    }
    for(int j = i; j <= n; j++)
    {
        Try(j + 1, money + t[j], cnt + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n >> s;
    for(int i = 1; i <= n; i++) cin >> t[i];
    sort(t + 1, t + 1 + n, greater<int>());
    Try(1);
    if(!check) cout << -1;
    return 0;
}