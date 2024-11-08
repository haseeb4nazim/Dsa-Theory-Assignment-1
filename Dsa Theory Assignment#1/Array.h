#pragma once
class Array
{
private:
	int capacity;
	int size;
	int *arr;
public:
	Array();
	~Array();
	void insertAtTail(int);
	void insertAtHead(int);
	void remove(int );
	void update(int ,int );
	void linearSearch(int);
	void front();
	void back();
	void index_at(int);
	void sorting();
	void displayAll();

};

