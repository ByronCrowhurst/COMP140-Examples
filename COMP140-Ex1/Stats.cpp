#include "stdafx.h"
#include "Stats.h"

void Stats::RandomiseStats()
{
	srand(time(NULL));

	Strength = rand() % 20;
	Dexterity = rand() % 20;
	Constitution = rand() % 20;
	Intelligence = rand() % 20;
	Wisdom = rand() % 20;
	Charisma = rand() % 20;
}

void Stats::DisplayStats()
{
	std::cout << "Strength " << Strength << std::endl;
	std::cout << "Dexterity " << Dexterity << std::endl;
	std::cout << "Constitution " << Constitution << std::endl;
	std::cout << "Intelligence " << Intelligence << std::endl;
	std::cout << "Wisdom " << Wisdom << std::endl;
	std::cout << "Charisma " << Charisma << std::endl;

}