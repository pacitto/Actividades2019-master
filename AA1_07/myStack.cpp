#include <iostream>
#include <string>
#include <vector>
#include "myStack.h"

MyStack::MyStack()
{

}

MyStack::MyStack(const MyStack &s)
{
	//std::vector<int> pila(v1);

}

MyStack::~MyStack() {

}

void MyStack::push(int x)
{
	pila.push_back(x); 
}

void MyStack::pop()
{
	pila.pop_back(); 
}

bool MyStack::isEmpty()
{
	return pila.empty(); 
}

int MyStack::top()
{
	return pila.back(); 
}

int MyStack::size()
{
	return pila.size(); 
}

void MyStack::print()
{
	for(int i = 0; i < pila.size(); i++)
	{
		std::cout << pila[i];
	}
}

