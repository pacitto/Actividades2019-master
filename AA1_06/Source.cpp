#include <vector>
#include <string>
#include <ctime>
#include <iostream>
#include "vectorFunc.h"


struct personas
{
	std::string nombre;
	int nacimiento;
	int dni;
};




int main() 
{
	std::vector<int>v1(5); 
	std::vector<int>v2(10);
	std::vector<int>v3({ 10,9,8,7,6,5,4,3,2,1 });
	std::vector<std::string>v4({"Gertrudiz", "Pancracia", "Anacleto", "Hipolito", "Eustaquio", "Fulgencia" }); 
	std::vector<int>v5(v3); 
	std::vector<personas>v6({{"Gertrudiz", 12071993, 79274191},{"Pancracia", 23051999, 12345678},{"Hipolito", 17021998, 87654321} });

	//A con vectores del mismo tamaño
	std::vector<int> v11({ 10,20,30 });
	std::vector<int> v12(v11);
	std::vector<int> v13 = addVectors(v11, v12);

	std::cout << "A(20-40-60):";
	print(v13);

	//A con vectores de diferente tamaño
	std::vector<int> v21({ 10,20,30 });
	std::vector<int> v22({ 10,20,30,40,50 });
	std::vector<int> v23 = addVectors(v21, v22);

	std::cout << "A(20-40-60,40,50):";
	print(v23);

	//B 
	std::vector<std::string> vb1({ "dabale" ,"arroz","a","la","zorra" });
	std::vector<std::string> vb2({ "el","abad" });
	concatVectors(vb1, vb2);

	std::cout << "B(dabalearrozalazorraelabad):";
	print(vb1);

	//C
	shiftRight(v21);

	std::cout << "C(X,10,20):";
	print(v21);

	//D
	rotateLeft(v22);
	std::cout << "D(20,30,40,50,10):";
	print(v22);

	//E
	std::vector<int>ve1({ 1,2,2,2,3,4,5 });
	searchAdjacent(ve1);
	std::cout << "E(1,X,X,X,3,4,5):";
	print(ve1);


	std::vector<int>ve2({ 1,2,2,3,4,5 });
	searchAdjacent(ve2);
	std::cout << "E(1,2,2,3,4,5):";
	print(ve2);

	std::vector<int>ve3({ 1,2,2,3,4,5,5,5 });
	searchAdjacent(ve3);
	std::cout << "E(1,2,2,3,4,X,X,X):";
	print(ve3);

	//F
	std::vector<std::string> fraseS({ "dabale" ,"arroz","a","la","zorra","el","abad" });
	std::vector<char> fraseC({ 'd','a','b','a','l','e',' ' ,'a','r','r','o','z',' ' ,'a',' ' ,'l','a',' ' ,'z','o','r','r','a',' ' ,'e' ,'l',' ' ,'a','b','a','d' });

	
}