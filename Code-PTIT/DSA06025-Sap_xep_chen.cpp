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
    int n;
    cin >> n;
    int a[n];
    nhap(a);
    int d = 1;
    cout << "Buoc 0: " << a[0] << endl;  
    for(int i = 1; i < n; i++)
    {
        cout << "Buoc " << d++ << ": ";
        int tmp = a[i], j = i - 1;
        while(j >= 0 && a[j] > tmp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
        for(int i = 0; i < d; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}