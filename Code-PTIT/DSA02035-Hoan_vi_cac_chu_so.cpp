#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, k, ans = 1e9, a[15], mark[15];
string s[15];

void in()
{
    int Min = 1e9, Max = -1e9;
    string tmp[15];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            tmp[i][j] = s[i][a[j]];
        }
    }
    for(int i = 0; i < n; i++)
    {
        int tmp1 = stoi(tmp[i]);
        Min = min(Min, tmp1);
        Max = max(Max, tmp1);
    }
    ans = min(ans, Max - Min);
}

void Try(int i)
{
    for(int j = 0; j < k; j++)
    {
        if(!mark[j])
        {
            a[i] = j;
            mark[j] = 1;
            if(i == k - 1) in();
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
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    Try(0);
    cout << ans;
    return 0;
}