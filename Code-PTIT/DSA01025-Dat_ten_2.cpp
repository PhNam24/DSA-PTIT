#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, k;
char a[100000];

void in()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i)
{
    for (char j = a[i- 1] + 1; j <= 'A' + n - k + i - 1; j++)
    {
        a[i] = j;
        if (i == k) in();
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
        cin >> n >> k;
        a[0] = '@';
        Try(1);
    }
    return 0;
}