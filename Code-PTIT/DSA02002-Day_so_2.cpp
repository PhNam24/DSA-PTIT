#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

vector<string> v;

void Try(int a[], int n)
{
    if ( n > 0 )
    {
        string tmp;
        tmp.push_back('[');
        for (int i = 0; i < n - 1; i++)
        {
            tmp += to_string(a[i]) + " ";
        }
        tmp += to_string(a[n - 1]) + ']';
        v.push_back(tmp);
        for(int i = 0; i < n - 1; i++)
        {
            a[i] += a[i + 1];
        }
        Try(a, n - 1);
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
        int n;
        cin >> n;
        int a[n];
        nhap(a);
        Try(a , n);
        for (int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}