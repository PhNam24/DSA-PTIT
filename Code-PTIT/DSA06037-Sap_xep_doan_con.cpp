#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

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
        int Min[n], Max[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Min[n - 1] = a[n - 1];
        Max[0] = a[0];
        for(int i = 1; i < n; i++)
        {
            Max[i] = max(a[i], Max[i - 1]);
        }
        for(int i = n - 2; i >= 0; i--)
        {
            Min[i] = min(a[i], Min[i + 1]);
        }
        vector<int> vi;
        for(int i = 0; i < n - 1; i++)
        {
            if(Max[i] <= Min[i + 1]) vi.push_back(i);
        }
        cout << vi.size() << endl;
        for(int i : vi) cout << i + 1 << " ";
        cout << endl;
    }
    return 0;
}