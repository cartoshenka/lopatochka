//»нсайды:
// -“во€ ошибка заключаетс€ в том, что ты пыталс€ восприн€ть такую сложную витиеватую вещи как алгоритм как 
// нечто целостное, такое лучше рассматиривать маленькими кусочками
// -»нтересна€ конструкци€ ее можно рассматривать на разных уровн€х:
//		перемещение элемента newElement
//		относительное смещение location 
//-Ѕыло бы неплохо иметь возможность тестировать один список на разных алгоритмах, а не создавать дл€ каждого новый
// -Ќадо научитьс€ быстро читать непон€тный кода (суперспособность)
// -„ем больше пересекающихс€ слоев логики механики, тем код эффективнее, но его сложнее читать
// по экономнее и более логично объ€вл€й и вводи переменные
// вопросы:
//  -как еще можно пробегатс€ по измен€ющимус€ в размерах цикла for? рекурсивно? 


void InsertionSort(int *list, int N) {
	int newElement, location, t;
	for (int i = 1; i < N; i++)
	{
		newElement = list[i];
		location = i - 1;
		while (location >= 0 && list[location] > newElement)
		{
			t = list[location + 1];
			list[location + 1] = list[location];
			list[location] = t;
			location -= 1;
		}
		list[location + 1] = newElement;
	}
}

void SelectionSort(int* list, int N) {
	int n = N;
	int start = 0;
	int t;
	for (int i = 0; i < n; i++)
	{
		for (int i = start; i < n; i++)
		{

			if (list[i] < list[start]) {
				t = list[start];
				list[start] = list[i];
				list[i] = t;
			}
		}
		//прикол
		start++;
	}
	
}

void Swap(int* list, int i, int j) {
	int t = list[i];
	list[i] = list[j];
	list[j] = t;
}

int PivotList(int* list, int first, int last){
	int PivotValue = list[first];
	int PivotPoint = first;

	for (int i = first+1; i <= last; i++)
	{
		if (list[i] < PivotValue) {
			PivotPoint += 1;
			Swap(list, PivotPoint, i);
		}
	}
	Swap(list, first, PivotPoint);
	return PivotPoint;
}

void QuickSort(int* list, int first, int last) {
	if (first < last) {
		int pivot = PivotList(list, first, last);
		QuickSort(list, first, pivot - 1);
		QuickSort(list, pivot + 1, last);
	}

}