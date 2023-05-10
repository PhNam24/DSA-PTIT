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

void buildTree(binTree &root, int n)
{
    int par, child;
    char c;
    cin >> par >> child >> c;
    root = new Node(par);
    unordered_map<int, binTree> m;
    m[par] = root;
    if(c == 'L')
    {
        m[par]->left = new Node(child);
        m[child] = m[par]->left;
    }
    else
    {
        m[par]->right = new Node(child);
        m[child] = m[par]->right;
    }
    while(--n)
    {
        cin >> par >> child >> c;
        if(c == 'L')
        {
            m[par]->left = new Node(child);
            m[child] = m[par]->left;
        }
        else
        {
            m[par]->right = new Node(child);
            m[child] = m[par]->right;
        }
    }
}

int isFullBinaryTree(binTree root)
{
    queue<binTree> q;
    q.push(root);
    while(q.size())
    {
        binTree tmp = q.front();
        q.pop();
        if((tmp->left && !tmp->right) || (!tmp->left && tmp->right)) return 0;
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    return 1;
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        binTree root = NULL;
        buildTree(root, n);
        cout << isFullBinaryTree(root);
        cout << endl;
    }
    return 0;
}