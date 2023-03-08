    #include <bits/stdc++.h>
    #define ll long long
    #define endl '\n'
    #define test int t; cin >> t; while(t--)
    #define nhap(a) for ( auto &i : a ) cin >> i

    using namespace std;

    int mod = 1e9 + 7;

    int v, e, cnt = 0, visited[100], a[100], b[100][100];

    void Hamilton(int i)
    {
        for(int j = 1; j <= v; j++)
        {
            if(b[a[i - 1]][j] && !visited[j])
            {
                a[i] = j;
                visited[j] = 1;
                if(i < v) Hamilton(i + 1);
                else 
                {
                    cnt++;
                }
                visited[j] = 0;
            }
        }
    }

    void sol(int v0)
    {
        for(int i = 1; i <= v; i++)
        {
            visited[i] = 0;
        }
        visited[v0] = 1;
        a[1] = v0;
        Hamilton(2);
    }

    int main ()
    {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        cout.tie(NULL);
        test
        {
            cnt = 0;
            for(int i = 0 ; i < 100; i++)
            {
                visited[i] = 0;
                for(int j = 0; j < 100; j++)
                {
                    b[i][j] = 0;
                }
            }
            cin >> v >> e;
            int x, y;
            while(e--)
            {
                cin >> x >> y;
                b[x][y] = b[y][x] = 1;
            }
            for(int i = 1; i <= v; i++)
            {
                sol(i);
            }
            if(cnt) cout << 1;
            else cout << 0;
            cout << endl;
        }
        return 0;
    }
