#include <iostream>


template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}

//Линейный поиск первого вхождения элемента key в массив arr
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0) {
	for (int i = 0; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}

//Линейный поиск последнего вхождения элемента key в массив

template <typename T>
int search_last_index(T arr[], const int length, T key) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}
//Линейный поиск последнего вхождения элемента key в массив

template <typename T>
int search_last_index(T arr[], const int length, T key, int begin) {
	for (int i = begin - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	const int size = 10;
	int arr[size]{ 10, 50, 11, 8, 50, -20, 11, 9, 50, 0 };
	std::cout << "Массив:\n";
	print_arr(arr, size);
	std::cout << "\nВведи число для поиска -> ";
	std::cin >> n;

	/*int index1 = search_index(arr, size, n);
	if (index1 != -1)
		std::cout << "Позиция числа в массиве: " << index1 << std::endl;
	else
	std::cout << "\nЧисла нет в массиве\n" << std::endl;*/

	int index2 = search_last_index(arr, size, n, 5);
	if (index2 != -1)
		std::cout << "Последняя позиция числа в массиве: " << index2 << std::endl;
	else
		std::cout << "Числа в массиве нет: " << std::endl;


	return 0;
}