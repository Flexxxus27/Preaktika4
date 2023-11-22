#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>




template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "Массив:\n";
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void fill_arr(T arr[], const int length, int right, int left) {
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		arr[i] = rand() % (right - left) + left;
	}

}

template <typename T>
void clear_arr(T arr[], const int length, T num1) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == num1)
			arr[i] = 0;
	}
}

template <typename T>
int index_sum(T arr1[], T arr2[], const int length, int num1) {
	if (num1 <= length)
		return arr1[num1] + arr2[num1];
	else {
		std::cout << "ERROR ";
		return 0;
	}
}

int compare_pare(int arr[], const int length, int num1, int num2) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == num1 && arr[i + 1] == num2)
			return i;
		else
			return -1;
		
	}
}

void prime_range(int num1, int num2) {
	int counter = 0;
	for (int i = num1; i <= num2; i++) {
		for (int j = 2; j <= num2; j++) {
			if (i % j == 0)
				counter++;
		}
		if (counter == 1)
			std::cout << i << ' ';
		counter = 0;
		
	}

}
void prime_range(int num1) {
	prime_range(1, num1);
}







int main() {
	setlocale(0, "");
	int n;

	//Задача 1.
	/*
	std::cout << "Задача 1.\n";
	const int size1 = 10;
	int arr1[size1]{};
	fill_arr(arr1, size1, 10, 1);
	print_arr(arr1, size1);
	std::cin >> n;
	clear_arr(arr1, size1, n);
	print_arr(arr1, size1);
	std::cout << '\n';
	*/


	//Задача 2.
	/*
	std::cout << "Задача 2.\n";

	const int size2 = 4;
		
	int arr2[size2]{};
	int index1;
	int arr3[size2]{};
	fill_arr(arr2, size2, 10, 1);
	fill_arr(arr3, size2, 20, 10);
	print_arr(arr2, size2);
	print_arr(arr3, size2);
	std::cout << "Введите индекс -> ";
	std::cin >> index1;

	std::cout << index_sum(arr2, arr3, size2, index1) << "\n\n";
	*/


	//Задача 3.
	/*
	std::cout << "Задача 3.\n\n";
	int z, x = 0;
	const int size3 = 10;
	int arr4[size3]{};
	fill_arr(arr4, size3, 20, 1);
	print_arr(arr4, size3);
	std::cout << "Введите 1-ое число -> ";
	std::cin >> z;
	std::cout << "Введите 2-ое число -> ";
	std::cin >> x;
	std::cout << compare_pare(arr4, size3, z, x);
	*/


	//Задача 4.
	std::cout << "Задача 4.\n\n";
	prime_range(10, 30);







	return 0;
}