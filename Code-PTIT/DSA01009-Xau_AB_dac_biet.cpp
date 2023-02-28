#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, k, a[1000000];
char b[2] = {'B', 'A'};
vector<string> vs;

int check()
{
    int Max = -1e9;
    int cnt[n + 5] = {};
    if(a[1]) cnt[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        if(a[i]) cnt[i] = cnt[i - 1] + 1;
        else cnt[i] = 0;
        Max = max(Max, cnt[i]);
    }
    if(Max != k) return 0;
    int d = 0;
    for(int i = 1; i <= n; i++)
    {
        if(cnt[i] == Max) d++;
        if(d > 1) return 0;
    }
    return 1;
}
    
void in()
{
    string tmp;
    for ( int i = 1; i <= n; i++ )
    {
        tmp.push_back(b[a[i]]);
    }
    vs.push_back(tmp);
}

void Try(int i)
{
    for ( int j = 0; j < 2; j++ )
    {
        a[i] = j;
        if ( i == n )
        {
            if ( check() ) in();
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
    sort(vs.begin(), vs.end());
    cout << vs.size() << endl;
    for(auto i : vs) cout << i << endl;
    return 0;
}