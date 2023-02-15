#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int check(int a[], int n)
{
    for(int i = 0 ; i < n - 1; i++)
    {
        if(a[i] > a[i + 1]) return 0;
    }
    return 1;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n, d = 1;
    cin >> n;
    int a[n];
    nhap(a);
    int tmp = 0;
    for(int i = 0; i < n; i++)
    {
         
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1]) 
            {
                swap(a[j], a[j + 1]); 
            }
        }
        
        if (!check(a, n))
        {
            cout << "Buoc " << d++ << ": ";
            for(int i = 0; i < n; i++) cout << a[i] << " ";
        }
        else 
        {
            if(tmp == 0)
            {
                cout << "Buoc " << d++ << ": ";
                for(int i = 0; i < n; i++) cout << a[i] << " ";
            }
            else tmp++;
            break;
        }
        cout << endl;
    }
    return 0;
}