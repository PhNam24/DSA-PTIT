#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7, cnt = 0;
int a[1005];

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

void buildTree(binTree &root, int l, int r)
{
    if(l > r) return;
    int mid = (l + r) / 2;
    root = new Node(a[mid]);
    buildTree(root->left, l, mid - 1);
    buildTree(root->right, mid + 1, r);
}

void countLeaf(binTree root)
{
    if(!root->left && !root->right) 
    {
        cnt++;
        return;
    }
    if(root->left) countLeaf(root->left);
    if(root->right) countLeaf(root->right);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        cnt = 0;
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        binTree root = NULL;
        buildTree(root, 1, n);
        countLeaf(root);
        cout << cnt;
        cout << endl;
    }
    return 0;
}