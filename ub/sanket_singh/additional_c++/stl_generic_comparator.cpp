#include<bits/stdc++.h>


class Product {

	public:
	std::string name;
	int price;
	std::string desc;

	Product() {};


	Product(std::string name, int price, std::string desc) {
		this->name = name;
		this->price = price;
		this->desc = desc;
	}

	void display() {
		std::cout << name << " " << desc << " " << price << '\n';
	}

	bool operator < (const Product &p) const {
		return this->price < p.price;
	}

};


// bool cmp(Product &p1, Product &p2) {
// 	return p1.price > p2.price;
// }


void bubbleSort(std::vector<Product>&v) {
	int n = v.size();
	for(int i = 0; i < n - 1; i++) {
		bool isSorted = true;
		for(int j = 0; j < n - 1; j++) {
			if(v[j + 1] < v[j]) {
				std::swap(v[j], v[j + 1]);
				isSorted = false;
			}
		}
		if(isSorted) break;
	}
}


int main() {

	int n;
	std::cin >> n;
	std::vector<Product>arr;

	while(n--) {
		std::string name, desc;
		int price;
		std::cin >> name >> desc >> price;
		//Product p(name, price, desc);
		arr.emplace_back(name, price, desc);
	}

	//std::sort(arr.begin(), arr.end(), [](Product &p1, Product &p2) {return p1.price < p2.price;});
	std::sort(arr.begin(), arr.end());
	for(auto &it: arr) {
		it.display();
	}

	return 0;
}