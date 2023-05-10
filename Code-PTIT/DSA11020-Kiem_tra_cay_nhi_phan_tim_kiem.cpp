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
    Node* left;
    Node* right;
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

void inOrder(binTree root)
{
    if(root->left) inOrder(root->left);
    v.push_back(root->val);
    if(root->right) inOrder(root->right);
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
        int a[n];
        nhap(a);
        binTree root = NULL;
        for(int i : a) insert(root, i);
        inOrder(root);
        int check = 1;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] != a[i]) 
            {
                check = 0;
                break;
            }
        }
        cout << check;
        cout << endl;
    }
    return 0;
}