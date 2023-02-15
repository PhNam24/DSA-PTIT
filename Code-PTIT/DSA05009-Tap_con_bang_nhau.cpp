#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n, sum, res = 0, a[105], mark[105];

void Try(int i, int tmp = 0)
{
    if(res) return;
    if(tmp == sum / 2)
    {
        res = 1;
        return;
    }
    if(tmp > sum / 2) return;
    for(int j = i; j <= n; j++)
    {
        Try(j + 1, tmp + a[j]);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        sum = 0, res = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % 2 != 0) cout << "NO";
        else
        {
            Try(1);
            if(res) cout << "YES";
            else cout << "NO";
        }
        cout << endl;
    }
    return 0;
}