#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

ll Pow(int n, int k)
{
    if(k == 0) return 1;
    if(k == 1) return n;
    ll tmp = Pow(n, k / 2);
    if(k % 2 == 0) return tmp * tmp;
    return n * tmp *tmp;
}

char findK(int n, int k)
{
    ll tmp = Pow(2, n - 1);
    if(k == tmp) return 'A' + (n - 1);
    if(k < tmp) return findK(n - 1, k);
    return findK(n - 1, k - tmp);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n, k;
        cin >> n >> k;
        cout << findK(n, k);
        cout << endl; 
    }
    return 0;
}