#pragma once


class Weapon()
{
public:
	Weapon();
	~Weapon();
	void DisplayWeapon();
	void CreateWeapon(const std::string name, float reloadTime, int ammo, int strength)
private:
	std::string CurrentWeaponName;
	float CurrentReloadTime;
	int CurrentAmmo;
	int CurrentWeaponStrength;
}