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
        int n, k;
        cin >> n >> k;
        int a[n];
        nhap(a);
        vector<int> vi;
        deque<int> dq;
        for(int i = 0; i < k; i++)
        {
            while(!dq.empty() && a[i] > a[dq.back()]) dq.pop_back();
            dq.push_back(i);
        }
        vi.push_back(a[dq.front()]);
        for(int i = k; i < n; i++)
        {
            if(dq.front() <= i - k) dq.pop_front();
            while(!dq.empty() && a[i] > a[dq.back()]) dq.pop_back();
            dq.push_back(i);
            vi.push_back(a[dq.front()]); 
        }
        for(auto i : vi) cout << i << " ";
        cout << endl;
    }
    return 0;
}