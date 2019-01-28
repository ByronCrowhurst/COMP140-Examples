#include "stdafx.h"
#include "Weapon.h"

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

void Weapon::CreateWeapon(const std::string name, float reloadTime, int ammo, int strength)
{
	CurrentWeaponName = name;
	CurrentReloadTime = reloadTime;
	CurrentAmmo = ammo;
	CurrentWeaponStrength = strength;
}

void Weapon::DisplayWeapon()
{
	std::cout << "Name " << CurrentWeaponName << std::endl;
	std::cout << "Reload Time " << CurrentReloadTime << std::endl;
	std::cout << "Ammo " << CurrentAmmo << std::endl;
	std::cout << "Strength " << CurrentWeaponStrength << std::endl;
}
