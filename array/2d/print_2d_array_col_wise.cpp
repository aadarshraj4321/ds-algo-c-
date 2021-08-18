#include<bits/stdc++.h>
using namespace std;

void printVertical(std::vector<std::vector<int>>&arr, int n, int m){
	for(int i = 0; i < arr[0].size(); i++){
		for(int j = 0; j < arr.size(); j++){
			std::cout << arr[j][i] << " ";
		}
	}
}

int main(){

	int n, m;
	std::cin >> n >> m;
	std::vector<std::vector<int>>arr(n);

	for(int i = 0; i < n; i++){
		std::vector<int>tmpArray;
		for(int i = 0; i < m; i++){
			int x;
			std::cin >> x;
			tmpArray.push_back(x);
		}
		arr.push_back(tmpArray);
	}

	// // print row wise
	// for(auto &row: arr){
	// 	for(auto &col: row){
	// 		std::cout << col << " ";
	// 	}
	// 	std::cout << '\n';
	// }

	// std::cout << '\n';



	// print col wise
	printVertical(arr, n, m);
	return 0;
}