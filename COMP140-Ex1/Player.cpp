#include "stdafx.h"
#include "Player.h"

Player::Player()
{
	Health = 100;
	Strength = 10;
	Dexterity = 10;
	Constitution = 10;
	Intelligence = 10;
	Wisdom = 10;
	Charisma = 10;
	Name = "Player";
}

Player::~Player()
{
}


void Player::SetName(const std::string & name)
{
	Name = name;
}

const std::string & Player::GetName()
{
	return Name;
}

