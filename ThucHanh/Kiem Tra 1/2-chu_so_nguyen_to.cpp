#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n;
vector<string> vs;

int check(string s)
{
    if((s[s.size() - 1] - '0') % 2 == 0 ) return 0;
    int cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '2') cnt2++;
        if(s[i] == '3') cnt3++;
        if(s[i] == '5') cnt5++;
        if(s[i] == '7') cnt7++;
    }
    if(cnt2 * cnt3 * cnt5 * cnt7 == 0) return 0;
    return 1;
}

void sinh()
{
    queue<string> q;
    q.push("2");
    q.push("3");
    q.push("5");
    q.push("7");
    while(1)
    {
        string tmp = q.front();
        q.pop();
        if(tmp.size() == n) break;
        vs.push_back(tmp + '2');
        vs.push_back(tmp + '3');
        vs.push_back(tmp + '5');
        vs.push_back(tmp + '7');
        q.push(tmp + '2');
        q.push(tmp + '3');
        q.push(tmp + '5');
        q.push(tmp + '7');
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n;
    sinh();
    for(auto i : vs)
    {
        if(i.size() < 4) continue;
        if(check(i)) cout << i << endl;
    }
    return 0;
}