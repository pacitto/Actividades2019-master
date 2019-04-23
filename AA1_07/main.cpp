#include <iostream>
#include <string>
#include <vector>
#include "myStack.h"

int main()
{
	MyStack stack1;


	//push
	std::cout << "Funcion Push: " << std::endl; 
	stack1.push(12);
	stack1.push(23);
	stack1.push(34);
	stack1.print(); 

	MyStack stack2(stack1);

	std::cout<<std::endl; 

	//pop
	std::cout << "Funcion Pop: " << std::endl;
	stack1.pop();
	stack1.print();

	std::cout << std::endl;


	//isEmpty
	std::cout << "Funcion isEmpty: " << std::endl;
	if (stack1.isEmpty())
	{
		std::cout << "La pila esta vacia" << std::endl;
	}

	else std::cout << "La pila no esta vacia"<< std::endl;

	std::cout << std::endl;


	//top
	std::cout << "Funcion top: " << std::endl;

	int elementoTop = stack1.top();
	std::cout << elementoTop << std::endl; 

	std::cout << std::endl;


	//size
	std::cout << "Funcion size: " << std::endl;
	int size = stack1.size();
	std::cout << size << std::endl; 

	std::cout << std::endl;


	system("pause");
	return 0; 
	





}