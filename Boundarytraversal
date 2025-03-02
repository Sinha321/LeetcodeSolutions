#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

bool leaf(TreeNode* root){
    if(root->left==NULL && root->right == NULL) return true;
    return false;

    //  return !root->left && !root->right;
}
void leftboundary(TreeNode* root, vector<int>& res){
    TreeNode* temp = root;
    while(temp!=NULL){
        if(!leaf(temp)) res.push_back(temp->val);
        if(temp->left) temp = temp->left;
        else temp = temp->right;
    }
}
void leafbounadry(TreeNode* root, vector<int>& res){
    TreeNode* temp = root;
    if(leaf(temp)){
        res.push_back(temp->val);
        return;
    }
    leafbounadry(temp->left,res);
    leafbounadry(temp->right,res);
}
void rightboundary(TreeNode* root, vector<int>& res){
    TreeNode* temp = root->right;
    vector<int> vec;
    while(temp!=NULL){
        if(!leaf(temp)) res.push_back(temp->val);
        if(temp->right) temp = temp->right;
        else temp = temp->left;
    }
    for(int i = res.size()-1;i>=0;i--){
        vec.push_back(res[i]);
    }
}
vector<int> printboundary(TreeNode* root){
    vector<int> res;
    if(!root) return res;
    if(leaf(root)) res.push_back(root->val);
    leftboundary(root,res);
    leafbounadry(root,res);
    rightboundary(root,res);

    return res;
}

int main(){
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(6);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(8);
    root->right = new TreeNode(9);
    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(11);
    vector<int> result = printboundary(root);

    for(auto& it:result) cout<<it<<" ";

    // return 0;
}
