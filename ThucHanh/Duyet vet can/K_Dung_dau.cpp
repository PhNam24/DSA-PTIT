#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n, idx, a[100], mark[100];
string first, s[20];
vector<string> v, vs;

void in()
{
    string tmp = first + " ";
    for(int i = 1; i <= n - 1; i++)
    {
        tmp += v[a[i] - 1] + " ";
    }
    vs.push_back(tmp);
}

void Try(int i)
{
    for(int j = 1; j <= n - 1; j++)
    {
        if(!mark[j])
        {
            a[i] = j;
            mark[j] = 1;
            if(i == n - 1) in();
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
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> s[i];
    cin >> first;
    for(int i = 1; i <= n; i++)
    {
        if(s[i] != first) v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    Try(1);
    sort(vs.begin(), vs.end());
    for(auto i : vs) cout << i << endl;
    return 0;
}