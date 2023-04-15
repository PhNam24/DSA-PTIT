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
        int s, t;
        cin >> s >> t;
        int mark[20005] = {};
        queue<int> q;
        q.push(s);
        while(!mark[t])
        {
            int tmp = q.front();
            q.pop();
            if(tmp - 1 > 0 && !mark[tmp - 1])
            {
                mark[tmp - 1] = mark[tmp] + 1;
                q.push(tmp - 1);
            }
            if(tmp * 2 <= 20000 && !mark[tmp * 2])
            {
                mark[tmp * 2] = mark[tmp] + 1;
                q.push(tmp * 2);
            }
        }
        cout << mark[t];
        cout << endl;
    }
    return 0;
}