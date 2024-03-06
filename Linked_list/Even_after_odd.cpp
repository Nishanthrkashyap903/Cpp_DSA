#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

using namespace std;
Node *evenAfterOdd(Node *head)
{
	//write your code here
	Node* oh=NULL;
	Node* ot=NULL;
	Node* eh=NULL;
	Node* et=NULL;
	//for empty element
	if(head==NULL)
	{
		return head;
	}
	
	while(head!=NULL)
	{
          if (head->data % 2 != 0)  //odd
		  {
            if (oh == NULL && ot == NULL) {
              oh = head;
              ot = oh;
            }
            ot->next=head;
			ot=ot->next;
             
          }
		  else //even
		  {
            if (eh == NULL && et == NULL ) {
              eh = head;
              et = eh;
            }
			et->next=head;
			et=et->next;

          }
		  
          head = head->next;
		  if(head==NULL) //for putting NULL to the last element
		  {
			 if(oh==NULL && ot==NULL) //for only even elements
			 {
				 et->next=NULL;
				 return eh;
			 }
			 if(eh==NULL && et==NULL) //for only odd elements
			 {
				 ot->next=NULL;
				 return oh;
			 }
			 else{
				 ot->next=NULL;
				 et->next=NULL;
			 }
		  }
    }
    //joining odd and even LL
	ot->next=eh;
	return oh;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}