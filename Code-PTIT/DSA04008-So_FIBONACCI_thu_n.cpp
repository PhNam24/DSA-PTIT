#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

struct fibo
{
    ll mt[2][2];
    fibo()
    {
        mt[0][0] = 0;
        mt[0][1] = mt[1][0] = mt[1][1] = 1;
    }
};

fibo operator*(fibo a, fibo b)
{
    fibo ans;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            ans.mt[i][j] = 0;
            for(int h = 0; h < 2; h++)
            {
                ans.mt[i][j] += (a.mt[i][h] * b.mt[h][j]) % mod;
                ans.mt[i][j] %= mod;
            }
        }
    }
    return ans;
}

fibo Pow(fibo a, int n)
{
    if(n == 1) return a;
    fibo tmp = Pow(a, n / 2);
    if(n % 2) return a * tmp * tmp;
    return tmp * tmp;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        fibo a;
        a = Pow(a, n);
        cout << a.mt[0][1];
        cout << endl;
    }
    return 0;
}