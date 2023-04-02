#include <bits/stdc++.h>

using namespace std;

int n, a[15];
set<vector<int>> s;
vector<string> vs;

void in(int n)
{
    vector<int> tmp;
    for(int i = 1; i <= n; i++)
    {
        tmp.push_back(a[i]);
    }
    sort(tmp.begin(), tmp.end(), greater<int>());
    if(s.find(tmp) == s.end())
    {
        s.insert(tmp);
        string s1;
        s1.push_back('(');
        for(int i = 0; i < tmp.size() - 1; i++)
        {
            s1 += to_string(tmp[i]) + ' ';
        }
        s1 += to_string(tmp[tmp.size() - 1]) + ") ";
        vs.push_back(s1);
    }
}

void Try(int i, int sum)
{
    for(int j = n; j >= 1; j--)
    {
        a[i] = j;
        if(j == sum) in(i);
        else if(j < sum) Try(i + 1, sum - j);
    }
}

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        vs.clear();
        cin >> n;
        Try(1, n);
        cout << vs.size() << endl;
        for(string i : vs) cout << i;
        cout << endl;
    }
    return 0;
}