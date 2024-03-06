#include <iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput_Better() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			tail = tail -> next;
			// OR
			// tail = newNode;
		}

		cin >> data;
	}
	return head;
}


Node* insertNode(Node *head, int i, int data) {
	Node *newNode = new Node(data);
	int count = 0;
	Node *temp = head;

	if(i == 0) { //Insertion at the 0 th index 
		newNode -> next = head;
		head = newNode;
        cout<<"head in function"<<head<<endl;
		return head;   //change the head
	}

	while(temp != NULL && count < i - 1) { //traverse the temp to i-1 th index
		temp = temp -> next;
		count++;
	}
	
	if(temp != NULL) { //connect the new node 
		Node *a = temp -> next;
		temp -> next = newNode;
		newNode -> next = a;
	}
	return head;
}

void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}

int main() {

	Node *head = takeInput_Better();
	print(head);
	int i, data;
	cin >> i >> data;
	head=insertNode(head, i, data);
	print(head);
}

