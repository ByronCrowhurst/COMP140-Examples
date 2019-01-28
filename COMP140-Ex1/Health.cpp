#include "stdafx.h"
#include "Health.h"

Health::Health()
{

}

Health::~Health()
{

}

void Health::SetHealth(int health)
{
	std::cin >> health >> std::endl;
}

int Health::GetHealth()
{
	return health;
}

void Health::TakeDamage(int damage)
{
	Health -= damage;
}

void Health::HealDamage(int health)
{
	Health += health;
}