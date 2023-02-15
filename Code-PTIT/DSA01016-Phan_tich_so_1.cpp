#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, a[15];
set<vector<int>> s;
vector<string> vs;

void in(int n)
{
    vector<int> tmp;
    for(int i = 1; i <= n; i++)
    {
        tmp.push_back(a[i]);
    }
    sort(tmp.begin(), tmp.end(), greater<int>());
    if(s.find(tmp) == s.end()) 
    {
        s.insert(tmp);
        string ss;
        ss.push_back('(');
        for(int i = 0; i < tmp.size() - 1; i++)
        {
            ss += to_string(tmp[i]) + ' ';
        }
        ss += to_string(tmp[tmp.size() - 1]);
        ss += ") ";
        vs.push_back(ss);
    } 
}

void Try(int i, int s)
{
    for(int j = n; j >= 1; j--)
    {
        a[i] = j;
        if(j == s) in(i);
        else
        {
            if(j < s) Try(i + 1, s - j);
        }
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
        cin >> n;
        Try(1, n);
        for(auto i : vs) cout << i;
        cout << endl;
    }
    return 0;
}