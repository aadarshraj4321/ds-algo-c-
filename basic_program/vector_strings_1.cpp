#include<bits/stdc++.h>




int main(){

	std::vector<int>v1;
	std::cout << v1.capacity() << " " << v1.size() << '\n';

	for(int i = 0; i < 10; i++){
		v1.push_back(i);
		std::cout << "Added " << i << '\n'; 
		std::cout << v1.capacity() << " " << v1.size() << '\n';
	}
	v1.pop_back();
	std::cout << v1.capacity() << " " << v1.size() << '\n';

	std::cout << '\n';
	std::vector<int>v2(10, -1);
	std::cout << v2.capacity() << " " << v2.size() << '\n';

	// std::vector<int>v3{12 13 14};
	// for(auto ele:v3){
	// 	std::cout << ele << '\n';
	// }

	int arr[] = {1, 2, 3, 4, 5, 6};
	std::vector<int>v5(arr, arr + 5);

	for(auto ele:v5){
		std::cout << ele << '\n';
	}

	std::cout << '\n';
	std::vector<int>v6(v5.begin(), v5.end());
	for(auto ele:v6){
		std::cout << ele << '\n';
	}

	std::cout << '\n';
	std::cout << (v5 == v6) << '\n';
	std::cout << (v5 == v2) << '\n';
	std::cout << '\n';


	struct Vertex {

		float x, y, z;

		Vertex() {}
		Vertex(float x, float y, float z)
			: x(x), y(y), z(z) {}

		Vertex(const Vertex &obj){
			std::cout << "Copied Deep\n";
			x = obj.x;
			y = obj.y;
			z = obj.z;
		}
	};

	Vertex obj(1, 2, 3);
	std::vector<Vertex>v7;
	v7.reserve(3);
	v7.emplace_back(obj);
	v7.emplace_back(4, 5, 6);
	v7.emplace_back(7, 8, 9);
	std::cout << v7[0].x << " " << v7[0].y << " " << v7[0].z << '\n';
	std::cout << v7[1].x << " " << v7[1].y << " " << v7[1].z << '\n';
	std::cout << v7[2].x << " " << v7[2].y << " " << v7[2].z << '\n';
	std::cout << '\n';

	for(int i = 0; i < v7.size(); i++){
		std::cout << v7[i].x << " " << v7[i].y << " " << v7[i].z << '\n';
	}

	std::cout << '\n';
	for(auto &ele:v7){
		std::cout << ele.x << " " << ele.y << " " << ele.z << '\n';
	}

	std::cout << '\n';

	// Copy Constructor
	struct tmp {
		int x, y, z;
		int *ptr;
		tmp(){}
		tmp(int x, int y): x(x), y(y) {
			ptr = &z;
		}

		tmp(const tmp &obj){
			x = obj.x;
			y = obj.y;
			z = obj.z;
			ptr = &z;
		}

		void display(){
			std::cout << x << " " << y << ptr << " " << *ptr << " " << '\n';
		}
	};

	tmp t1(1, 2);
	t1.display();
	tmp t2 = t1;
	t2.display();
	t2.x = 10;
	t2.display();
	t1.display();
	*(t2.ptr) = 11;
 	t1.display();
 	t2.display();

 	std::vector<int>v8{1, 2, 3, 8, 10, 11, 7, 8, 9, 10};
 	std::cout << v8[10] << '\n';
 	//std::cout << v8.at(10) << '\n';
 	std::cout << v8.max_size() << '\n';

 	std::cout << v8.front() << " " << v8.back() << " " << v8.size() << " " << v8.empty() << '\n';
 	v8.erase(v8.begin(), v8.begin() + 2);
 	for(auto ele: v8){
 		std::cout << ele << " ";
 	}

 	std::cout << '\n';

 	std::sort(v8.begin(), v8.end());
 	for(auto ele: v8){
 		std::cout << ele << " ";
 	}

 	std::cout << '\n';

 	std::cout << (v8 == std::vector<int>{3, 7, 8, 8, 9, 10, 10, 11});

 	std::vector<std::vector<int>>mat(5, std::vector<int>(4, 1));
 	for(auto &row: mat){
 		for(auto &el: row){
 			std::cout << el << " ";
 		}
 		std::cout << '\n';
 	}

	return 0;
}