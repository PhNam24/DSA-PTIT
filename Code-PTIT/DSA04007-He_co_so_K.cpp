#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int change(string a, int k)
{
    int ans = 0;
    for(int i : a)
    {
        ans = ans * k + (i - '0');
    }
    return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string a, b;
        int k;
        cin >> k >> a >> b;
        int sum = change(a, k) + change(b, k);
        string s;
        while(sum)
        {
            s.push_back(sum % k + '0');
            sum /= k;
        }
        reverse(s.begin(), s.end());
        cout << s;
        cout << endl;
    }
    return 0;
}