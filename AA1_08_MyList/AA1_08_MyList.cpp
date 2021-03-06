#include<iostream>
#include "MyList.h"


MyList::MyList() {
	first = nullptr;
	last = nullptr;
	totalElements = 0; 

}

MyList::MyList(const MyList& list)
{
	totalElements = list.totalElements; 
}


void MyList::push_back(int value) {
	if (totalElements == 0)
	{
		node* aux = new node(value, nullptr, nullptr);
		first = aux; 
	}
	else if (totalElements == 1)
	{
		node* aux = new node(value, first, nullptr);
		aux->previous = last; 
		last = aux; 
	}
	else 
	{
		node* aux = new node(value, last, nullptr);
		aux->previous = last;
		last = aux; 
		
	}
	totalElements++;
}

void MyList::pop_back()
{
	if (totalElements > 2)
	{
		node* aux = new node(last->previous->info, last->previous->previous, nullptr);
		delete(last);
		last = aux;
	}
	else if (totalElements == 2)
	{
		delete(last);
		first->next = nullptr;
	}
	else
	{
		first = nullptr;
		last = nullptr; 
	}
}

void MyList::push_front(int value)
{
	if (totalElements == 0)
	{
		node* aux = new node(value, nullptr, nullptr);
		first = aux;
	}
	else if (totalElements == 1)
	{
		node* aux = new node(value, nullptr, first);
		last = first;
	}
	else
	{
		node* aux = new node(value, nullptr, first;
		first->previous = aux;
		first = aux;
	}
	totalElements--;
}

void MyList::pop_front()
{
	if (totalElements > 2)
	{
		node* aux = new node(first->next->info, nullptr, first->next->next);
		delete(first);
		first = aux;
	}
	else if (totalElements == 2)
	{
		delete(first);
		last->previous = nullptr;
	}
	else
	{
		first = nullptr;
		last = nullptr;
	}

	totalElements--;
}

int MyList::front()
{
	return first->info;
}

int MyList::back()
{
	return last->info;
}

int MyList::getElementPos(int position)
{
	if (position == 0)
	{
		first->info;
	}
	else if (position == totalElements - 1)
	{
		return last->info;
	}
	else
	{
		node* aux = new node(first->info, nullptr, first->next);
		for (int i = 0; i < position; i++)
		{
			aux = aux->next; 
		}
		return aux->info; 
	}
}

int MyList::maxElement()
{
	int maxValue = first->info;
	node* aux = new node(first->next->info, first, first->next->next);

	for (int i = 1; i < totalElements; i++)
	{
		if (aux->info > maxValue)
		{
			maxValue = aux->info;
		}
		aux = aux->next;
	}
	return maxValue;
}

int MyList::minElement()
{
	int minValue = first->info;
	node* aux = new node(first->next->info, first, first->next->next);

	for (int i = 1; i < totalElements; i++)
	{
		if (aux->info < minValue)
		{
			minValue = aux->info;
		}
		aux = aux->next;
	}
	return minValue;
}

void MyList::insert(int value, int position)
{
	node* newValue = new node(value, nullptr, nullptr);
	node* aux = new node(first->info, nullptr, first->next);

	for (int i = 0; i < position; i++)
	{
		aux = aux->next;
	}
	newValue->previous = aux->previous;
	newValue->next = aux; 
	aux->previous->next = newValue;
	aux->previous = newValue;
	totalElements++;
}

void MyList::deletePosition(int position)
{
	node* aux = new node(first->info, nullptr, first->next);
	for (int i = 0; i < position; i++)
	{
		aux = aux->next; 
	}

	aux->previous->next = aux->next;
	aux->next->previous = aux->previous;
	delete(aux);
	totalElements--;
}

void MyList::deleteAll(int value)
{
	for (int i = 0; i < totalElements; i++)
	{
		node* aux = new node(first->info, nullptr, first->next);
		aux = aux->next;

		if (aux->info == value)
		{
			aux->previous->next = aux->next;
			aux->next->previous = aux->previous;
			delete(aux);
			totalElements--;
		}
	}	
}

void MyList::deleteDuplicates() 
{
	
	node* aux = new node(first->info, nullptr, first->next);
	node* aux2 = new node(first->next->info, first, first->next->next);

	for (int i = 1; i < totalElements; i++)
	{
		for (int j = 0; j < i; j++) 
		{
			if (aux->info == aux2->info) 
			{
				aux = aux2->next;
				aux2 = aux2->previous;
				aux2->next = aux;
				delete(aux->previous);
				aux->previous = aux2;
			}
			else 
			{
				aux = aux->next;
			}
		}
		aux = first;
	}
}

void MyList::change() 
{
	node* aux = first;
	first = last;
	last = aux;
}

int MyList::getNumElements() 
{
	return totalElements;
}

bool MyList::empty() 
{
	return MyList::totalElements == 0;
}

