#include <iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput(){
	int data;
	cin>>data;

	Node* head=NULL;
	while(data!=-1)
	{
		Node *newNode=new Node(data);

		if(head==NULL)
		{
			head=newNode;
		}
		else{
			Node* temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newNode;
		}
		cin>>data;
	}
}

Node* takeInputBetter()
{
	int data;
	cin>>data;

    Node* head=NULL;
	Node* tail=NULL;

	while(data!=-1)
	{
		Node* newNode=new Node(data);
		if(head==NULL)
		{
			head=newNode;
		}
		else{
			tail->next=newNode;
		}
		
		tail=newNode;
		cin>>data;
	}
}

Node* insertNode(Node* head,int i,int data){
	Node* newNode=new Node(data);
	if(i==0)
	{
		newNode->next=head;
		head=newNode;
		return head;
	}

	Node* temp=head;
	int count=0;

	while(count<i-1 && temp!=NULL){
		temp=temp->next;
		count++;
	}

    if(temp!=NULL)
	{
	    newNode->next=temp->next;
	    temp->next=newNode;
	}
	return head;
}

int main(){
	Node* head=takeInputBetter();
	int i,data;
	cin>>i>>data;
	head=insertNode(head,i,data);
}