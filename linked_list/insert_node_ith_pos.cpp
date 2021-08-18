#include<bits/stdc++.h>


class Node{
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

Node *insertIthNode(Node *head, int pos, int data){

	Node *newNode = new Node(data);
	int count = 0;
	Node *tmp = head;

	if(pos == 0){
		newNode->next = head;
		head = newNode;
		return head;
	}
	while(count < pos - 1){
		tmp = tmp->next;
		count++;
	}
	if(tmp != NULL){
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	return head;
}


int main(){

	Node *head = takeInput();
	printLL(head);
	std::cout << '\n';
	int pos, data;
	std::cin >> pos >> data;
	head = insertIthNode(head, pos, data);
	printLL(head);

	return 0;
}