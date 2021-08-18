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



Node *oddEvenList(Node *head){
	if(head == NULL) return NULL;

	Node *oddHead = NULL;
	Node *oddTail = NULL;
	Node *evenHead = NULL;
	Node *evenTail = NULL;
	Node *tmp = head;
	bool isOdd = true;
	while(tmp != NULL){
		if(isOdd){
			if(oddHead == NULL){
				oddHead = oddTail = tmp;
			}
			else{
				oddTail->next = tmp;
				oddTail = tmp;
			}
			tmp = tmp->next;
			oddTail->next = NULL;
		}
		else{
			if(evenHead == NULL){
				evenHead = evenTail = tmp;
			}
			else{
				evenTail->next = tmp;
				evenTail = tmp;
			}
			tmp = tmp->next;
			evenTail->next = NULL;
		}
		isOdd = !isOdd;
	}
	oddTail->next = evenHead;
	return oddHead;
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
	head = oddEvenList(head);
	printLL(head);

	return 0;
}