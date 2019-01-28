#pragma once

class Health
{
public:
	Health();
	~Health();
	//Set Health
	void SetHealth(int health);
	//Get Health
	int GetHealth();
	//Take Damage
	void TakeDamage(int damage);
	//Heal Damage
	void HealDamage(int health);
private:
	int Health;
};
