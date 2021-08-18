#include<bits/stdc++.h>


void printWaveDisplay(std::vector<std::vector<int>>&arr, int n, int m){

	for(int i = 0; i < arr[0].size(); i++){
		if(i % 2 == 0){
			for(int j = 0; j < arr.size(); j++){
				std::cout << arr[j][i] << " ";
			}
		}
		else{
			for(int j = arr.size() - 1; j >= 0; j--){
				std::cout << arr[j][i] << " ";
			}
		}
		std::cout << '\n';
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

	printWaveDisplay(arr, n, m);

	return 0;
}