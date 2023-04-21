#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define test int t; cin >> t; while(t--)
#define nhap(a) for ( auto &i : a ) cin >> i

using namespace std;

int mod = 1e9 + 7;

struct Node
{
    int heSo, mu;
    Node *next;
    Node (int heSo, int mu)
    {
        this->heSo = heSo;
        this->mu = mu;
        this->next = NULL;
    }
};

typedef Node* node;

void addBack(node &list, int heSo, int mu)
{
    if(list)
    {
        node tmp = list;
        while(tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = new Node(heSo, mu);
    }
    else list = new Node(heSo, mu);
}

node convert(string s)
{
    node list = NULL;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp)
    {
        int heSo = 0, mu = 0;
        int idx = 0;
        string res;
        while(isdigit(tmp[idx]))
        {
            res.push_back(tmp[idx]);
            idx++;
        }
        if(res!= "") heSo = stoi(res);
        res = "";
        idx += 3;
        while(isdigit(tmp[idx]))
        {
            res.push_back(tmp[idx]);
            idx++;
        }
        if(res!= "") mu = stoi(res);
        if(heSo != 0) addBack(list, heSo, mu);
    }
    return list;
}

int sum(node list, int mu)
{
    if(list)
    {
        while(list)
        {
            if(list->mu == mu) return list->heSo;
            list = list->next;
        }
    }
    return 0;
}

void print(node list)
{
    if(list)
    {
        while(list)
        {
            cout << list->heSo << "*x^" << list->mu;
            if(list->next) cout << " + ";
            list = list->next;
            
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        node listA = NULL, listB = NULL, listC = NULL;
        listA = convert(a);
        listB = convert(b);
        int muMax = max(listA->mu , listB->mu);
        for(int i = muMax; i >= 0; i--)
        {
            if(sum(listA, i) + sum(listB, i) != 0) addBack(listC, sum(listA, i) + sum(listB, i), i);
        }
        print(listC);
        cout << endl;
    }
    return 0;
}