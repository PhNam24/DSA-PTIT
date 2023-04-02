#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, q;
    cin >> n >> q;
    int a[n] = {};
    int x, y;
    while(q--)
    {
        cin >> x >> y;
        for(int i = x - 1; i < y; i++)
        {
            if(a[i] == 1) a[i] = 0;
            else a[i] = 1;
        }
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}