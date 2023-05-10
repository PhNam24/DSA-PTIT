#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
vector<int> ke[1005];
int visited[1005], par[1005];

void BFS()
{    
    queue<int> q;
    q.push(1);
    while(q.size())
    {
        int tmp = q.front();
        q.pop();
        visited[tmp] = 1;
        for(int i : ke[tmp])
        {
            if(!visited[i])
            {
                visited[i] = 1;
                par[i] = tmp;
                q.push(i);
            }
        }
    }
}

void print(int u)
{
    stack<int> st;
    while(u != 1)
    {
        st.push(u);
        u = par[u];
    }
    st.push(1);
    while(st.size())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
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
            ke[i].clear();
            visited[i] = par[i] = 0;
        }
        int n;
        cin >> n;
        int m = n;
        while(--n)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        BFS();
        vector<int> leaf;
        for(int i = 1; i <= m; i++)
        {
            if(!ke[i].size()) leaf.push_back(i);
        }
        for(int i : leaf) print(i);
        cout << endl;
    }
    return 0;
}