#include<bits/stdc++.h>


class Node {
	public:
	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		next = NULL;
	}
};



Node *mergeLL(Node *head1, Node *head2) {

	if(head1 == NULL){
		return head2;
	}
	if(head2 == NULL) {
		return head1;
	}

	Node *head3;
	if(head1->data < head2->data) {
		head3 = head1;
		head3->next = mergeLL(head1->next, head2);
	}
	else {
		head3 = head2;
		head3->next = mergeLL(head1, head2->next);
	}
	return head3;
}




Node *takeInput() {
	int data;
	std::cin >> data;
	Node *head = NULL;
	Node *tail = NULL;

	while(data != -1) {
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


void printLL(Node *head) {
	while(head != NULL){
		std::cout << head->data << "-->";
		head = head->next;
	}
	std::cout << "NULL\n";
}


int main(){

	Node *head = takeInput();
	std::cout << "head 1-----\n";
	printLL(head);
	Node *head1 = takeInput();
	std::cout << "head 2-----\n";
	printLL(head1);
	std::cout << "head3 which Merge Both Head And Head1 In Sorted Order\n";
	Node *head3 = mergeLL(head, head1);
	printLL(head3);


	return 0;
}