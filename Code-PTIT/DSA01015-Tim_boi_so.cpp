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
        if(9 % n == 0) cout << 9;
        else
        {
            queue<string> q;
            q.push("9");
            while(1)
            {
                string tmp = q.front(), tmp1;
                q.pop();
                tmp1 = tmp + '0';
                if(stoll(tmp1) % n == 0) 
                {
                    cout << tmp1;
                    break;
                }
                tmp1 = tmp + '9';
                if(stoll(tmp1) % n == 0) 
                {
                    cout << tmp1;
                    break;
                }
                q.push(tmp + '0');
                q.push(tmp + '9');
            }
        }
        cout << endl;
    }
    return 0;
}