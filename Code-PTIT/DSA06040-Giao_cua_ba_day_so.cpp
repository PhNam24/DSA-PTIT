    #include <bits/stdc++.h>
    #define ll long long
    #define endl '\n'
    #define test int t; cin >> t; while(t--)
    #define nhap(a) for ( int &i : a ) cin >> i

    using namespace std;

    int main ()
    {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        cout.tie(NULL);
        test
        {
            ll n1, n2, n3;
            cin >> n1 >> n2 >> n3;
            ll a[n1], b[n2], c[n3];
            map<ll, ll> ma, mb, mc;
            for(ll &i : a)
            {
                cin >> i;
                ma[i]++;
            }
            for(ll &i : b)
            {
                cin >> i;
                mb[i]++;
            }
            for(ll &i : c)
            {
                cin >> i;
                mc[i]++;
            }
            vector<ll> v;
            for(ll i : a)
            {
                if (ma[i] && mb[i] && mc[i])
                {
                    ll tmp = min({ma[i], mb[i], mc[i]});
                    while(tmp--)
                    {
                        v.push_back(i);
                    }
                    ma[i] = mb[i] = mc[i] = 0;
                }
            }
            if(v.size()) for(ll i : v) cout << i << " ";
            else cout << -1;
            cout << endl;
        }
        return 0;
    }