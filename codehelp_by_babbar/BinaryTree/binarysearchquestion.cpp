#include <iostream>
#include <queue>
using namespace std;




class Solution {
    private:
      int height(struct Node* node){
        // code here 
        if (node==NULL){
            return 0;
        }
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right)+1;
        return ans;
    }
    
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        
        if(root==NULL){
            return 0;
        }
        
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left)+1+height(root->right);
        int ans=max(op1, max(op2,op3));
        return ans;
        
    }
};



public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int>diameterFast(Node* root){
        if(root==NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        pair<int,int> left= diameterFast(root->left);
        pair<int,int> right= diameterFast(root->right);
        
        int op1= left.first;
        int op2= right.first;
        int op3= left.second + right.second + 1;
        
        pair<int,int> ans;
        
        ans.first=max(op1, max(op2,op3));
        ans.second=max(left.second , right.second)+1;
        return ans;
    }
    
    
    int diameter(Node* root) {
        // Your code here
        
        return diameterFast(root).first;
        
    }



//check for balanced TREE
class Solution{
    
    //  private:
    // //Function to find the height of a binary tree.
    // int height(struct Node* node){
    //     // code here 
    //     if (node==NULL){
    //         return 0;
    //     }
    //     int left=height(node->left);
    //     int right=height(node->right);
    //     int ans=max(left,right)+1;
    //     return ans;
        
    // }
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool,int> isBalancdfast(Node *root){
        
          if(root==NULL){
              pair<bool,int>p=make_pair(true,0);
           return p;
        
        }
        
        pair<bool,int> left=isBalancdfast(root->left);
        pair<bool,int> right=isBalancdfast(root->right);
         bool leftans=left.first;
         bool rightans=right.first;
         
         
         
         bool diff=abs(left.second-right.second)<=1;
         pair<bool,int>ans;
         ans.second=max(left.second,right.second)+1;
         if(leftans && rightans && diff){
             ans.first=true;
             
         }
         else{
              ans.first=false;
         }
         return ans;
        //  Your Code here
        
    }
    bool isBalanced(Node *root)
    {
        return isBalancdfast(root).first;
       
        //  Your Code here
    }
};




///sum tree 

class Solution
{
    public:
    
    pair<bool,int> issumtreefast(Node* root){
        //base ca
        if (root == NULL){
           
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        
        // if it is  leaf node
        if(root->left==NULL && root->right ==NULL){
            
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
        pair<bool,int> leftans=issumtreefast(root->left);
        pair<bool,int> rightans=issumtreefast(root->right);
        
        bool left =leftans.first;
        bool right =rightans.first;
        bool condn=root->data==leftans.second+rightans.second;
        pair<bool,int> ans;
        if(left && right && condn){
            ans.first=true;
            ans.second=2*root->data;
        }
        else{
            ans.first=false;
        }
        return ans;
        
    }
    
    
    
    bool isSumTree(Node* root)
    {
         // Your code here
         return  issumtreefast(root).first;
    }