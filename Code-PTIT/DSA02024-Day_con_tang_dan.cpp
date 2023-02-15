#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n, a[100], mark[100];

vector<string> v;

int check1()
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(mark[i]) cnt++;
        if(cnt >= 2) return 1;
    }
    return 0;
}

int check2()
{
    vector<int> v;
    for(int i = 1; i <= n; i++)
    {
        if (mark[i]) v.push_back(a[i]);
    }
    for(int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1]) return 0;
    }
    return 1;
}

void Try(int i)
{
    for(int j = 0; j < 2; j++)
    {
        mark[i] = j;
        if(i == n) 
        {
            if(check1()) 
            {
                if(check2())
                {
                    string tmp;
                    for(int i = 1; i <= n; i++)
                    {
                        if (mark[i]) tmp += to_string(a[i]) + " ";
                    }
                    v.push_back(tmp);
                }
            }
        }
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    Try(1);
    sort(v.begin(), v.end());
    for(auto i : v)
    {
        for(auto j : i)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}