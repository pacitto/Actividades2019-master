#pragma once 

class MyStack
{
public:
	MyStack();
	MyStack(const MyStack &s);
	~MyStack();
	
	void push(int x); 
	void pop();
	bool isEmpty();
	int top(); 
	int size(); 
	void print();


private:
	std::vector<int>pila; 
};