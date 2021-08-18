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


Node *deleteIthPos(Node *head, int pos){
	Node *tmp = head;
	Node *prev = NULL;
	int count = 0;

	if(pos == 0){
		head = tmp->next;
		delete(tmp);
	}
	else{
		while(pos != count){
			prev = tmp;
			tmp = tmp->next;
			count++;
		}
		if(tmp != NULL){
			prev->next = tmp->next;
			delete(tmp);
		}
	}
	return head;
}


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


int main(){

	Node *head = takeInput();
	printLL(head);
	head = deleteIthPos(head, 0);
	printLL(head);
	head = deleteIthPos(head, 2);
	printLL(head);
	return 0;
}