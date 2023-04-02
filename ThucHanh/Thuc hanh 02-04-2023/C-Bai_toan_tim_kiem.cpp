#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, s, k;
        cin >> n >> s >> k;
        int a[n];
        for(int &i : a) cin >> i;
        int sum[n] = {};
        sum[0] = a[0];
        for(int i = 1; i < n; i++)
        {
            sum[i] = sum[i - 1] + a[i];
        }
        int ans = -1;
        for(int i = 0; i < s; i++)
        {
            if(sum[s - 1] - sum[i] + a[i] <= k)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}