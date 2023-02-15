#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

vector<vector<int>> v;

int check(vector<int> a, int n)
{
    for(int i = 0 ; i < n - 1; i++)
    {
        if(a[i] > a[i + 1]) return 0;
    }
    return 1;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    { 
        v.clear();
        int n, d = 1;
        cin >> n;
        vector<int> a(n);
        nhap(a);
        int tmp = 0;
        for(int i = 0; i < n; i++)
        {
            
            for(int j = 0; j < n - 1 - i; j++)
            {
                if(a[j] > a[j + 1]) 
                {
                    swap(a[j], a[j + 1]); 
                }
            }
            
            if (!check(a, n))
            {
                v.push_back(a);
            }
            else 
            {
                if(tmp == 0)
                {
                    v.push_back(a);
                }
                else tmp++;
                break;
            }
        }
        for(int i = v.size() - 1; i >= 0; i--)
        {
            cout << "Buoc " << i + 1 << ": ";
            for(int j : v[i]) cout << j << " ";
            cout << endl;
        }
    }
    return 0;
}