#include <iostream>
#include <string>
#include <ctime>

const int MAX_ENEMIES = 5; 


//  Apartado 1
enum enemyType {ZOMBIE, VAMPIRE, GHOST, WITCH};

//Apartado 2
struct Enemy
{
	enemyType type; 
	std::string name; 
	int health;

};

//Apartado 3
bool equalEnemies(Enemy enemy1, Enemy enemy2)
{
	if (enemy1.name == enemy2.name && enemy1.type == enemy2.type)
	{
		return true;
	}

	else return false;


}

//Apartado 4 
Enemy createRandomEnemy()
{
	

	Enemy enemy1; 

	int i = rand() % 5; 
	std::string names[] = { "Pepe", "Pepo", "Pepi", "Pepa", "Pepu" };

	enemy1.name = names[i]; 
	enemy1.type = enemyType(rand() % 4); 
	enemy1.health = rand() % (500 - 1) + 1; 

	return enemy1; 


}


//Apartado 5
std::string getEnemytypeString(enemyType enemy1)
{
	std::string type;
	switch (enemy1)
	{
	case ZOMBIE:
		type = "ZOMBIE"; 
		break;
	case VAMPIRE:
		type = "VAMPIRE";
		break;
	case GHOST:
		type = "GHOST";
		break;
	case WITCH:
		type = "WITCH";
		break;
	default:
		break;
	}

	return type; 
}

int main()
{

	//Apartado 6
	srand(time(NULL));
	Enemy enemies[MAX_ENEMIES]; 


	//Apartado 7
	for (int i = 0; i < MAX_ENEMIES; i++)
	{
		enemies[i] = createRandomEnemy();
		
		for (int j = 0; j < MAX_ENEMIES; j++)
		{
			if (equalEnemies(enemies[i], enemies[j]) == true)
			{
				enemies[j] = createRandomEnemy();
				
			}
			
		}
		
	}

	
	for (int i = 0; i < MAX_ENEMIES; i++)
	{
		std::cout << enemies[i].name << " is a " << getEnemytypeString(enemies[i].type )<< " whose life is " << enemies[i].health <<std::endl; 
	}

	system("pause"); 
}