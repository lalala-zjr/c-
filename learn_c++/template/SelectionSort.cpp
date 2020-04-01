#include<iostream>
template<typename T>
void SelectionSort(T a[],int n){
	for(int i = 0;i<n-1;i++){
		int index = i;
		T min = a[i];
		for(int j = i+1;j<n;j++){
			if(min > a[j]){
				min = a[j];
				index = j;
			}
		}
		if(index != i){
			T temp = a[index];
			a[index] = a[i];
			a[i] = temp;
		}
	}
}
int main(){
	int a1[8] = {3,5,7,4,2,9,6,1};
	int p;
	std::cout << "int型的选择排序" << std::endl;
	std::cout << "原始数据：";
	for(p=0;p<8;p++){
		std::cout << a1[p] << " ";
	}
	SelectionSort(a1,8);
	std::cout << "\n排序数据：";
	for(p=0;p<8;p++){
		std::cout << a1[p] << " ";
	}
	std::cout << "\n\ndouble型的选择排序" << std::endl;
	double a2[3] = {3.3,8.1,2.6};
	std::cout << "原始数据：";
	for(p=0;p<3;p++){
		std::cout << a2[p] << " ";
	}
	SelectionSort(a2,3);
	std::cout << "\n排序数据：";
	for(p=0;p<3;p++){
		std::cout << a2[p] << " ";
	}
	std::cout << "\n";
	return 0;
}