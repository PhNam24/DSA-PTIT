#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, x, a[25];
vector<int> vi;
vector<string> vs;

void Try(int i, int sum = 0)
{
    if(sum > x) return;
    if(sum == x)
    {
        string tmp;
        tmp.push_back('{');
        for(int i : vi) tmp += to_string(i) + ' ';
        tmp.pop_back();
        tmp.push_back('}');
        vs.push_back(tmp);
    }
    for(int j = i; j <= n; j++)
    {
        vi.push_back(a[j]);
        Try(j, sum + a[j]);
        vi.pop_back();
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        vi.clear();
        vs.clear();
        cin >> n >> x;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        Try(1);
        if(vs.empty()) cout << -1;
        else
        {
             cout << vs.size() << " ";
            for(auto i : vs) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}