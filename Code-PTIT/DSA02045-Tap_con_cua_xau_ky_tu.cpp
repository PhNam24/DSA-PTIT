#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, mark[20];
string s;
vector<string> vs;

void in()
{
    string tmp;
    for(int i = 1; i <= n; i++)
    {
        if(mark[i]) tmp.push_back(s[i]);
    }
    vs.push_back(tmp);
}

void Try(int i)
{
    for(int j = 0; j < 2; j++)
    {
        mark[i] = j;
        if(i == n) in();
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
        vs.clear();
        cin >> n >> s;
        s = '.' + s;
        Try(1);
        sort(vs.begin(), vs.end());
        for(auto i : vs) cout << i << " ";
        cout << endl;
    }
    return 0;
}