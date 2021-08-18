#include<bits/stdc++.h>



void printSpiralDisplay(std::vector<std::vector<int>>&arr, int n, int m){

	int rowMin = 0;
	int rowMax = arr.size() - 1;
	int colMin = 0;
	int colMax = arr[0].size() - 1;

	int numOfEle = arr.size() * arr[0].size();
	int counter = 0;
	while(counter < numOfEle){
		// first col
		for(int row = rowMin; counter < numOfEle && row <= rowMax; row++){
			std::cout << arr[row][colMin] << " ";
			counter++;
		}
		colMin++;

		// last row
		for(int col = colMin; counter < numOfEle && col <= colMax; col++){
			std::cout << arr[rowMax][col] << " ";
			counter++;
		}
		rowMax--;

		// last col
		for(int row = rowMax; counter < numOfEle && row >= rowMin; row--){
			std::cout << arr[row][colMax] << " ";
			counter++;
		}
		colMax--;

		// first row
		for(int col = colMax; counter < numOfEle && col >= colMin; col--){
			std::cout << arr[rowMin][col] << " ";
			counter++;
		}
		rowMin++;
	}
}


int main(){

	int n, m;
	std::cin >> n >> m;

	std::vector<std::vector<int>>arr;
	for(int i = 0; i < n; i++){
		std::vector<int>tmp;
		for(int j = 0; j < m; j++){
			int x;
			std::cin >> x;
			tmp.push_back(x);
		}
		arr.push_back(tmp);
	}

	printSpiralDisplay(arr, n, m);

	return 0;
}