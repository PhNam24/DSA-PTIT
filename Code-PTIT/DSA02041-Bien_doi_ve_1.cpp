#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, Min = 1e9;

int Cnt(int n)
{
    queue<pair<int, int>> q;
    q.push({n, 0});
    while(q.size())
    {
        int tmp1 = q.front().first, tmp2 = q.front().second;
        q.pop();
        if(tmp1 == 1) return tmp2;
        if(tmp1 % 3 == 0) q.push({tmp1 / 3, tmp2 + 1});
        if(tmp1 % 2 == 0) q.push({tmp1 / 2, tmp2 + 1});
        q.push({tmp1 - 1, tmp2 + 1});
    }
    return 0;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        cin >> n;
        cout << Cnt(n);
        cout << endl;
    }
    return 0;
}