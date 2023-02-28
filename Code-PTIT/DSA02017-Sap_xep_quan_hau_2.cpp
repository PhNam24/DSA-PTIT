#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n = 8, Max = -1e9, cot[100], cheo1[100], cheo2[100], a[10], b[10][10];

void Set()
{
    Max = -1e9;
    for(int i = 0; i < 100; i++)
    {
        cot[i] = cheo1[i] = cheo2[i] = 1;
    }
}

void cnt()
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += b[i][a[i]];
    }
    Max = max(Max, sum);
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(cot[j] && cheo1[i - j + n] && cheo2[i + j -1])
        {
            a[i] = j;
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
            if(i == n) 
            {
                cnt();
            }
            else Try(i + 1);
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 1;
        } 
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;
    cin >> t;
    int d = 1;
    while(t--)
    {
        Set();
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> b[i][j];
            }
        }
        Try(1);
        cout << Max;
        cout << endl;
    }
    return 0;
}   