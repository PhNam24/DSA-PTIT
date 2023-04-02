#include <bits/stdc++.h>

using namespace std;

int n, tmp;
char a[20], x[20];
map<char, int> m;

void Try(int i)
{
    for(int j = 1; j <= 3; j++)
    {
        x[i] = a[j];
        m[x[i]]++;
        if(i == tmp)
        {
            if(m['A'] && m['B'] && m['C'] && m['A'] <= m['B'] && m['B'] <= m['C'])
            {
                for(int i = 1; i <= tmp; i++) 
                {
                    cout << x[i];
                }
                cout << endl;
            }
        }
        else Try(i + 1);
        m[x[i]]--;
    }
}

int main ()
{
    a[1] = 'A';
    a[2] = 'B';
    a[3] = 'C';
    cin >> n;
    for(int i = 3; i <= n; i++)
    {
        tmp = i;
        Try(1);
    }
    return 0;
}