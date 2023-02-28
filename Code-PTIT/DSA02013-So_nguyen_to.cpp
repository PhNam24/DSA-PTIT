#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int snt[250];
int n, p, s, d = 1, a[250];
vector<int> vi;
vector<vector<int>> v;

void seive()
{
    snt[0] = snt[1] = 1;
    for(int i = 2; i <= 50; i++)
    {
        if(!snt[i])
        {
            for(int j = i * i; j < 250; j += i)
            {
                snt[j] = 1;
            }
        }
    }
    for(int i = 2; i < 250; i++)
    {
        if(!snt[i]) a[d++] = i;
    }
}

void Try(int i, int sum = 0)
{
    if(sum > s) return;
    if(sum == s)
    {
        if(vi.size() == n) v.push_back(vi);
        return;
    }
    for(int j = i; j <= d; j++)
    {
        if(a[j] <= p) continue;
        vi.push_back(a[j]);
        Try(j + 1, sum + a[j]);
        vi.pop_back();
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    seive();
    test
    {
        vi.clear();
        v.clear();
        cin >> n >> p >> s;
        Try(1);
        sort(v.begin(), v.end());
        cout << v.size() << endl;
        for(auto i : v)
        {
            for(auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}  