#include"BinaryTreeNode.h"
class BST{
    BinaryTreeNode<int>* root;

    public:
    BST()
    {
        this->root=NULL;
    }  
    ~BST()
    {
        delete root;
    }
    private:
    
    BinaryTreeNode<int>* deleteData(BinaryTreeNode<int>* root,int data)
    {
        if(root==NULL)
        {
            return NULL;
        }
        if(root->data==data)
        {
            if(root->left==NULL && root->right==NULL)
            {
                delete root;
                root=NULL;
                
            }
            if(root->right==NULL && root->left!=NULL)
            {
                BinaryTreeNode<int>* temp=root;
                root=root->left;
                delete temp;
                temp=NULL;
                
            }
            if(root->left==NULL && root->right!=NULL)
            {
                BinaryTreeNode<int>* temp=root;
                root=root->right;
                delete temp;
                temp=NULL;
                
            }
            if(root->left!=NULL && root->right!=NULL)
            {
                BinaryTreeNode<int>* temp=root->right;
                while(temp->left!=NULL)
                {
                    temp=temp->left;
                }

                int min=temp->data;

                root->data=min;
                BinaryTreeNode<int>* right=deleteData(root->right,min);
                root->right=right;
                
            }

        }
        if(root->data<=data)
        {
            BinaryTreeNode<int>* right=deleteData(root->right,data);
            root->right=right;
            
        }
        if(root->data>data)
        {
            BinaryTreeNode<int>* left=deleteData(root->left,data);
            root->left=left;
            
        }
        return root;

    }
    public:

    void deleteData(int data)
    {
        this->root=deleteData(root,data);
    }

    private:

    BinaryTreeNode<int>* insert(BinaryTreeNode<int>* root,int data)
    {
        if(root==NULL)
        {
            BinaryTreeNode<int>* newNode=new BinaryTreeNode<int>(data);
            root=newNode;
            
        }
        if(root->data>=data)
        {
            if(root->left!=NULL)
            {
                BinaryTreeNode<int>* left=insert(root->left,data);
                root->left=left;
            }
            else{
                BinaryTreeNode<int>* newNode=new BinaryTreeNode<int>(data);
                root->left=newNode;
            }
            
        }
        if(root->data<data)
        {
            if(root->right!=NULL)
            {
                BinaryTreeNode<int>* right=insert(root->right,data);
                root->right=right;
            }
            else{
                BinaryTreeNode<int>* newNode=new BinaryTreeNode<int>(data);
                root->right=newNode;
            }
            
        }
        return root;
    }

    public:
    void insert(int data)
    {
        this->root=insert(root,data);
    }
    private:

    bool hasData(int data,BinaryTreeNode<int>* root)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->data==data)
        {
            return true;
        }
        if(root->data>data)
        {
            bool left=hasData(data,root->left);
            return left;
        }
        else if(root->data<data)
        {
            bool right=hasData(data,root->right);
            return right;
        }
    } 

    void print(BinaryTreeNode<int>* root)
    {
        if (root == NULL) {
		return;
	    }
	    cout<<root->data<<":";
	    if(root->left!=NULL)
	        cout<<"L"<<":"<<root->left->data<<",";
	    if(root->right!=NULL)
	        cout<<"R"<<":"<<root->right->data;
	    cout<<endl;
    
	    print(root->left);
	    print(root->right);
    }

    public:

    bool hasData(int data)
    {
        return hasData(data,root);
    }

    void print() { 
        // Implement the print() function
        print(root);
    }
};