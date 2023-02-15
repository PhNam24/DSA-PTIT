#include <bits/stdc++.h>
#define test int t; cin >> t; while(t--)
#define ll long long
#define endl "\n"

using namespace std;

//Cách 1: 1,21s
/*
char c;
int n, k, a[1000000];
string s;
vector<string> v;
unordered_set<string> m;

void in()
{
    string tmp1, tmp2;
    for ( int i = 1; i <= k; i++ )
    {
        tmp1.push_back(s[a[i] - 1]);
        tmp2.push_back(s[a[i] - 1]);
    }
    sort(tmp2.begin(), tmp2.end());
    if (m.find(tmp2) == m.end()) 
    {
        v.push_back(tmp1);
        m.insert(tmp2);
    }
}

void Try(int i)
{
    for ( int j = 1; j <= n; j++ )
    {
        a[i] = j;
        if ( i == k ) in();
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(char i = 'A'; i <= 'Z'; i++) s.push_back(i);
    cin >> c >> k;
    n = c - 'A' + 1;
    Try(1);
    sort(v.begin(), v.end());
    for(auto i : v) cout << i << endl;
    return 0;
}
*/

//Cách 2: 0,00s
/* int k;
char n;

void Try(int i, string s = "", char c = 'A')
{
    if(i == k)
    {
        cout << s << endl;
        return;
    }
    for(char j = c; j <= n; ++j) Try(i + 1, s + j, j);
}

int main()
{
    cin >> n >> k;
    Try(0);
    return 0;
} */