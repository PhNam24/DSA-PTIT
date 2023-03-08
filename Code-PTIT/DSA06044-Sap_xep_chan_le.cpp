#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n, x;
    cin >> n;
    int a[n];
    vector<int> le, chan;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(i % 2) chan.push_back(x);
        else le.push_back(x);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<int>());
    for(int i = 0; i < chan.size(); i++)
    {
        cout << le[i] << " " << chan[i] << " ";
    }
    if(n % 2) cout << le[le.size() - 1];
    return 0;
}