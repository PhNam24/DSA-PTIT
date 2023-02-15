#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, k, a[100000];
string s[100000];
set<string> ss, ss1;

void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= ss1.size() - k + i; j++)
    {
        a[i] = j;
        if ( i == k )
        {
            string tmp;
            for (int i = 1; i <= k; i++)
            {
                tmp += s[a[i]] + " ";
            }
            ss.insert(tmp);
        }
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n >> k;
    while(n--)
    {
        string tmp;
        cin >> tmp;
        ss1.insert(tmp);
    }
    int idx = 1;
    for (string i : ss1) s[idx++] = i;
    Try(1);
    for (string i : ss) cout << i << endl;
    return 0;
}