#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int a[100], b[2] = {0, 2};

int check()
{
    if(a[5] != 2 || (a[1] == 0 && a[2] == 0) || a[3] == 2 || a[4] == 0) return 0;
    return 1;
}

void in()
{
    for(int i = 1; i <= 8; i++)
    {
        if(i == 3 || i == 5) cout << '/';
        cout << a[i];
    }
    cout << endl;
}

void Try(int i)
{
    for(int j = 0; j < 2; j++)
    {
        a[i] = b[j];
        if(i == 8) 
        {
            if(check()) in();
        }
        else Try(i + 1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    Try(1);
    return 0;
}