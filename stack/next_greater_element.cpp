#include<bits/stdc++.h>
#include<stack>
using namespace std;


void nextGreater(vector<int>arr){

	vector<int>arr1(arr.size(), 0);
	for(int i = 0; i < arr.size(); i++){
		for(int j = i + 1; j < arr.size(); j++){
			if(arr[i] < arr[j]){
				arr1[i] = arr[j];
				break;
			}
		}
		if(arr1[i] == 0){
			arr1[i] = -1;
		}
	}

	for(int i = 0; i < arr1.size(); i++){
		std::cout << arr1[i] << " ";
	}
}


int main(){

	vector<int>arr = {13, 7, 6, 11, 12, 14, 15};

	nextGreater(arr);

	return 0;
}