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
    queue<int> q;
    string s;
    int x;
    test
    {
        cin >> s;
        if(s == "PUSH")
        {
            cin >> x;
            q.push(x);
        }
        if(s == "POP") 
        {
            if(q.size()) q.pop();
        }
        if(s == "PRINTFRONT")
        {
            if(q.size()) cout << q.front();
            else cout << "NONE";
            cout << endl;
        }
    }
    return 0;
}