#include <iostream>
#include "BinaryTreeNode.h"
#include<queue>
using namespace std;

void printTree(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout<<root->data<<":";
	if(root->left!=NULL)
	    cout<<"L"<<root->left->data<<" ";
	if(root->right!=NULL)
	    cout<<"R"<<root->right->data<<" ";
	cout<<endl;

	printTree(root->left);
	printTree(root->right);
}
int countNodes(BinaryTreeNode<int>* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int countleft=countNodes(root->left);
	int countright=countNodes(root->right);
	return countleft+countright+1;
}
int height(BinaryTreeNode<int>* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return 1+max(height(root->left),height(root->right));
}

pair<int,int> height_diameter(BinaryTreeNode<int>* root)
{
	if(root==NULL)
	{
		pair<int,int> p;
		p.first=0;
        p.second=0;
		return p;
	}
	pair<int,int> left=height_diameter(root->left);
	pair<int,int> right=height_diameter(root->right);

	int ld=left.second;
	int rd=right.second;
	int lh=left.first;
	int rh=right.first;

	pair<int,int> ans;

	ans.first=1+max(rh,lh);
	ans.second=max(rh+lh,max(ld,rd)); 

	return ans;
}
int diameter(BinaryTreeNode<int>* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int option1=height(root->left)+height(root->right);
	int option2=diameter(root->left);
	int option3=diameter(root->right);
	return max(option1,max(option2,option3));
}
BinaryTreeNode<int>* takeInputLevelWise(){
	int rootData;
	cout<<"Enter the root Data"<<endl;
	cin>>rootData;
	if(rootData==-1)
	{
		return NULL;
	}
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size()!= 0)
	{
		BinaryTreeNode<int>* front=pendingNodes.front();
		pendingNodes.pop();
		int leftData;
		cout<<"Enter the left child data:"<<endl;
		cin>>leftData;
		if(leftData!=-1)
		{
			BinaryTreeNode<int>* newnode=new BinaryTreeNode<int>(leftData);
            front->left=newnode;
			pendingNodes.push(newnode);
		}
		int rightData;
		cout<<"Enter the right child data:"<<endl;
		cin>>rightData;
		if(rightData!=-1)
		{
			BinaryTreeNode<int>* newnode=new BinaryTreeNode<int>(rightData);
			front->right=newnode;
			pendingNodes.push(newnode);
		}
	}
	return root;
}
BinaryTreeNode<int>* takeInput() {
	int rootData;
	cout<<"Enter root data :"<<endl;
	cin>>rootData;
	if(rootData==-1)
	{
		return NULL;
	}
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftchild=takeInput();
	BinaryTreeNode<int>* rightchild=takeInput();
	root->left=leftchild; 
	root->right=rightchild;
	return root;
}

int main() {
	/*BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
	BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
	BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
	root->left = node1;
	root->right = node2;
	*/
	BinaryTreeNode<int>* root = takeInputLevelWise();
	printTree(root);
	cout<<"Count of nodes:"<<countNodes(root)<<endl;

	pair<int,int> ans=height_diameter(root);

	cout<<"Height of the tree:"<<ans.first<<endl;
	cout<<"Diameter of the tree:"<<ans.second<<endl;
	delete root;
}

