#include<iostream>
#include"Array.h"
using namespace std;

int main()
{
	Array obj;
	int value;
	int choice;
	int index;
	
	int arr[5] = { 5,3,8,15,12 };
	
	for (int i = 0;i < 5;i++)
	{
		obj.insertAtTail(arr[i]);
	}
count:
	cout << endl << endl;
	cout << "------------------Home Page------------------" << endl;
	cout << "Press 1 for insert at tail " << endl;
	cout << "Press 2 for insert at head " << endl;
	cout << "Press 3 for remove the value stored in array " << endl;
	cout << "Press 4 for update the value in the array " << endl;
	cout << "Press 5 for liner searching " << endl;
	cout << "Press 6 for print front side of array " << endl;
	cout << "Press 7 for print back side of array " << endl;
	cout << "Press 8 for check the value of array at the given index " << endl;
	cout << "Press 9 for sort the array in decending order" << endl;
	obj.displayAll();
	cout << endl;
	cout << "Enter your choice [1,2,3,4,5,6,7] " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "enter the array value" << endl;
		cin >> value;
		obj.insertAtTail(value);
		obj.displayAll();
		goto count;
		break;
	case 2:
		cout << "enter the array value" << endl;
		cin >> value;
		obj.insertAtHead(value);
		obj.displayAll();
		goto count;
		break;
	case 3:
		cout << "enter the array value" << endl;
		cin >> value;
		obj.remove(value);
		obj.displayAll();
		goto count;
		break;
	case 4:
		cout << "Enter the array value" << endl;
		cin >> value;
		cout << "Enter the index " << endl;
		cin >> index;
		obj.update(index,value);
		obj.displayAll();
		goto count;
		break;
	case 5:
		cout << "enter the array value" << endl;
		cin >> value;
		obj.linearSearch(value);
		obj.displayAll();
		goto count;
		break;
	case 6:
		obj.front();
		goto count;
		break;
	case 7:
		obj.back();
		break;
	case 8:
		cout << "Enter the index" << endl;
		cin >> index;
		obj.index_at(index);
		break;
	case 9:
		obj.sorting();
		break;

	default:
		cout << "Wrong Input" << endl;
		break;

	}
	
	
	
}