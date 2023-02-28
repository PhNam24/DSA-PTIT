    #include <bits/stdc++.h>
    #define ll long long
    #define endl '\n'
    #define test int t; cin >> t; while(t--)
    #define nhap(a) for ( auto &i : a ) cin >> i

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
            nhap(a);
            nhap(b);
            nhap(c);
            multiset<ll> s;
            int idxa = 0, idxb = 0, idxc = 0;
            while(idxa < n1 && idxb < n2 && idxc < n3)
            {
                if(a[idxa] == b[idxb] && a[idxa] == c[idxc])
                {
                    s.insert(a[idxa]);
                    idxa++;
                    idxb++;
                    idxc++;
                }
                else if(a[idxa] < b[idxb]) idxa++;
                else if(b[idxb] < c[idxc]) idxb++;
                else idxc++;
            }
            if(s.size()) for(auto i : s) cout << i << " ";
            else cout << -1;
            cout << endl;
        }
        return 0;
    }