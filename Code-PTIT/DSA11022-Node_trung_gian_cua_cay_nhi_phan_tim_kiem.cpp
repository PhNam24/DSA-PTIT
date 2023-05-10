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

void insert(binTree &root, int val)
{
    if(!root)
    {
        root = new Node(val);
        return;
    }
    if(root->val > val) insert(root->left, val);
    if(root->val < val) insert(root->right, val);
}

int countMiddleLeaf(binTree root)
{
    if(!root) return 0;
    if(!root->left || !root->right) 
        return 1 + countMiddleLeaf(root->left) + countMiddleLeaf(root->right);
    return countMiddleLeaf(root->left) + countMiddleLeaf(root->right);
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
        for(int i : a) insert(root, i);
        cout << countMiddleLeaf(root) - 1;
        cout << endl;
    }
    return 0;
}