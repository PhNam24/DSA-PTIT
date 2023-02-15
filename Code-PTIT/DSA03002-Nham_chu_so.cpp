#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( int &i : a ) cin >> i

using namespace std;

void changeMax(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == '5') s[i] = '6';
    }
}

void changeMin(string &s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == '6') s[i] = '5';
    }
}

string sum(string a, string b)
{
    while(b.size() < a.size()) b = '0' + b;
    string s = "";
    int nho = 0;
    for(int i = a.size() - 1; i >= 0; i--)
    {
        int tmp = a[i] - '0' + b[i] - '0' + nho;
        nho = 0;
        if (tmp >= 10) 
        {
            tmp %= 10;
            nho = 1;
        }
        s += to_string(tmp);
    }
    if(nho) s.push_back('1');
    reverse(s.begin(), s.end());
    return s;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    if(a.size() < b.size()) swap(a, b);
    changeMin(a);
    changeMin(b);
    string Min = sum(a, b);
    cout << Min << " ";
    changeMax(a);
    changeMax(b);
    string Max = sum(a, b);
    cout << Max;
    return 0;
}