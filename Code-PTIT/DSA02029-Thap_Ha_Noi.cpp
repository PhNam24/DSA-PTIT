#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

void Try(int n, char a, char b, char c)
{
    if (n == 1) 
    {
        cout << a << " -> " << c << endl;
        return;
    }
    Try(n - 1, a, c, b);
    Try(1, a, b, c);
    Try(n - 1, b, a, c);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    Try(n, 'A', 'B', 'C');
    return 0;
}