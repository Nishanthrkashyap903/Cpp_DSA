#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;

BinaryTreeNode<int>* takeInputLevelWise() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChildData;
		cin >> leftChildData;
		if (leftChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}
		cout << "Enter right child of " << front->data << endl;
		int rightChildData;
		cin >> rightChildData;
		if (rightChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
			front->right = child;
			pendingNodes.push(child);
		}
	}
	return root;
}
vector<int>* getRootToNodePath(BinaryTreeNode<int>* root,int data)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data==data)
	{
		vector<int>* output=new vector<int>();
		output->push_back(data);
		return output;
	}
	vector<int>* left=getRootToNodePath(root->left,data);
	
	if(left!=NULL)
	{
		left->push_back(root->data);
		return left;
	}
	vector<int>* right=getRootToNodePath(root->right,data);
	if(right!=NULL)
	{
		right->push_back(root->data);
		return right;
	}
	else{
		return NULL;
	}
}
int main() {
	BinaryTreeNode<int>* root = takeInputLevelWise();
	vector<int>* output=getRootToNodePath(root,6);
	for(int i=0;i<output->size();i++)
	{
		cout<<output->at(i)<<" ";
	}
	delete output;
	delete root;
}