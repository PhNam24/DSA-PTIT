    #include <bits/stdc++.h>

    using namespace std;

    int snt[1000005];
    vector<int> v;

    void seive()
    {
        snt[0] = snt[1] = 1;
        for(int i = 2; i <= 1000; i++)
        {
            if(!snt[i])
            {
                for(int j = i * i; j <= 1000000; j += i)
                {
                    snt[j] = 1;
                }
            }
        }
    }

    long long sum(int n)
    {
        if(!snt[n]) return n;
        int ans = 0;
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                if(!snt[n / i]) return n / i;
                else if(!snt[i]) ans = i;
            }
        }
        return ans;
    }

    int main ()
    {
        seive();
        int t;
        cin >> t;
        while(t--)
        {
            long long l, r;
            cin >> l >> r;
            long long s = 0;
            for(int i = l; i <= r; i++)
            {
                s += sum(i);
            }
            cout << s;
            cout << endl;
        }
        return 0;
    }