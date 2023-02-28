#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n, a[15];

void Try(int i)
{
    for(int j = 0; j < 2; j++)
    {
        a[i] = j;
        if(i == n)
        {
            cout << a[1];
            for(int i = 2; i <= n; i++)
            {
                int tmp = a[i] ^ a[i - 1];
                cout << tmp;
            }
            cout << " ";
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
        cin >> n;
        Try(1);
        cout << endl;
    }
    return 0;
}