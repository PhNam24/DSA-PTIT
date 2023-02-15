#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n, a[35];
vector<string> v;

void in(int n)
{
    string tmp;
    for(int i = 1; i <= n/2; i++)
    {
        tmp += to_string(a[i]);
    }
    string tmp1 = tmp;
    reverse(tmp1.begin(), tmp1.end());
    tmp += tmp1;
    v.push_back(tmp);
}

void Try(int i, int n)
{
    for(int j = 0; j < 2; j++)
    {
        a[i] = j;
        if(i == n / 2)
        {
            in(n);
        }
        else Try(i + 1, n);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    for(int i = 2; i <= 30; i += 2)
    {
        Try(1, i);
    }
    test
    {
        cin >> n;
        for(auto i : v) 
        {
            if(i.size() <= n) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}