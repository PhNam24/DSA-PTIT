#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        vector<string> vs;
        vs.push_back("6");
        vs.push_back("8");
        queue<string> q;
        q.push("6");
        q.push("8");
        while(1)
        {
            string tmp = q.front();
            q.pop();
            if(tmp.size() == n) break;
            vs.push_back(tmp + '6');
            vs.push_back(tmp + '8');
            q.push(tmp + '6');
            q.push(tmp + '8');
        }
        cout << vs.size() << endl;
        for(int i = vs.size() - 1; i >= 0; i--)
        {
            cout << vs[i] << " ";
        }
        cout << endl;
    }
    return 0;
}