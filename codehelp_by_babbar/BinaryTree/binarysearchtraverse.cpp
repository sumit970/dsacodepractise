#include<iostream>
#include<queue>
using namespace std;



class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int> result;
        if (root==NULL){
            return result;
        }
    	// Code here
    	queue <Node*>q;
    	q.push(root);
    	bool lefttoright=true;
    while(!q.empty()){
        int size=q.size();
        vector<int> ans(size);
        
        
        for(int i=0;i<size;i++){
            Node* frontNode=q.front();
            q.pop();
            int index=lefttoright ? i:size-i-1;
            ans[index]=frontNode->data;
            
            if(frontNode->left)
            q.push(frontNode->left); 
            if(frontNode->right)
            q.push(frontNode->right);
        }
        lefttoright=!lefttoright;
        //change the direction 
        for( auto i:ans){
            result.push_back(i);
        }
        
    }	//level process
    
    return result;
    }
};



// 

//boundary traversal

class Solution 
{
public:
void traverseleft(Node* root ,vector <int> &ans){
    if((root==NULL)||(root->left==NULL && root->right==NULL))
     return;
     ans.push_back(root->data);
     if(root->left){
         traverseleft(root->left,ans);
         
     }
     else{
          traverseleft(root->right,ans);
     }
}
void traverseleaf(Node* root,vector<int>&ans){
    //base case
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return ;
    }
    traverseleaf(root->left,ans);
    traverseleaf(root->right,ans);
    
 }
void traverseRight(Node* root, vector<int>&ans){
    //base case
     if((root==NULL)||(root->left==NULL && root->right==NULL))
     return;
     if(root->right){
         traverseRight(root->right,ans);
        //  traverseRight(root->right);
     }
     else{
         traverseRight(root->left,ans);
     }
     ans.push_back(root->data);
    
    
}
 
 
 
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root== NULL){
            return ans;
        }
            ans.push_back(root->data);
            traverseleft(root->left,ans);
            
            traverseleaf(root->left,ans);
            traverseleaf(root->right,ans);
            traverseRight(root->right,ans);
        
    }
    
    //traverse leaf node 
    
}



//vertical traversal 

{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,map<int,vector<int> > >nodes;
        queue<pair<Node*,pair<int,int > > >q;
        vector <int> ans;
        
        if(root==NULL){
            return ans;
            
        }
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            pair<Node*,pair<int,int>>temp=q.front();
            q.pop();
            Node* frontNode=temp.first;
            int hd=temp.second.first;
            int lvl=temp.second.second;
            
            nodes[hd][lvl].push_back(frontNode->data);
            
            if(frontNode->left)
            {
                q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
            }
            if(frontNode->right)
            {
                q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
            }
        }
            for(auto i:nodes){
                 for(auto j:i.second){
                     for(auto k:j.second){
                         ans.push_back(k);
                     }
                 }
            }
            return ans;
        
    }
};