/*
Chinaning
20200325
*/

#include"MaxHeap.h"
#include<iostream>
using namespace std;

int main()
{
	MaxHeap<int> heap(11);
	//���Ԫ�ع����󶥶�
	for (int i = 0; i < 10; i++)
	{
		heap.insert(i);
	}
	heap.print();
	cout << endl;
	heap.remove(8);
	heap.print();
	cout << endl;

	//����ָ�������鴴���󶥶�
	MaxHeap<int> heap2(11);
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	heap2.createMaxHeap(a, 10);
	heap2.print();
	getchar();
	return 0;
}