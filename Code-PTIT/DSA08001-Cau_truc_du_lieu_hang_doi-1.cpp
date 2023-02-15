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
        deque<int> dq;
        int tv, x;
        test
        {
            cin >> tv;
            if(tv == 1)
            {
                cout << dq.size();
                cout << endl;
            }
            if(tv == 2) 
            {
                if(dq.empty()) cout << "YES";
                else cout << "NO";  
                cout << endl;
            }
            if(tv == 3)
            {
                cin >> x;
                dq.push_back(x);
            }
            if(tv == 4)
            {
                if(dq.size()) dq.pop_front();
            }
            if(tv == 5) 
            {
                if(dq.size()) cout << dq.front();
                else cout << - 1;
                cout << endl;
            }
            if(tv == 6)
            {
                if(dq.size()) cout << dq.back();
                else cout << - 1;
                cout << endl;
            }
        }
    }
    return 0;
}