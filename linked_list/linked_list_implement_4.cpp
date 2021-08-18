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


Node *takeInput() {

	int data;
	std::cin >> data;
	Node *head = NULL;
	Node *tail = NULL;

	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = tail->next;
		}
		std::cin >> data;
	}
	return head;
}


void printLL(Node *head) {
	while(head != NULL) {
		std::cout << head->data << "-->";
		head = head->next;
	}
	std::cout << "NULL\n";
}


Node *insertIthPos(Node *head, int pos, int data) {

	Node *newNode = new Node(data);
	if(pos == 0) {
		newNode->next = head;
		head = newNode;
		return head;
	}

	int count = 0;
	Node *curr = head;
	while(count < pos - 1) {
		curr = curr->next;
		count++;
	}
	if(curr != NULL) {
		newNode->next = curr->next;
		curr->next = newNode;
	}	
	return head;
}


Node *deleteIthPos(Node *head, int pos) {

	Node *curr = head;
	Node *prev = NULL;
	int count = 0;

	if(pos == 0) {
		head = curr->next;
		delete(curr);
	}
	else {
		while(pos != count) {
			prev = curr;
			curr = curr->next;
			count++;
		}
		if(curr != NULL) {
			prev->next = curr->next;
			delete(curr);
		}
	}
	return head;
}


Node *oddEvenLL(Node *head) {

	if(head == NULL) return NULL;

	Node *oddHead = NULL;
	Node *oddTail = NULL;
	
	Node *evenHead = NULL;
	Node *evenTail = NULL;

	Node *curr = head;
	bool isOdd = true;
	while(curr != NULL) {
		if(isOdd) {
			if(oddHead == NULL) {
				oddHead = oddTail = curr;
			}
			else {
				oddTail->next = curr;
				oddTail = oddTail->next;
			}
			curr = curr->next;
			oddTail->next = NULL;
		}
		else {
			if(evenHead == NULL) {
				evenHead = evenTail = curr;
			}
			else {
				evenTail->next = curr;
				evenTail = evenTail->next;
			}
			curr = curr->next;
			evenTail->next = NULL;
		}
		isOdd = !isOdd;
	}
	oddTail->next = evenHead;
	return oddHead;

}


Node *mergeLL(Node *head1, Node *head2) {

	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;

	Node *tmpHead;

	if(head1->data < head2->data) {
		tmpHead = head1;
		tmpHead->next = mergeLL(head1->next, head2);
	}
	else {
		tmpHead = head2;
		tmpHead->next = mergeLL(head1, head2->next);
	}
	return tmpHead;
}




int main() {

	Node *head = takeInput();
	printLL(head);
	
	std::cout << "Inserting Pos........................\n";
	Node *head1 = insertIthPos(head, 0, 2000);
	printLL(head1);
	Node *head2 = insertIthPos(head1, 4, 3000);
	printLL(head2);
	std::cout << '\n';

	std::cout << "Deleting Pos..........................\n";
	Node *head3 = deleteIthPos(head2, 0);
	printLL(head3);
	Node *head4 = deleteIthPos(head3, 4);
	printLL(head4);
	std::cout << '\n';

	std::cout << "ODD EVEN DISTRIBUTE.....................\n";
	Node *head5 = oddEvenLL(head4);
	printLL(head5);

	std::cout << "Merging Head1 And Head2 LinkedList In Sorted Order.......\n";
	Node *head6 = takeInput();
	Node *head7 = takeInput();
	Node *head8 = mergeLL(head6, head7);
	printLL(head7);

	return 0;
}