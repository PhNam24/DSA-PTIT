#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int tang[n] = {};
    int ans = -1e9;
    for(int i = 0; i < n; i++)
    {
        tang[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(s[i] >= s[j]) tang[i] = max(tang[i], tang[j] + 1);
            ans = max(ans, tang[i]);
        }
    }
    cout << ans;
    return 0;
}