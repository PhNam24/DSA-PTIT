#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;
vector<int> v;

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
    unordered_map<int, binTree> m;
    cin >> par >> child >> c;
    root = new Node(par);
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

void preOrder(binTree root)
{
    v.push_back(root->val);
    if(root->left) preOrder(root->left);
    if(root->right) preOrder(root->right);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        v.clear();
        int n;
        cin >> n;
        binTree root1 = NULL;
        binTree root2 = NULL;
        buildTree(root1, n);
        cin >> n;
        buildTree(root2, n);
        vector<int> v1, v2;
        preOrder(root1);
        v1 = v;
        v.clear();
        preOrder(root2);
        v2 = v;
        cout << (v1 == v2);
        cout << endl;
    }
    return 0;
}