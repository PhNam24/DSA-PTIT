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
    ll n, k, x;
    cin >> n >> k;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    while(n--)
    {
        cin >> x;
        pq.push(x);
    }
    ll money = 0, min, max;
    while(pq.size() > 1)
    {
        ll sum = 0;
        min = pq.top();
        if(pq.size() <= k)
        {
            while(pq.size())
            {
                max = pq.top();
                sum += pq.top();
                pq.pop();
            } 
        }
        else
        {
            for(ll i = 0; i < k; i++)
            {
                max = pq.top();
                sum += pq.top();
                pq.pop();
            }
        }
        money += (max - min);
        pq.push(sum);
    }
    cout << pq.top() << endl << money;
    return 0;
}