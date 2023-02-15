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
        queue<string> q;
        q.push("1");
        vs.push_back(q.front());
        while(1)
        {
           string tmp = q.front();
           q.pop(); 
           vs.push_back(tmp + '0');
           if(vs.size() == n) break;
           vs.push_back(tmp + '1');
           if(vs.size() == n) break;
           q.push(tmp + '0');
           q.push(tmp + '1');
        }
        for(string i : vs) cout << i << " ";
        cout << endl;
    }
    return 0;
}