#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, k, a[1000000], b[1000000];
vector<vector<int>> v;

void Try(int i)
{
    for ( int j = b[i - 1] + 1; j <= n - k + i; j++ )
    {
        b[i] = j;
        if ( i == k ) 
        {
            vector<int> tmp;
            for (int l = 1; l <= k; l++)
            {
                tmp.push_back(b[l]);
            }
            v.push_back(tmp);
        }
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
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