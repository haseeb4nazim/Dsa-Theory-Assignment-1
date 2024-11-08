#include "Array.h"
#include<iostream>
using namespace std;
Array::Array()
{
	capacity = 10;
	size = 0;
	arr = new int[capacity];
}

Array::~Array()
{
	delete[] arr;
}

void Array::insertAtTail(int value)
{
	if (size < capacity)
	{
		arr[size] = value;
		size++;
		if (size >= 6)
		{
			cout << "inserted" << endl;
		}
	}
	else
	{
		cout << "Array is full" << endl;
	}
}

void Array::insertAtHead(int value)
{
	if (size < capacity)
	{
		for (int i = size;i > 0;i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = value;
		size++;
		cout << "Inserted" << endl;


	}
}

void Array::remove(int value)
{
	
		for (int i = 0;i < size;i++)
		{
			if (arr[i] == value)
			{
				for (int j = i;j < size;j++)
				{
					arr[j] = arr[j + 1];
				}
				cout << "remove" << endl;
				size--;
			}
		}
	
}

void Array::update(int index,int value)
{
	for (int i = 0;i < size;i++)
	{
		if (i == index)
		{
			arr[i] = value;
			break;
		}
		
	}
	cout << "Updated" << endl;
}

void Array::linearSearch(int value)
{
	for (int i = 0;i < size;i++)
	{
		if (arr[i] == value)
		{
			cout << "The value " << value << " is at index " << i << endl;
			return;
		}
		
	}
	cout << "The value " << value << " is not found in this array" << endl;
}

void Array::front()
{
	for (int i = 0;i < size;i++)
	{
		cout << "[" << arr[i] << "]";
	}
}

void Array::back()
{
	for (int i = size-1;i >= 0;i--)
	{
		cout << "[" << arr[i] << "]";
	}
}

void Array::index_at(int index)
{
	cout <<"The value is "<<arr[index]<<" at index "<<index;
}

void Array::sorting()
{
	
	int temp;
	for (int i = 0;i < size-1;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				
			}
		}
	}
	cout << "Array in decending order" << endl;
	for (int i = 0;i <size;i++)
	{
		cout << "[" << arr[i] << "]";
	}
}

void Array::displayAll()
{
	for (int i = 0;i < size;i++)
	{
		cout <<"[" << arr[i] << "]";
	}
}
