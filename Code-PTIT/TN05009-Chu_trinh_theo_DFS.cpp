#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n, m, End, visited[1005], parent[1005];
vector<int> ke[1005];

int mod = 1e9 + 7;
int check = 0;

void DFS(int u)
{
    if(check) return;
    visited[u] = 1;
    for(int i : ke[u])
    {
        if(!visited[i])
        {
            parent[i] = u;
            DFS(i);
        }
        else if(i != parent[u] && i == 1)
        {
            check = 1;
            End = u;
            return;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        for(int i = 0; i < 1005; i++) 
        {
            visited[i] = parent[i] = 0;
            ke[i].clear();
        }
        check = 0;
        cin >> n >> m;
        int x, y;
        while(m--)
        {
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            sort(ke[i].begin(), ke[i].end());
        }
        DFS(1);
        if(!check) cout << "NO";
        else
        {
            stack<int> st;
            st.push(End);
            while(parent[End])
            {
                st.push(parent[End]);
                End = parent[End];
            }
            while(st.size())
            {
                cout << st.top() << " ";
                st.pop();
            }
            cout << 1;
        }
        cout << endl;
    }
    return 0;
}