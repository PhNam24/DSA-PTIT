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
        int a, b;
        cin >> a >> b;
        ll s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0;
        for(int i = a; i <= b; i++)
        {
            int tmp = i;
            while(tmp > 0)
            {
                int tmp1 = tmp % 10;
                if(tmp1 == 0) s0++;
                if(tmp1 == 1) s1++;
                if(tmp1 == 2) s2++;
                if(tmp1 == 3) s3++;
                if(tmp1 == 4) s4++;
                if(tmp1 == 5) s5++;
                if(tmp1 == 6) s6++;
                if(tmp1 == 7) s7++;
                if(tmp1 == 8) s8++;
                if(tmp1 == 9) s9++;
                tmp /= 10;
            }
        }
        cout << s0 << " " << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << " " << s6 << " " << s7 << " " << s8 << " " << s9;
        cout << endl;
    }
    return 0;
}