#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, a[1000000], b[1000000], mark[1000000];
vector<vector<int>> v;

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!mark[j])
        {
            mark[j] = 1;
            b[i] = j;
            if (i == n)
            {
                vector<int> tmp;
                for (int k = 1; k <= n; k++ )
                {
                    tmp.push_back(b[k]);
                }
                v.push_back(tmp);
            }
            else Try(i + 1);
            mark[j] = 0;
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
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        Try(1);
        for (int i = 0; i < v.size(); i++)
        {
            int check = 1;
            for (int j = 0; j < v[i].size(); j++)
            {
                if ( a[j + 1] != v[i][j] ) 
                {
                    check = 0;
                    break;
                }
            }
            if (check) 
            {
                cout << i + 1;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}