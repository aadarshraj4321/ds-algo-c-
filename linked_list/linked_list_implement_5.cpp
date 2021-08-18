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
	int userData;
	std::cin >> userData;
	Node *head = NULL;
	Node *tail = NULL;

	while(userData != -1) {
		Node *newNode = new Node(userData);
		if(head == NULL) {
			head = tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = tail->next;
		}
		std::cin >> userData;
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


Node *mergeLL(Node *head1, Node *head2) {

	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1; 

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


Node *evenOdd(Node *head) {

	if(head == NULL) return NULL;

	Node *evenHead = NULL;
	Node *evenTail = NULL;

	Node *oddHead = NULL;
	Node *oddTail = NULL;

	Node *tmp = head;
	bool isOdd = true;

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


int midNodeLL(Node *head) {

	Node *slow = head;
	Node *fast = head->next;
	int midData = 0;

	if(head != NULL) {
		while(fast != NULL && fast->next != NULL) {
			slow = slow->next;
			fast = fast->next->next;
		}
		midData = slow->data;
	}
	return midData;

}

Node *mergeLLIter(Node *head1, Node *head2) {

	Node *firstHead = NULL, *firstTail = NULL;
	while(head1 != NULL && head2 != NULL) {
		if(head1->data < head2->data) {
			if(firstHead == NULL) {
				firstHead = head1;
				firstTail = head1;
			}
			else {
				firstTail->next = head1;
				firstTail = head1;
			}
			head1 = head1->next;
		}
		else {
			if(firstHead == NULL) {
				firstHead = head2;
				firstTail = head2;
			}
			else {
				firstTail->next = head2;
				firstTail = head2;
			}
			head2 = head2->next;
		}
	}
	if(head1 != NULL) {
		firstTail->next = head1;
	}
	if(head2 != NULL) {
		firstTail->next = head2;
	}
	return firstHead;

}


Node *mergeTwoLLIter(Node *head1, Node *head2) {


	Node *head = NULL;
	Node *tail = NULL;

	while(head1 != NULL && head2 != NULL) {
		if(head1->data < head2->data) {
			if(head == NULL) {
				head = tail = head1;
			}
			else {
				tail->next = head1;
				tail = head1;
			}
			head1 = head1->next;
		}
		else {
			if(head == NULL) {
				head = tail = head2;
			}
			else {
				tail->next = head2;
				tail = head2;
			}
			head2 = head2->next;
		}
	}

	if(head1 != NULL) {
		tail->next = head1;
	}
	if(head2 != NULL) {
		tail->next = head2;
	}
	return head;
}


// void palindromeString(std::string s) {

// 	std::string s1;
// 	for(int i = s.size() - 1; i >= 0; i--) {
// 		s1 += s[i];
// 	}

// 	if(s == s1) std::cout << "This string is palindrome\n";
// 	else std::cout << "This string is not palindrome\n";
// }

// bool palindromeRec(int l, int r) {

// 	std::string s = "madam";
// 	if(l > r) {
// 		return true;
// 	}

// 	if(s[l] != s[r]) {
// 		return false;
// 	}
// 	return palindromeRec(l + 1, r - 1);

// }


// int linearSearch(std::vector<int>&arr, int i, int target) {

// 	if(i > arr.size()) {
// 		return -1;
// 	}

// 	if(arr[i] == target) return i;
// 	return linearSearch(arr, i + 1, target);
// }


int main() {

	// std::vector<int>arr = {1, 2, 3, 4, 5, 6, 8, 8, 7, 10, 11, 12};
	// std::cout << linearSearch(arr, 0, 7) << '\n';

	// std::string s = "madam";
	// int left = 0;
	// int right = s.size() - 1;
	// if(palindromeRec(left, right)) std::cout << "YES palindrome\n";
	// else std::cout << "Not palindrome\n";




	Node *head1 = takeInput();
	printLL(head1);
	Node *head2 = takeInput();
	printLL(head2);

	std::cout << '\n';
	std::cout << "--------MergeLLL--------\n";
	Node *head3 = mergeLL(head1, head2);
	printLL(head3);

	std::cout << '\n';
	std::cout << "--------Arrange Even Odd--------\n";
	Node *head4 = evenOdd(head3);
	printLL(head4);

	std::cout << '\n';
	std::cout << "----MidNode LL-------\n";
	std::cout << midNodeLL(head4) << '\n';

	std::cout << '\n';
	std::cout << "------Merge Two LL---------------\n";
	Node *head5 = takeInput();
	Node *head6 = takeInput();
	Node *head7 = mergeTwoLLIter(head5, head6);
	printLL(head7);

	return 0;
}