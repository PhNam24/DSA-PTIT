#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

vector<vector<int>> v;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    nhap(a);
    int d = 1;  
    int x = a[0];
    for(int i = 1; i < n; i++)
    {
        d++;
        int tmp = a[i], j = i - 1;
        while(j >= 0 && a[j] > tmp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
        vector<int> b;
        for(int i = 0; i < d; i++)
        {
            b.push_back(a[i]);
        }
        v.push_back(b);
    }
    for(int i = v.size() - 1; i >= 0; i--)
    {
        cout << "Buoc " << i + 1 << ": ";
        for(int j : v[i]) cout << j << " ";
        cout << endl;
    }
    cout << "Buoc 0: " << x << endl;
    return 0;
}