//�������:
// -���� ������ ����������� � ���, ��� �� ������� ���������� ����� ������� ���������� ���� ��� �������� ��� 
// ����� ���������, ����� ����� �������������� ���������� ���������
// -���������� ����������� �� ����� ������������� �� ������ �������:
//		����������� �������� newElement
//		������������� �������� location 
//-���� �� ������� ����� ����������� ����������� ���� ������ �� ������ ����������, � �� ��������� ��� ������� �����
// -���� ��������� ������ ������ ���������� ���� (����������������)
// -��� ������ �������������� ����� ������ ��������, ��� ��� �����������, �� ��� ������� ������
// �� ��������� � ����� ������� �������� � ����� ����������
// �������:
//  -��� ��� ����� ���������� �� ������������� � �������� ����� for? ����������? 


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
		//������
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