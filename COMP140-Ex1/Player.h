#pragma once
#include "Health.h"
#include "Weapon.h"


class Player
{
public:
	Player();
	~Player();

	//Set Name
	void SetName(const std::string& name);
	//Get Name
	const std::string& GetName();

private:
	std::string Name;
};