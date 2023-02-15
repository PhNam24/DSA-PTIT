#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

int n;
int a[1000000];

void in()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d = 1;
    for(int i = 0; i < n - 1; i++)
    {
        cout << "Buoc " << d++ << ": ";
        for(int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
        in();
    }
    return 0;
}