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

Node *reverseLLRec(Node *head){
	//base case
	if(head == NULL || head->next == NULL){
		return head;
	}

	Node *smallHead = reverseLLRec(head->next);
	head->next->next = head;
	head->next = NULL;
	return smallHead;
}





int main(){

	Node *head = takeInput();
	printLL(head);
	head = reverseLLRec(head);
	printLL(head);

	return 0;
}