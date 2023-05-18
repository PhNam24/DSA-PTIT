#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

struct Node
{
    string s;
    Node *left;
    Node *right;
    Node(string s)
    {
        this->s = s;
        this->left = NULL;
        this->right = NULL;
    }
};

typedef Node* binTree;

binTree buildTree(binTree root, string a[], int n, int i)
{
    if(i < n)
    {
        root = new Node(a[i]);
        root->left = buildTree(root->left, a, n,(i * 2) + 1);
        root->right = buildTree(root->right, a, n, (i * 2) + 2);
    }
    return root;
}

int solve(binTree root)
{
    if(root -> s != "+" and root -> s != "-" and root -> s != "*" and root -> s != "/")
        return stoll(root -> s);
    if(root -> s == "+")
        return solve(root -> left) + solve(root -> right);
    else if(root -> s == "-")
        return solve(root -> left) - solve(root -> right);
    else if(root -> s == "*")
        return solve(root -> left) * solve(root -> right);
    else
        return solve(root -> left) / solve(root -> right);
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
        string a[n + 5];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        binTree root = NULL;
        root = buildTree(root, a, n, 0);
        cout << solve(root);
        cout << endl;
    }
    return 0;
}