#include<bits/stdc++.h>
#include<stack>
using namespace std;


void findNextGreater(vector<int>&arr){

	stack<int>s;
	vector<int>arr1(arr.size(), 0);
	for(int i = arr.size() - 1; i >= 0; i--){
		while(!s.empty() && s.top() <= arr[i]){
			s.pop();
		}
		if(s.empty()){
			arr1[i] = -1;
		}
		else{
			arr1[i] = s.top();
		}

		s.push(arr[i]);
	}
	for(int i = 0; i < arr1.size(); i++){
		std::cout << arr1[i] << " ";
	}
}


int main(){

	vector<int>arr = {4, 5, 2, 25};
	findNextGreater(arr);

	return 0;
}