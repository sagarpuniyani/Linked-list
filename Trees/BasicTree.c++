#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    
    node(int d ){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* BuildTree(node* root){
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if ( data <= -1 ) return NULL;

    cout << "Insert the data in left " << endl;
    root->left = BuildTree( root->left);
    cout << "Insert the data in right " << endl;
    root->right = BuildTree( root->right);

    return root;

}

int main()
{
    node* N = NULL;
    N = BuildTree(N);
    
    return 0;
}