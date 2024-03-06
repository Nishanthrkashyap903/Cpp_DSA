#include <iostream>
#include "TreeNode.h"
#include <queue>
using namespace std;
TreeNode<int> *takeInputlevelWise()
{
	int rootData;
	cout << "Enter the root data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	queue<TreeNode<int> *> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0)
	{
		int n;
		TreeNode<int>* front=pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter the number of children of:" <<front->data<< endl;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int childData;
			cout << "Enter the " << i << "th child of"<<front->data<<endl;
            cin>>childData;
			//statically allocated will be removed and will not survive after one iteration
			/*
			TreeNode<int> child(childData)
			front->children.push_back(&child)
			*/
			
			//so dynamically allocated
			TreeNode<int>* child=new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

TreeNode<int> *takeInput()
{
	int rootData;
	cout << "Enter data" << endl;
	cin >> rootData;
	TreeNode<int> *root = new TreeNode<int>(rootData);
	int n;
	cout << "Enter the number of children:" << rootData << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		TreeNode<int> *children = takeInput();
		root->children.push_back(children);
	}
	return root;
}
void printAtLevelK(TreeNode<int>* root,int k)
{
	if(root==NULL)
	{
		return;
	}
	if(k==0)
	{
		cout<<root->data<<endl;
		return;
	}
	for(int i=0;i<root->children.size();i++)
	{
		printAtLevelK(root->children[i],k-1);
	}

}
int countLeafNodes(TreeNode<int>* root)
{
	int count=0;
	if(root==NULL)
	{
		return 0;
	}
	if(root->children.size()==0)
	{
		return 1;
	}
	for(int i=0;i<root->children.size();i++)
	{
		count=count+countLeafNodes(root->children[i]);
	}
	return count;
}
int countNodes(TreeNode<int> *root)
{
	int num=0;
	for(int i=0;i<root->children.size();i++)
	{
		num=num+countNodes(root->children[i]);
	}
	return num+1;
}
void printTree(TreeNode<int> *root)
{
	if (root == NULL) // edge case not base case
	{
		return;
	}
	cout << root->data << ":";
	for (int i = 0; i < root->children.size(); i++)
	{
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for (int i = 0; i < root->children.size(); i++)
	{
		printTree(root->children[i]);
	}
}
void deleteTree(TreeNode<int> *root)
{
	for(int i=0;i<root->children.size();i++)
	{
		deleteTree(root->children[i]);
	}
	delete root;
}
int main()
{
    // TreeNode<int>* root = new TreeNode<int>(1);
	// TreeNode<int>* node1 = new TreeNode<int>(2);
	// TreeNode<int>* node2 = new TreeNode<int>(3);
	// TreeNode<int>* node3 = new TreeNode<int>(4);
	// TreeNode<int>* node4 = new TreeNode<int>(5);

	// root->children.push_back(node1);
	// root->children.push_back(node2);
	// node1->children.push_back(node3);
	// node1->children.push_back(node4);
	TreeNode<int> *root = takeInputlevelWise();
	printTree(root);
	cout<<"Number of nodes:"<<countNodes(root)<<endl;
	printAtLevelK(root,2);
	cout<<"Number of leaf nodes:"<<countLeafNodes(root)<<endl;
	// TODO delete the tree
	delete root;
	//deleteTree(root);	
}