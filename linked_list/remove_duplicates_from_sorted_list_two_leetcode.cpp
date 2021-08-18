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


Node *removeDuplicateTwo(Node *head) {

	if(head == NULL || head->next == NULL) {
        return head;
    }
   	std::map<int, int>mp;
   	Node *curr = head;
    Node *head1 = NULL;
    Node *tail = NULL;
   	while(curr != NULL) {
        mp[curr->data]++;
        curr = curr->next;
    }

    while(head != NULL) {
    	if(mp[head->data] == 1) {
        	Node *newNode = new Node(head->data);
        	if(head1 == NULL)
        		head1 = tail = newNode;
        	else {
        		tail->next = newNode;
        		tail = newNode;
        	}
        }
        head = head->next;
    }

    return head1;
}




Node *takeInput() {
	int data;
	std::cin >> data;

	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		std::cin >> data;
	}
	return head;
}


void printLL(Node *head) {
	Node *curr = head;
	while(curr != NULL) {
		std::cout << curr->data << "-->";
		curr = curr->next;
	}
	std::cout << "NULL\n";
}


int main() {

	Node *head = takeInput();
	printLL(head);
	Node *head2 = removeDuplicateTwo(head);
	printLL(head2);


	return 0;
}