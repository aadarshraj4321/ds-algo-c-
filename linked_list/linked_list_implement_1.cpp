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


int main(){


	Node n1(2);
	Node n2(3);
	Node n3(4);


	Node *head1 = &n1;
	n1.next = &n2;
	n2.next = &n3;

	std::cout << n1.data << " ";
	std::cout << n2.data << " ";

	return 0;
}