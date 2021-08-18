#include<bits/stdc++.h>


bool comp(std::pair<int, int>p, std::pair<int, int>p1) {
	if(p.first < p1.first) {
		return true;
	}

	else if(p.first == p1.first && p.second > p1.second) {
		return true;
	}
	return false;
}


int main() {

	 std::ios_base::sync_with_stdio(false);
	 std::cin.tie(NULL);

	 std::cout << "Hello World\n";

	 std::vector<int>vec;
	 vec.push_back(1);
	 std::cout << sizeof(vec) << " " << vec.size() << '\n';
	 vec.push_back(2);
	 std::cout << sizeof(vec) << " " << vec.size() << '\n';

	 vec.emplace_back(30);
	 vec.emplace_back(40);
	 std::cout << sizeof(vec) << " " << vec.size() << '\n';

	 std::vector<int>h;
	 for(int i = 0; i < 10; i++) h.push_back(i);
	 std::cout << sizeof(h) << " " << h.size() << '\n';

	std::vector<int>v(5, 0);
	std::cout << sizeof(v) << " " << v.size() << '\n';

	std::cout << "------------\n";

	// 2D vector
	int a[4][5];
	std::vector<std::vector<int>>v1(5, std::vector<int>(5, 0));
	//std::cout << sizeof(v1) << " " << v1.size() << '\n';

	for(int i = 0; i < v1.size(); i++) {
		for(int j = 0; j < v1[0].size(); j++) {
			std::cout << v1[i][j] << " ";
		}
		std::cout << '\n';
	}
	std::cout << '\n';
	std::cout << v1[0][3] << '\n';
	std::cout << "-----------------\n";

	std::vector<std::vector<int>>v2(10, std::vector<int>(25, 0));

	for(int i = 0; i < v2.size(); i++) {
		for(int j = 0; j < v2[0].size(); j++) {
			std::cout << v2[i][j] << " ";
		}
		std::cout << '\n';
	}

	std::cout << '\n';
	std::cout << "----------------Set Container-----------------------\n";

	std::set<int>st;
	st.insert(10);
	st.insert(9);
	st.insert(8);
	st.insert(20);
	st.insert(9);
	std::cout << st.size() << '\n';

	for(auto ele: st) {
		std::cout << ele << " ";
	}
	std::cout << '\n';
	std::cout << '\n';

	// std::set<int>::iterator it = st.begin();
	// std::set<int>::iterator itt = st.begin();
	// std::cout << *it << '\n';

	auto it = st.begin();
	auto itt = st.begin();

	for(auto it = st.begin(); it != st.end(); it++) {
		std::cout << *it << '\n';
	}

	std::cout << '\n';

	for(auto itt = st.begin(); itt != st.end(); itt++) {
		std::cout << *itt << " ";
	}

	std::cout << '\n';


	// erase function in set
	st.erase(3);

	for(auto ele: st) {
		std::cout << ele << " ";
	}

	std::cout << '\n';
	std::cout << "------------------------\n";

	std::set<int>hello;
	for(int i = 0; i < 10; i++) {
		hello.insert(i);
	}

	std::cout << hello.size() << '\n';

	for(auto it = hello.begin(); it != hello.end(); it++) {
		std::cout << *it << " ";
	}

	std::cout << '\n';


	for(auto ele: hello) {
		std::cout << ele << " ";
	}
	std::cout << '\n';

	hello.erase(5);
	hello.erase(hello.find(3));
	hello.erase(hello.find(4), hello.end());

	for(auto ele: hello) 
		std::cout << ele << " ";
	std::cout << '\n';

	auto iter = hello.find(4);
	if(iter == hello.end()) std::cout << "Does not exist\n";
	else std::cout << "Exist\n";

	std::cout << '\n';
	std::cout << "-----------Unordered Set----------------------\n";
	std::cout << '\n';

	std::unordered_set<int>un_st;
	un_st.insert(2);
	un_st.insert(3);
	un_st.insert(2);
	un_st.insert(4);
	un_st.insert(5);

	for(auto it: un_st) std::cout << it << '\n';

	std::cout << '\n';
	std::cout << "-----------------MultiSet----------------\n";
	std::cout << '\n';


	std::multiset<int>ms;
	ms.insert(1);
	ms.insert(2);
	ms.insert(3);
	ms.insert(5);
	ms.insert(4);
	ms.insert(1);

	for(auto ele: ms) std::cout << ele << " ";
	std::cout << '\n';

	int cnt = ms.count(1);
	int cnt1 = ms.count(5);

	std::cout << cnt << " " << cnt1 << '\n';
	ms.erase(1);
	if(ms.empty()) std::cout << "Yes\n";
	else std::cout << "No\n";

	std::cout << '\n';
	std::cout << "---------------------MAP----------------------\n";
	std::cout << '\n';

	// if you want to store a key value pair
	// then use a map
	std::map<int, std::string>mp;
	mp[12] = "boyinfuture";
	mp[12] = "aadarsh";
	mp[13] = "manprit";
	mp[1] = "ishaan";
	//mp.add(12, "manroop");


	for(auto ele: mp) {
		std::cout << ele.first << " " << ele.second << '\n';
	}
	std::cout << '\n';
	std::cout << '\n';

	// std::map<int, std::vector<std::string>>mpp;
	// if(mpp.find(13) == mpp.end()) {
	// 	std::vector<int>vec;
	// 	vec.push_back("raj");
	// 	mpp[13] = vec;
	// }
	// else {
	// 	mpp[13].push_back("raj");
	// }

	// if(mpp.find(13) == mpp.end()) {
	// 	std::vector<int>vec;
	// 	vec.push_back("rj");
	// 	mpp[13] = vec;
	// }
	// else {
	// 	mpp[13].push_back("rj");
	// }

	// std::unordered_set<int, int>mpp;
	// std::multimap<int, std::string>mppp;
	// mppp.add(13, "rh");
	// mppp.add(14, "rj");
	// mppp.add(15, "deh");

	std::cout << '\n';
	std::cout << '\n';

	std::cout << "----------------queue---------\n";

	std::queue<int>q;
	//fifo
	q.push(2);
	q.push(3);
	q.push(1);
	q.push(5);
	q.push(6);

	std::cout << q.front() << '\n';
	q.pop();
	std::cout << q.size() << '\n';
	std::cout << q.empty() << '\n';

	std::cout << "----------------stack----------------\n";
	// lifo
	std::stack<int>stt;

	stt.push(2);
	stt.push(20);
	stt.push(200);
	stt.push(2000);
	stt.push(20000);

	std::cout << stt.top() << '\n';
	//std::cout << stt.size() << '\n';
	//std::cout << stt.empty() << '\n';
	std::cout << '\n';

	std::cout << "---------------priority queue max heap----------------\n";
	std::cout << '\n';

	std::priority_queue<int>pq; //  max heap data strucure
	pq.push(2);
	pq.push(200);
	pq.push(2000);
	pq.push(2005);
	pq.push(20);
	pq.push(30);

	std::cout << pq.top() << '\n';
	//std::cout << pq.pop() << '\n';
	std::cout << pq.size() << '\n';
	std::cout << pq.empty() << '\n';

	while(!pq.empty()) pq.pop();
	std::cout << pq.empty() << '\n';

	std::cout << '\n';

	std::cout << "-------------priority_queue min heap------------------\n";

	// min heap data strucutre

	std::priority_queue<int, std::vector<int>, std::greater<int>>min_q;
	min_q.push(2);
	min_q.push(200);
	min_q.push(2000);
	min_q.push(2005);
	min_q.push(20);
	min_q.push(1);
	min_q.push(30);

	std::cout << min_q.top() << '\n';
	std::cout << min_q.size() << '\n';
	std::cout << min_q.empty() << '\n';

	std::list<int>ls;
	ls.push_back(20);
	ls.push_back(10);
	ls.push_back(30);
	ls.push_front(100);
	ls.push_front(1001);

	std::cout << ls.front() << '\n';
	//ls.erase(1001);
	std::cout << ls.front() << '\n';

	std::cout << '\n';
	std::cout << '\n';


	std::vector<int>arr;
	arr.push_back(20);
	arr.push_back(21);
	arr.push_back(14);
	arr.push_back(16);

	//sort(arr.begin(), arr.end()); // sort in ascending order
	//sort(arr.begin(), arr.begin() + 3);
	//sort(arr.begin(), arr.end(), std::greater<int>()); // sort in descending order

	//sort(arr.begin(), arr.end(), comp);

	for(auto ele: arr) {
		std::cout << ele << " ";
	}
	std::cout << '\n';

	std::vector<std::pair<int, int>>arr1;
	arr1.push_back({1, 5});
	arr1.push_back({3, 4});
	arr1.push_back({2, 7});
	arr1.push_back({3, 9});
	arr1.push_back({2, 5});
	sort(arr1.begin(), arr1.end(), comp);

 	for(auto ele: arr1) {
 		std::cout << ele.first << " " << ele.second << '\n';
 	}
 	std::cout << '\n';






	return 0;
}