#include <iostream>
#include <stack>
#include <vector>
#include <deque>
#include <deque>

namespace Search
{
	int linearSearch(int a[], int length, int value) {

		int index = -1;

		for (int i = 0; i < length; i++) {
			if (value == a[i]) {
				index = i;
				break;
			}
		}
		return index;
	}

	int binarySearch(int a[], int length, int value)
	{
		int iLimit = 0;
		int sLimit = length - 1;
		int iMid;
		while (iLimit <= sLimit)
		{
			iMid = (iLimit + sLimit) / 2;
			if (a[iMid] == value) return iMid;
			else
				if (value < a[iMid]) sLimit = iMid - 1;
				else iLimit = iMid + 1;
		}
		return -1;
	}
	std::vector<int> linearSearchIndexs(int a[], int length, int value) {

		std::vector<int> V(length); 
		
		for (int i = 0; i < length; i++) {
			if (value == a[i]) {
				
				V.push_back(a[i]);
			}
		}
		return V; 
	}
	
	int binarySearchR(int a[], int length, int value)
	{

	}

}
