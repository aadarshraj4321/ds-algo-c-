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


Node *oddEven(Node *head) {

	if(head == NULL) {
		return NULL;
	}

	Node *oddHead = NULL;
	Node *oddTail = NULL;
	Node *evenHead = NULL;
	Node *evenTail = NULL;

	bool isOdd = true;
	Node *tmp = head;
	while(tmp != NULL) {
		if(isOdd) {
			if(oddHead == NULL) {
				oddHead = oddTail = tmp;
			}
			else {
				oddTail->next = tmp;
				oddTail = tmp;
			}
			tmp = tmp->next;
			oddTail->next = NULL;
		}
		else {
			if(evenHead == NULL) {
				evenHead = evenTail = tmp;
			}
			else {
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


Node *mergeLL(Node *head1, Node *head2) {
	if(head1 == NULL) {
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


Node *insertIthPos(Node *head, int pos, int data) {
	Node *newNode = new Node(data);
	if(pos == 0) {
		newNode->next = head;
		head = newNode;
		return head;
	}
	Node *tmp = head;
	int count = 0;
	while(count < pos - 1) {
		tmp = tmp->next;
		count++;
	}
	if(tmp != NULL) {
		newNode->next = tmp->next;
		tmp->next = newNode;
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




int main() {

	Node *head1 = takeInput();
	printLL(head1);
	Node *head2 = oddEven(head1);
	printLL(head2);
	// std::cout << "Waiting..........";
	Node *newHead32 = takeInput();
	Node *head3 = mergeLL(head1, newHead32);
	printLL(head3);

	std::cout << "Inserting........\n";
	Node *head4 = insertIthPos(head1, 0, 2000);
	printLL(head4);
	Node *head5 = insertIthPos(head4, 6, 4000);
	printLL(head5);
	std::cout << "Inserting Complete.......\n";
	std::cout << "deteleting processing start......\n";
	Node *head6 = deleteIthPos(head5, 0);
	printLL(head6);
	Node *head7 = deleteIthPos(head6, 4);
	printLL(head7);

	return 0;
}