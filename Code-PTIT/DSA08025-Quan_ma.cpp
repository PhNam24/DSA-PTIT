#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int I[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int J[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

int BFS(pair<int, int> st, pair<int, int> en)
{
    int a[15][15] = {}, c[15][15] = {};
    queue<pair<int, int>> q;
    q.push(st);
    while(q.size())
    {
        auto tmp = q.front();
        q.pop();
        a[tmp.first][tmp.second] = 1;
        for(int i = 0; i < 8; i++)
        {
            int x = tmp.first + I[i], y = tmp.second + J[i];
            if(x > 0 && x < 9 && y > 0 && y < 9 && !a[x][y])
            {
                c[x][y] = c[tmp.first][tmp.second] + 1;
                a[x][y] = 1;
                q.push({x, y});
            }
        } 
    }
    return c[en.first][en.second];
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string xy, uv;
        cin >> xy >> uv;
        map<char, int> m;
        m.insert({'a', 1});
        m.insert({'b', 2});
        m.insert({'c', 3});
        m.insert({'d', 4});
        m.insert({'e', 5});
        m.insert({'f', 6});
        m.insert({'g', 7});
        m.insert({'h', 8});
        pair<int, int> st, en;
        st.first = m[xy[0]];
        st.second = xy[1] - '0';
        en.first = m[uv[0]];
        en.second = uv[1] - '0';
        if(BFS(st, en) != -1) cout << BFS(st, en);
        cout << endl;
    }
    return 0;
}