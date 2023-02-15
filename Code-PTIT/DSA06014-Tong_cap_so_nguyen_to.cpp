#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int a[1000005];

void seive()
{
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        if (!a[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                a[j] = 1;
            }
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    seive();
    vector<int> v;
    for (int i = 2; i <= 1e6; i++)
    {
        if (!a[i]) v.push_back(i);
    }
    test
    {
        int n;
        cin >> n;
        int check = 0;
        for (int i : v)
        {
            if ( binary_search(v.begin(), v.end(), n - i) )
            {
                cout << i << " " << n - i;
                check = 1;
                break;
            }
        }
        if (!check) cout << -1;
        cout << endl;
    }
    return 0;
}