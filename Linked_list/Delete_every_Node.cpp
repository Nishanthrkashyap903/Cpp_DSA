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

Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
	if(head==NULL) //empty LL
	{
		return head;
	}
	if(M==0)
	{
		Node* temp=head;
		while(head!=NULL)
		{
			head=head->next;
			delete temp;
			temp=head;
		}
		return temp;
	}
    Node *t1 = head;
    Node *t2;
    while(t1!=NULL && t2!=NULL)
	{
		int c1=1;
		int c2=1;
		while(c1!=M)
		{
			if(t1==NULL)
			{
				return head;
			}
			t1=t1->next;
			c1++;
		}
        t2 = t1->next;

		Node* t3;
        while(c2!=N)
		{
			if(t2==NULL)
			{
				t1->next=NULL;
				return head;
			}
			t3=t2->next;
			delete t2;
			t2=t3;
			c2++;
		}
		t3=t2->next;
		delete t2;
        t2=t3;
		//link 
		t1->next=t2;

		t1=t2;
		
	}
	return head;
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
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}