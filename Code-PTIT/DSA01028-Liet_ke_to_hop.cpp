#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, k, a[1000000], b[1000000];
set<int> s;

void in()
{
    for (int i = 1; i <= k; i++)
    {
        cout << b[a[i]] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= s.size() - k + i; j++)
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
    cin >> n >> k;
    int tmp[n];
    for (int &i : tmp) 
    {
        cin >> i;
        s.insert(i);
    }
    int idx = 1;
    for (int i : s)
    {
        b[idx++] = i;
    }
    Try(1);
    return 0;
}