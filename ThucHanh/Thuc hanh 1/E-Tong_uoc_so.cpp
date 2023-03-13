#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int snt[1000005];

void seive()
{
    snt[0] = snt[1] = 1;
    for(int i = 2; i <= 1000; i++)
    {
        if(!snt[i])
        {
            for(int j = i * i; j <= 1000000; j++)
            {
                snt[j] = 1;
            }
        }
    }
}


int check(int n)
{
    if(n == 1 || !snt[n]) return 0;
    int sum = 1;
    int m = n;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                cnt++;
                n /= i;
            }
            int tmp1 = i, tmp2 = 1;
            for(int j = 1; j <= cnt; j++)
            {
                tmp2 += tmp1;
                tmp1 *= i;
            }
            sum *= tmp2;
        }
        if(!snt[n]) break;
    }
    if(n > 1) sum *= (n + 1);
    sum -= m;
    return sum > m;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    seive();
    int a, b, cnt = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        cnt += check(i);
    }
    cout << cnt;
    return 0;
}