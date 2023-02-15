#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
ll fibo[93];

int findI(ll n, ll i)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(i > fibo[n - 2]) return findI(n - 1, i - fibo[n -  2]);
    return findI(n - 2, i);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    //fibo[i] la do dai cua xau thu i
    fibo[0] = 0;
    fibo[1] = fibo[2] = 1;
    for(int i = 3; i < 93; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i -2];
    }
    test
    {
        ll n, i;
        cin >> n >> i;
        if(findI(n, i) == 0) cout << "A";
        else cout << "B";
        cout << endl;
    }
    return 0;
}