#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

struct Node
{
    int val;
    Node* left;
    Node* right;
    Node ( int val )
    {
        this -> val = val;
        this -> left = NULL;
        this -> right = NULL;
    }
};

typedef Node* binTree;

int a[1005];

void buildTree ( binTree &root, int l, int r )
{
    if ( l > r ) return;
    int mid = (l + r) / 2;
    root = new Node(a[mid]);
    buildTree(root -> left, l, mid - 1);
    buildTree(root -> right, mid + 1, r);
}

void print ( binTree root )
{
    cout << root -> val <<  " ";
    if ( root -> left ) print(root -> left);
    if ( root -> right ) print(root -> right);
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
        for ( int i = 1; i <= n; i++ )
        {
            cin >> a[i];
        } 
        sort(a + 1, a + 1 + n);
        buildTree(root, 1, n);
        print(root);
        cout << endl;
    }
    return 0;
}