#include "Header.h";
using namespace std;

int main()
{
	const int DefaultListSearch[10]{ 1,2,3,4,5,6,7,8,9,10 };
	int DefaultListSort[10]{ 1,2,10,4,5,6,6,8,9,10 };
	const int N = 10;
	const int target = 8;

	int n;
	int* List{ new int[n] {} };
	int* ListSort{ new int[n] {0,1,2} };//no more than n
	
	int sum{};
	for (int i{}; i < std::size(DefaultListSearch); sum += DefaultListSearch[i++]);
	cout << "Sum: " << sum << endl;
	//какие то фрагменты кода включаются какие то нет в будущем управление и архитектура, возможно в параллельной разработке такое есть или в ассинхронной
	InsertionSort(DefaultListSort, N);
	for (int n : DefaultListSort)
	{
		cout << n << endl;
	}// random for DefaultListSort
	QuickSort(DefaultListSort, 0, N - 1);
	for (auto n : DefaultListSearch)
	{
		cout << n << endl;
	}
	SelectionSort(DefaultListSort, N);
	for (int i = N - 1; i >= 0; i--)
	{
		cout << DefaultListSort[i] << endl;
	}

	cout << "input size" << endl;
	cin >> n;
	int i{};
	while (i < n)
	{
		cin >> List[i];    // вводим число
		i++;
	}
	//class sort, search, list(+random), git```

	for (i = n - 1; i >= 0; i--)
	{
		cout << *(List + i) << endl;
	}



	unsigned n{ 5 };  // размер массива
	int* p{ new int[n] { 1, 2, 3, 4, 5 } };

	// используем индексы
	for (unsigned i{}; i < n; i++)
	{
		std::cout << p[i] << "\t";
	}
	std::cout << std::endl;

	// добавляем к адресу в указателе смещение
	for (unsigned i{}; i < n; i++)
	{
		std::cout << *(p + i) << "\t";
	}
	std::cout << std::endl;

	// проходим по массиву с помощью вспомогательного указателя
	for (int* q{ p }; q != p + n; q++)
	{
		std::cout << *q << "\t";
	}
	std::cout << std::endl;

	delete[] p;
	p = nullptr;



	return 0;
}