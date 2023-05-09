#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

typedef Node* binTree;

void buildTree(binTree root, int par, int child, char c)
{
    if(root->val == par)
    {
        if(c == 'L') root->left = new Node(child);
        else root->right = new Node(child);
    }
    if(root->left) buildTree(root->left, par, child, c);
    if(root->right) buildTree(root->right, par, child, c);
}

void print(binTree root)
{
    queue<binTree> q;
    q.push(root);
    while (!q.empty())
    {
        binTree tmp = q.front();
        cout << tmp->val << " ";
        q.pop();
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        binTree root = NULL;
        int n;
        cin >> n;
        int par, child;
        char c;
        cin >> par >> child >> c;
        root = new Node(par);
        buildTree(root, par, child, c);
        while(--n)
        {
            cin >> par >> child >> c;
            buildTree(root, par, child, c);
        }
        print(root);
        cout << endl;
    }
    return 0;
}