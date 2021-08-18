#include<bits/stdc++.h>

class Node {
	
	public:
	int data;
	Node *next;

	Node(int data){
		this->data = data;
		next = NULL;
	}
};

Node *takeInput(){
	int data;
	std::cin >> data;
	Node *head = NULL;
	Node *tail = NULL;

	while(data != -1){
		Node *newNode = new Node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = tail->next;
		}
		std::cin >> data;
	}
	return head;
}


void printLL(Node *head){
	while(head != NULL){
		std::cout << head->data << "-->";
		head = head->next;
	}
	std::cout << "NULL\n";
}

Node *insertIthPos(Node *head, int pos, int data){

	Node *newNode = new Node(data);
	if(pos == 0){
		newNode->next = head;
		head = newNode;
		return head;
	}

	int count = 0;
	Node *curr = head;
	while(count < pos - 1){
		curr = curr->next;
		count++;
	}
	if(curr != NULL){
		newNode->next = curr->next;
		curr->next = newNode;
	}
	return head;
}


int main(){

	Node *head = takeInput();
	printLL(head);
	head = insertIthPos(head, 0, 5000);
	printLL(head);
	head = insertIthPos(head, 10, 4000);
	printLL(head);

	return 0;
}