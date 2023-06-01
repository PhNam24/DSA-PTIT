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

void buildTree(binTree &root, int val)
{
    if(!root) 
    {
        root = new Node(val);
        return;
    }
    if(root->val > val) buildTree(root->left, val);
    else buildTree(root->right, val);
    
}

void printPreOrder(binTree root)
{
    cout << root->val << " ";
    if(root->left) printPreOrder(root->left);
    if(root->right) printPreOrder(root->right);
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
        int a[n];
        nhap(a);
        binTree root = NULL;
        for(int i = 0; i < n; i++)
        {
            buildTree(root, a[i]);
        }
        printPreOrder(root);
        cout << endl;
    }
    return 0;
}