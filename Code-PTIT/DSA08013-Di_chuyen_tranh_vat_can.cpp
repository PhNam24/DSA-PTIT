#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int n;
string a[105];
int dX[4] = {-1, 0, 1, 0};
int dY[4] = {0, 1, 1, -1};

void DFS(int i, int j)
{
    a[i][j] = 'X';
    for(int k = 0; k < 4; k++)
    {
        int i1 = i + dX[k];
        int j1 = j + dY[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == '.')
        {
            DFS(i1, j1);
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
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][j] == )
            }
        }

    }
    return 0;
}