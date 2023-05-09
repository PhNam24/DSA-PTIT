#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

struct Node
{
    char val;
    Node *left;
    Node *right;
    Node(char val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

typedef Node* binTree;

void printInOrder(binTree root)
{
    if(root->left) printInOrder(root->left);
    cout << root->val;
    if(root->right) printInOrder(root->right);
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        stack<binTree> st;
        binTree root = NULL;
        for(int i = 0; i < s.size(); i++)
        {
            if(!isalpha(s[i]))
            {
                root = new Node(s[i]);
                root->right = st.top();
                st.pop();
                root->left = st.top();
                st.pop();
                st.push(root);
            }
            else st.push(new Node(s[i]));
        }
        printInOrder(st.top());
        cout << endl;
    }
    return 0;
}