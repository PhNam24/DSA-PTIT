#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int snt[100000];

void seive()
{
    snt[0] = snt[1] = 1;
    for(int i = 2; i * i < 100000; i++)
    {
        if(!snt[i])
        {
            for(int j = i * i; j < 100000; j += i)
            {
                snt[j] = 1;
            }
        }
    }
}

int solve(int n)
{
    queue<int> q;
    q.push(n);
    map<int, int> m;
    while(q.size())
    {
        int tmp = q.front();
        q.pop();
        if(!m[tmp - 1])
        {
            q.push(tmp - 1);
            m[tmp - 1] = m[tmp] + 1;
            if(tmp - 1 == 1) return m[1];
        }
        int tmp1 = sqrt(tmp);
        for(int i = 2; i <= tmp1; i++)
        {
            if(tmp % i == 0 && !m[tmp / i])
            {
                q.push(tmp / i);
                m[tmp / i] = m[tmp] + 1;
            }
        }
    }
    return m[1];
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    seive();
    test
    {
        int n;
        cin >> n;
        cout << solve(n);
        cout << endl;
    }
    return 0;
}