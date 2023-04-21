#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
int n, x;

struct Node
{
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

typedef Node* node;

void addBack(node &list, int val)
{
    if(list)
    {
        node tmp = list;
        while(tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = new Node(val);
    }
    else list = new Node(val);
}

void print(node list)
{
    while (list != NULL)
    {
        if(list->val != x) cout << list->val << " ";
        list = list->next;
    }
    cout << endl;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    node list = NULL;
    cin >> n;
    while(n--)
    {
        cin >> x;
        addBack(list, x);
    }
    cin >> x;
    print(list);
    return 0;
}