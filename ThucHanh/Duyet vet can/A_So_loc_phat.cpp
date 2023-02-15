#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n, a[20], b[2] = {6, 8};
vector<string> v;

void in()
{
    string tmp;
    for(int i = 1; i <= n; i++)
    {
        tmp += to_string(a[i]);
    }
    v.push_back(tmp);
}

void Try(int i)
{
    for(int j = 0; j < 2; j++)
    {
        a[i] = b[j];
        if(i == n)
        {
            in();
        }
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
        v.clear();
        cin >> n;
        Try(1);
        cout << v.size() << endl;
        for(auto i : v) cout << i << " ";
        cout << endl;
    }
    return 0;
}