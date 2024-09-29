#include<iostream>

using namespace std;
//Конструкции: (желательно детально понимать то, что используешь, выдели дополнительно время на это, "тонкая документация")
// while, switch, массив
//Вопросы:
// как передать список в функцию? 
//Инсайды:
//-Хороший прием выделять какие потенциальные случаи могут реализоваться и исходить из них в решении
//-интересный способ переобозначения переменных, сколько памяти теряется при этом ?
//-гипотеза хороший ускоритель, на начальных этапах, когда отвечаешь на вопрос не зная правильного ответа
//-
int Compare(int a, int b) {
	if (a < b) { return -1; }
	else if (a == b) { return 0; }
	else if (a > b) { return 1; }
}

int BinarySearch(int* list, const int target, int N) {
	int start = 1;
	int end = N;
	int middle;
	while (start <= end) {
		middle = (start + end) / 2;
		switch (Compare(list[middle], target)) {
		case -1: start = middle + 1;
			break;
		case 0: return middle;
			break;
		case 1: end = middle - 1;
			break;
		}
	}
	return middle;
}
//int main()
//{
//	int list[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	int target = 8;
//	int N = 10;
//	cout << "HI\n" << BinarySearch(list, target, N);
//	return 0;
//}
