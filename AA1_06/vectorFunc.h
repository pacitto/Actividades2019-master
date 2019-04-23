

// a) 
std::vector<int>addVectors(std::vector<int> vec1, std::vector<int> vec2)
{
	std::vector<int>VecSum;
	for (int i = 0; i < vec1.size(); i++)
	{
		VecSum.push_back(vec1[i] + vec2[i]);
		return VecSum;
	}
}

// b)
void concatVectors(std::vector<std::string> name1, std::vector<std::string> name2)
{
	name1.insert(name1.end(), name2.begin(), name2.end());

}

// c)
void shiftRight(std::vector<int>&vec1)
{
	int randNum = rand() % 100;

	vec1.insert(vec1.begin(), randNum);
}

// d)
void rotateLeft(std::vector<int>&vec1)
{
	vec1.push_back(vec1[0]);
	vec1.erase(vec1.begin());
}

// e)
void searchAdjacent(std::vector<int>&vec1)
{

	for (int i = 0; i < vec1.size(); i++)
	{
		if (vec1[i] == vec1[i - 1] == vec1[i - 2])
		{
			vec1.erase(vec1.begin() + i);
			vec1.erase((vec1.begin() + i) - 1);
			vec1.erase((vec1.begin() + i) - 2);

			for (int j = 0; j < 3; j++)
			{
				int randNum = rand() % 100;
				vec1.insert(vec1.end(), randNum);
			}

		}


	}
}

// f)

bool isPalindrome(std::vector<char>charArr)
{
	for (int i = 0; i < charArr.size(); i++)
	{
		if (charArr[i] == charArr[charArr.size() - i])
		{
			return true;
		}

		return false;

	}
}

void print(std::vector<int>vec1)
{
	for (std::vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++)
	{
		std::cout << *it << " " ; 
	}
}

void print(std::vector<char>vec1)
{
	for (std::vector<char>::iterator it = vec1.begin(); it != vec1.end(); it++)
	{
		std::cout << *it << " ";
	}
}

void print(std::vector<std::string>vec1)
{
	for (std::vector<std::string>::iterator it = vec1.begin(); it != vec1.end(); it++)
	{
		std::cout << *it << " ";
	}
}
#pragma once
