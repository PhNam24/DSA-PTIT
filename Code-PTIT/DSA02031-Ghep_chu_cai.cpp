#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

char c;
int n, a[100], mark[100];
char s[100];
string ss;

int ok(char c)
{
    return (c == 'A' || c == 'E');
}

int check()
{
    if (n >= 5)
    {
        for(int i = 1; i <= n; i++)
        {
            if (ok(s[i]))
            {
                if (i == 1 || i == n) continue;
                if(!ok(s[i - 1]) && !ok(s[i + 1])) return 0;
            }
        }
    }
    else if(s[1] != 'A' && s[n] != 'A') return 0;
    return 1;
}

void in()
{
    for(int i = 1; i <= n; i++)
    {
        s[i] = ss[a[i] - 1];
    }
    if(check()) 
    {
        for(int i = 1; i <= n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!mark[j])
        {
            mark[j] = 1;
            a[i] = j;
            if(i == n) in();
            else Try(i + 1);
            mark[j] = 0;
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    for(char i = 'A'; i <= 'Z'; i++) ss.push_back(i);
    cin >> c;
    n = c - 'A' + 1;
    Try(1);
    return 0;
}