#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, k;

int binarySearch(int a[], int x)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x) return mid + 1;
        if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {       
        cin >> n >> k;
        int a[n];
        nhap(a);
        if(binarySearch(a, k) >= 0) cout << binarySearch(a, k);
        else cout << "NO";
        cout << endl;
    }
    return 0;
}