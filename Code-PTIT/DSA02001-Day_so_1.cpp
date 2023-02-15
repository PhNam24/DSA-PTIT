#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

void Try(int a[], int n)
{
    if ( n > 0 )
    {
        cout << "[";
        for (int i = 0; i < n - 1; i++)
        {
            cout << a[i] << " "; 
        }
        cout << a[n - 1] << "]";
        cout << endl;
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
        int n;
        cin >> n;
        int a[n];
        nhap(a);
        Try(a , n);
    }
    return 0;
}