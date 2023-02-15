#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define mod 1e9 + 7
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int n;
char c, a[20], b[2] = {'O', 'X'};

int check(char c)
{
    char tmp;
    int maxx = -1e9, maxo = -1e9;
    int tangx[n + 5] = {}, tango[n + 5] {};
    if(a[1] == 'X') tangx[1] = 1;
    else tango[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        if(a[i] == 'X')
        {
            if(a[i] == a[i - 1]) tangx[i] = tangx[i - 1] + 1;
            else tangx[i] = 1;
            maxx = max(maxx, tangx[i]);
        }
        if(a[i] == 'O')
        {
            if(a[i] == a[i - 1]) tango[i] = tango[i - 1] + 1;
            else tango[i] = 1;
            maxo = max(maxo, tango[i]);
        }
    }
    if(maxx == maxo || (maxx < 5 && maxo < 5)) return 0;
    if(maxx > maxo) 
    {
        if(maxx < 5) return 0;
        tmp = 'X';
    }
    else
    {
        if(maxo < 5) return 0;
        tmp = 'O';
    }
    return c == tmp;
}

void in()
{
    if(check(c))
    {
        for(int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
}

void Try(int i)
{
    for(int j = 0; j < 2; j++)
    {
        a[i] = b[j];
        if(i == n) in();
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        cin >> n >> c;
        Try(1);
    }
    return 0;
}
