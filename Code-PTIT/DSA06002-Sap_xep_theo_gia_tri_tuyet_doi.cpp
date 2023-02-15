#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, x;

bool cmp (int a, int b)
{
    return (abs(x - a) < abs(x - b));
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        cin >> n >> x;
        int a[n];
        for ( int &i : a ) cin >> i;
        stable_sort(a, a + n, cmp);
        for ( int i : a ) cout << i << " ";
        cout << endl;
    }
    return 0;
}