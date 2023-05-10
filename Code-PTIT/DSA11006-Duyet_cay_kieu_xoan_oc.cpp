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

void spiralOrder(binTree root)
{
     stack<binTree> st1, st2;
    st1.push(root);
    while(st1.size() || st2.size())
    {
        binTree tmp;
        while(st1.size())
        {
            tmp = st1.top();
            st1.pop();
            cout << tmp -> val << ' ';
            if(tmp -> right != NULL)
                st2.push(tmp -> right);
            if(tmp -> left != NULL)
                st2.push(tmp -> left);
        }
        while(st2.size())
        {
            tmp = st2.top();
            st2.pop();
            cout << tmp -> val << ' ';
            if(tmp -> left != NULL)
                st1.push(tmp -> left);
            if(tmp -> right != NULL)
                st1.push(tmp -> right);
        }
    }
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
        spiralOrder(root);
        cout << endl;
    }
    return 0;
}