#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    vector<int> ke[n + 5];
    for(int i = 1; i <= n; i++)
    {
        string s, tmp;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> tmp)
        {
            ke[i].push_back(stoi(tmp));
        }
    }
    for(int i = 1; i <= n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
        for(int j : ke[i])
        {
            if(j > i) cout << i << " " << j << endl;
        }
    }
    return 0;
}