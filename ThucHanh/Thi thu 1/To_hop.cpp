#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, k;
string s;
set<string> ans;
int a[100000];

void in()
{
    string tmp;
    for(int i = 1; i <= k; i++)
    {
        tmp.push_back(s[a[i] - 1]);
    }
    ans.insert(tmp);
}

void Try(int i)
{
    for(int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if(i == k) in();
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        ans.clear();
        cin >> s >> k;
        n = s.size();
        Try(1);
        for(auto i : ans) cout << i << endl;
    }
    return 0;
}