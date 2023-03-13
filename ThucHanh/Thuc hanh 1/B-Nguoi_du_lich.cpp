#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, ans = 1e9, a[20][20], mark[20];
vector<int> vi(20), tmp(20);

void Try(int i, int sum = 0, int cnt = 1)
{
    if(sum > ans) return;
    if(cnt == n)
    {
        if(ans > sum + a[i][1])
        {
            ans = sum + a[i][1];
            vi = tmp;
        }
        return;
    }
    for(int j = 2; j <= n; j++)
    {
        if(!mark[j])
        {
            mark[j] = 1;
            tmp[cnt] = j;
            Try(j, sum + a[i][j], cnt + 1);
            mark[j] = 0;
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
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    mark[1] = 1;
    Try(1);
    cout << "(1,";
    for(int i = 1; i < n; i++)
    {
        cout << vi[i] << ",";
    }
    cout << "1)";
    cout << endl << ans;
    return 0;
}