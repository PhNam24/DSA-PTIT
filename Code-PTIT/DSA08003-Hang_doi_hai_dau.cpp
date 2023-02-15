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
    deque<int> dq;\
    string s;
    int x;
    test
    {
        cin >> s;
        if(s == "PUSHFRONT")
        {
            cin >> x;
            dq.push_front(x);
        }
        if(s == "PUSHBACK")
        {
            cin >> x;
            dq.push_back(x);
        }
        if(s == "POPFRONT") 
        {
            if(dq.size()) dq.pop_front();
        }
        if(s == "POPBACK")
        {
            if(dq.size()) dq.pop_back();
        }
        if(s == "PRINTFRONT")
        {
            if(dq.size()) cout << dq.front();
            else cout << "NONE";
            cout << endl;
        }
        if(s == "PRINTBACK")
        {
            if(dq.size()) cout << dq.back();
            else cout << "NONE";
            cout << endl;
        }
    }
    return 0;
}