#include <iostream>
#include <queue>   // required for BFS queue
using namespace std;

struct node {
    int value;
    node* right;
    node* left;

    node(int v) {
        value = v;
        left = NULL;
        right = NULL;
    }
};


int max_depth(node* root){
    if(root==NULL){
        return 0;
    }
    int lh = max_depth(root->left);
    int rh = max_depth(root->right);
    
    return 1 + max(lh,rh);
    
}


//diameter = longest path bw 2 nodes & path doesnot need to pass via root

int diameter(node* root ,int &maxi){
    if(root==NULL){
        return 0;
    }
    int lh = diameter(root->left,maxi);
    int rh = diameter(root->right,maxi);
    
    maxi = max(maxi,lh+rh); 
    
    return 1+max(lh,rh);
    
}

int main() {
    node* node1 = new node(3);
    node* node2 = new node(5);
    node* node3 = new node(8);
    node* node4 = new node(12);
    node* node5 = new node(32);
    node* node6 = new node(54);
    node* node7 = new node(67);

    node* root = node1;
    root->left = node2;
    root->right = node3;
    root->left->right = node4;
    root->left->left = node5;
    root->right->left = node6;
    root->left->right->right = node7;
    
    
    cout<<"max depth : " <<max_depth(root)<<endl;
    
    int maxi = 0;
    cout<<"diameter : "<<diameter(root ,maxi);
    
    return 0;
}
